#include <Reconocimiento_de_n_meros_y_formas_inferencing.h>
#include <Arduino_BMI270_BMM150.h>

#define NUM_FEATURES 124 // Número total de características esperadas (62 pares de X, Y)

float features[NUM_FEATURES];

int raw_feature_get_data(size_t offset, size_t length, float *out_ptr) {
    memcpy(out_ptr, features + offset, length * sizeof(float));
    return 0;
}

void setup() {
    Serial.begin(115200);
    initPeripherals();
}

void loop() {
    if (!collectSensorData()) {
        Serial.println("Failed to collect data!");
        delay(1000);
        return;
    }

    ei_impulse_result_t result;
    if (classifySignal(&result) != EI_IMPULSE_OK) {
        Serial.println("Classification failed!");
        delay(1000);
        return;
    }

    printInferenceResult(result);
    delay(1000); // Pausa de 1 segundo antes de repetir el ciclo
}

void initPeripherals() {
    pinMode(LEDR, OUTPUT);
    pinMode(LEDG, OUTPUT);
    pinMode(LEDB, OUTPUT);
    turnOffLEDs();

    if (!IMU.begin()) {
        Serial.println("Failed to initialize IMU!");
        while (1);
    }
}

bool collectSensorData() {
    for (int i = 0; i < NUM_FEATURES / 2; i++) {
        if (IMU.accelerationAvailable()) {
            float x, y, z;
            IMU.readAcceleration(x, y, z);
            features[2 * i] = x;
            features[2 * i + 1] = y;
        } else {
            return false; // No data available
        }
        delay(100); // Ajusta según la velocidad de muestreo
    }
    return true;
}

EI_IMPULSE_ERROR classifySignal(ei_impulse_result_t *result) {
    signal_t features_signal;
    features_signal.total_length = NUM_FEATURES;
    features_signal.get_data = &raw_feature_get_data;

    return run_classifier(&features_signal, result, false);
}

void printInferenceResult(ei_impulse_result_t result) {
    Serial.printf("Timing: DSP %d ms, inference %d ms, anomaly %d ms\n",
                  result.timing.dsp, result.timing.classification, result.timing.anomaly);

    int max_index = -1;
    float max_value = 0.0;
    for (uint16_t i = 0; i < EI_CLASSIFIER_LABEL_COUNT; i++) {
        Serial.printf("  %s: %.5f\n", ei_classifier_inferencing_categories[i], result.classification[i].value);
        if (result.classification[i].value > max_value) {
            max_value = result.classification[i].value;
            max_index = i;
        }
    }

    turnOnLEDs(max_index);

#if EI_CLASSIFIER_HAS_ANOMALY
    Serial.printf("Anomaly prediction: %.3f\n", result.anomaly);
#endif
}

void turnOffLEDs() {
    digitalWrite(LEDR, HIGH);
    digitalWrite(LEDG, HIGH);
    digitalWrite(LEDB, HIGH);
}

void turnOnLEDs(int pred_index) {
    turnOffLEDs();
    switch (pred_index) {
        case 0:
            digitalWrite(LEDR, LOW);
            break;
        case 1:
            digitalWrite(LEDG, LOW);
            break;
        case 2:
            digitalWrite(LEDB, LOW);
            break;
        default:
            turnOffLEDs();
            break;
    }
}
