<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# INFORME DE LABORATORIO N° 3: Implementación con TinyML 

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

# 1.- Introducción:

<p align="justify">
En la actualidad, el avance de la tecnología ha permitido la miniaturización y optimización de sistemas de inteligencia artificial, dando lugar al concepto de Tiny Machine Learning (TinyML). Este término TinyML [1] se refiere al uso de inteligencia artificial liviana en dispositivos integrados  que permite ejecutarlo en dispositivos con recursos limitados, como microcontroladores y sensores embebidos, lo que abre nuevas posibilidades para su integración en aplicaciones del Internet de las Cosas (IoT).
</p>
<p align="justify">
En este proyecto, se realizó un modelo de TinyML utilizando la plataforma Edge Impulse. El uso de este servicio [2] facilita la creación de modelos solo conectando un microcontrolador, como el Arduino Nano 33 BLE Sense, lo que permite interactuar con dispositivos de manera eficiente y en tiempo real, sin la necesidad de depender de conexiones a la nube.
</p>
<p align="justify">
El sistema está diseñado para identificar patrones de movimiento y activar diferentes LEDs en función de los gestos detectados. En concreto, el Arduino enciende un LED rojo al detectar la figura de un círculo, un LED azul cuando se dibuja el número 3 y un LED verde al reconocer el número 1. Este proyecto no solo demuestra las capacidades del TinyML en la interpretación de movimientos, sino que también resalta la viabilidad de implementar soluciones inteligentes en dispositivos embebidos con recursos limitados.
</p>

# 2.- Metodología:
<p align="justify">
El objetivo principal de este proyecto es implementar un sistema de detección de formas y números utilizando Tiny Machine Learning (TinyML) en el microcontrolador  Arduino  Nano 33 BLE Sense. El sistema debe ser capaz de encender un LED de diferentes colores en función de los patrones dibujados, específicamente:
</p>

* LED rojo para un círculo.
* LED azul para el número 3.
* LED verde para el número 1.

A continuación, se describen las etapas principales.
 
## 2.1 Preparación de datos (Captura de movimientos)
<p align="justify">
Utilizaremos un modelo de TinyML en el Arduino Nano 33 BLE Sense para identificar los patrones objetivos. Por ende, la primera fase del proyecto consistió en la captura y preparación de los datos del sensor para reconocer los patrones de un círculo, el número 3 y el número 1. Los datos fueron clasificados y organizados en categorías correspondientes a cada patrón. Posteriormente, se dividieron en conjuntos donde el  80% de los datos fueron tomados para el entrenamiento y el otro 20% para la prueba.
</p>
<p align="justify">
Para asegurar una variabilidad adecuada en los datos y mejorar la precisión del modelo, se realizaron múltiples repeticiones de cada gesto. Estos movimientos fueron registrados mediante el sitio de web de (https://tinyml.seas.harvard.edu/magic_wand/) que tambien captura los gestos correspondiente al arduino que se esta utilizando mediante una conexión bluetooth, donde se encarga de almacenar los datos para su análisis y procesamiento posterior en el formato JSON.
</p>


| Arduino Nano 33 BLE Sense | Edge Impulse |
| ----------- | ----------- |
| <img src="https://github.com/user-attachments/assets/853746c4-dfe0-47c1-9257-bd59a878f8e4" width="300"/>   <br> Fuente: Mouser Electronics Perú | <img src="https://github.com/user-attachments/assets/86f001a4-8cb3-4476-9531-437076508bbf" width="550"/> |

<p align="justify">
Para ello se tomo un total de 100 muestras de cada clase, de los cuales tal como se menciono anteriormente se encuentran en un 80% y un 20% entre entrenamiento y prueba, tal como se evidencia a continunación:
</p>

<div align="center">
    <img src="https://github.com/user-attachments/assets/f38cc160-e3b4-47a7-9a06-3ca6a652a10c" width="550"/>
</div>

### 2.1.1 Diseño del impulso
<p align="justify">
Con los datos recolectados preparados, el siguiente paso es desarrollar y entrenar un modelo. Para ello, seleccionamos el bloque de procesamiento de análisis espectral recomendado junto con un bloque de aprendizaje. Estos componentes son esenciales para procesar y extraer conocimiento de los datos. Como los datos consisten frente a sus ejes de entrada, estos se encuentran al momento de hacer la recolección de datos mediante los sensores del Arduino Nano 33 Ble Sense como el acelerómetro, además, se utilizó un tamaño de ventana de 2 segundos, mientras que el resto se realizó por defecto. Hay que tener en cuenta que en el análisis espectral se verifica el bloque de procesamiento de dichos ejes de entrada mencionados, para así contar con el bloque de aprendizaje que es la clasificación, siempre tomando en cuenta las características espectrales con los que cuenta, incluyendo las salidas que en este caso son 3 (círculo, uno y tres), por otro lado, como la recolección de los datos se realizó fuera del Edge Impulse, los datos cuentas solamente con dos dimensiones (x, y), lo cual no afecta a nuestro modelo para hacer el entrenamiento.
</p>

<div align="center">
    <img src="https://github.com/user-attachments/assets/bdbd9fe9-bbfa-4b77-984f-b9936469d718" width="550"/>
</div>

### 2.1.2 Características espectrales
<p align="justify">
Luego, ajustamos los parámetros de escala, filtro y FFT para el preprocesamiento de los datos teniendolos por defecto. Estos ajustes definen las características que tendran los datos antes de que sean enviados a la red neuronal. 
</p>
<div align="center">
    <img src="https://github.com/user-attachments/assets/8e169668-d6df-4efb-aa5e-ea57a1f55550" width="500"/>
</div>

### 2.1.3 Clasificación y entrenamiento
<p align="justify">
Con todos los datos procesados, es hora de comenzar a entrenar la red neuronal. Las redes neuronales [3] consisten en una serie de capas de unidades de procesamiento, llamadas neuronas, que realizan transformaciones de los datos de entrada para generar un dato de salida.
</p>
<p align="justify">
Para optimizar la precisión y el rendimiento del modelo, ajustamos los hiperparámetros durante el proceso de entrenamiento. Tras el procesamiento, obtenemos el modelo entrenado y revisamos su precisión, que se expresa como un porcentaje; a mayor porcentaje, mejor es el rendimiento del modelo. En nuestro caso, logramos una precisión del 97.9%, lo que indica un alto nivel de exactitud en la detección.
</p>

<table>
  <tr>
    <th width="20%"> Si visualizamos la configuración de la red neuronal se ve de la siguiente manera, donde el número de ciclos de entrenamiento fue de 30 épocas, mientras que la tasa de aprendizaje (learning rate) fue de 0.01, y separando un pequeño porcentaje para realizar la validación:</th>
    <th width="20%"> En este punto pasamos al entrenamiento del modelo, donde se obtuvo un 97.9% tal como se mencionó anteriormente con una pérdida de 0.04 en general, lo que nos indica que se trata de un modelo formalmente eficiente:</th>
    <th width="20%"> Si pasamos a la fase de exploración de los datos en vista gráfica, se evidencia de la siguiente manera:</th>
  </tr>
  <tr>
    <td><img src="https://github.com/user-attachments/assets/4d0f74b3-e360-4c8a-ae7a-426701a33aad" width="400"/></td>
    <td><img src="https://github.com/user-attachments/assets/81e3ea43-73f9-40a1-be4e-881782d5b07f" width="450"/></td>
    <td><img src="https://github.com/user-attachments/assets/e16e9526-d153-44a9-9e49-0833395e0f3f" width="650"/></td>
  </tr>
</table>

<p align="justify">
De esta manera, se puede observar que la predicción del modelo puede llegar a ser imprecisa, pero no significa que lo sea, sino que será de menor medida en comparación con las predicciónes correctas de cada una de clases.
</p>

### 2.1.4 Despliegue
<p align="justify">
Pasando a la siguiente fase, una vez de haber realizado todo el entrenamiento del modelo ajustado a nuestro reto, Edge Impulse nos configura el formato del modelo como una librería para diferentes tipos de lenguajes, incluyendo a Arduino IDE, para que así este se logre programar para el Arduno Nano 33 BLE Sense que se esta utilizando.
</p>

<div align="center">
    <img src="https://github.com/user-attachments/assets/e9f2c60f-832e-41d6-935a-77d4c08d3668" width="500"/>
</div>

## 2.2 Implementación del modelo (Para Arduino IDE)

<p align="justify">
Hemos utilizado la placa Arduino Nano 33 BLE Sense para integrar nuestro modelo de TinyML desarrollado en Edge Impulse en el entorno de desarrollo de Arduino. En el transcurso de todo este proceso hemos presentado algunos errores que requerían ajustes para garantizar que el sistema funcionara correctamente, dado que al principio, el código solamente se encargaba de ejecutar las predicciones del modelo que se realizaron, por lo que se tuvo que adaptar de acuerdo a nuestro reto, para que asi pudiese leer las coordenadas del acelerómetro en la placa y reconocer los gestos del usuario al momento de emplearlo.
</p>
Para llevar a cabo esta integración de manera adecuada, es necesario seguir una serie de pasos, comenzando con la inclusión de librerías esenciales que nos permitirán conectar el modelo y los periféricos de la placa. A continuación, detallamos la implementación del código.
</p>

### Inclusión de Librerías:

Iniciamos nuestro código incluyendo las librerías necesarias. Utilizamos *Reconocimiento_de_n_meros_y_formas_inferencing.h* para manejar el modelo de inferencia y *Arduino_BMI270_BMM150.h* para interactuar con el sensor IMU, que se encargará de recolectar los datos de aceleración en los ejes X e Y.

```
#include <Reconocimiento_de_n_meros_y_formas_inferencing.h>
#include <Arduino_BMI270_BMM150.h>
```


### Definición de constantes y variables:

Definimos una constante NUM_FEATURES que contiene el número total de características que vamos a extraer del sensor, 124 en total (62 pares de datos X e Y). Luego, creamos un arreglo features para almacenar estos valores de aceleración.

    #define NUM_FEATURES 124 // Número total de características esperadas (62 pares de X, Y)

    float features[NUM_FEATURES];


### Recuperación de datos:

Implementamos la función raw_feature_get_data, que se encarga de recuperar los datos de características desde el arreglo features y proporcionárselos al clasificador.

    int raw_feature_get_data(size_t offset, size_t length, float *out_ptr) {
        memcpy(out_ptr, features + offset, length * sizeof(float));
      return 0;
    }

### Configuración del sistema:

En la función setup, inicializamos la comunicación en serie para la depuración y llamamos a la función *initPeripherals*, donde configuramos los LEDs como salidas y preparamos el sensor IMU. Si el sensor no se inicializa correctamente, imprimimos un mensaje de error y detenemos la ejecución.
  
     void setup() {
       Serial.begin(115200);
       initPeripherals();
    }


### Captura y clasificación de datos

Dentro del ciclo principal loop, recolectamos los datos de aceleración utilizando *collectSensorData*. Si la recolección es exitosa, procedemos a clasificar esos datos con el modelo llamando a *classifySignal*. Dependiendo del resultado de la clasificación, encendemos el LED correspondiente para representar la categoría predicha.

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

### Captura de datos del sensor:

En la función *initPeripherals*, configuramos los pines de los LEDs como salidas, apagamos inicialmente todos los LEDs con *turnOffLEDs()*, e intentamos inicializar el sensor IMU. Si la inicialización falla, el código se detiene.

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


### Captura de datos del sensor

La función &collectSensorData* lee las componentes X e Y de la aceleración del sensor IMU y almacena esos valores en el arreglo features. Este proceso se repite hasta recolectar las 124 características necesarias, con una pequeña pausa entre lecturas para ajustar la velocidad de muestreo.

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

### Clasificación de datos

Para clasificar los datos capturados, utilizamos la función *classifySignal*. Esta función toma los datos del sensor, los pasa al modelo de inferencia, y retorna el resultado de la clasificación. La estructura *signal_t* permite que el modelo acceda a los datos del arreglo features.

    EI_IMPULSE_ERROR classifySignal(ei_impulse_result_t *result) {
        signal_t features_signal;
        features_signal.total_length = NUM_FEATURES;
        features_signal.get_data = &raw_feature_get_data;

     return run_classifier(&features_signal, result, false);
    }


### Interpretación y visualización de resultados

Finalmente, mostramos los resultados de la inferencia en el monitor serie, incluidos los tiempos de procesamiento y los valores de clasificación. Dependiendo del índice de la predicción, encendemos el LED correspondiente. Si el modelo incluye la detección de anomalías, también mostramos ese valor.

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

### Control de LEDs

Las funciones *turnOffLEDs* y *turnOnLEDs* controlan los LEDs para visualizar la predicción de la inferencia. Dependiendo del resultado, se enciende un LED específico: rojo, verde o azul.

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


# 3.- Resultados:

## Círculo

| Imagen    | 
|------------|
| <div align="center"> <img src="https://github.com/user-attachments/assets/f7715a84-a426-4675-aaad-303a5bef4c72" width="500"/> </div>   | 
|Como se puede observar una ves de haber realizado el entrenamiento, se puede evidenciar que la predicción fue de un 67%, mientras que el numero 1 fue del 10%, asimismo el número 3 en un 22% lo cual nos indica que el modelo interpreta los diferentes tipos de datos con algunas interpretaciones distintas, pero apesar de ello si llega identificar correctamente cuando se esta dibujando un círculo. A pesar de ser el porcentaje más bajo a pesar de que el entrenamiento se dio de manera exitosa, lo que nos podría indicar que quiza existan anomalías que provocan dichas interferencias. |              


## Número Uno

| Imagen    | Resultado |
|------------|-------------------|
| <img src="https://github.com/user-attachments/assets/c721665a-c84c-45bb-9821-ff99dc6e4658" width="20000"/> |Seguidamente en esta ocasión para el número 1 la predicción fue de un 99.6% lo que nos indica una correcta interpretación del modelo más que el resto. Ya que si vemos las interferencias del resto nos da que para el circulo da en un 0%, mientras que para el número 3 dio un porcentaje de 0.004%. Siendo este el más alto, y el modelo mejor interpretado sin equivocación en predecir los movimientos.             |

## Número Tres

| Imagen    | Resultado |
|------------|-------------------|
| <img src="https://github.com/user-attachments/assets/7393055b-d720-44ff-a99a-a742a84ae7ed" width="20000"/>   | Para este caso el modelo ha llegado a clasificar con un total de confianza del 76% siendo el segundo modelo en ser más probable, pero eso no quita el hecho de que  presente ciertas interferencias como no estar completamente seguro contra las otras clases, ya que las demás tanto el circulo como el uno abarcan el porcentaje faltante.               |

## Demostración de la procedimiento 

Para ver una demostración completa de cómo funciona, haz clic en la siguiente imagen para ver el video:

[![Ver el video](https://img.youtube.com/vi/dZNEkwrauEw/maxresdefault.jpg)](https://www.youtube.com/watch?v=dZNEkwrauEw)

https://github.com/nardyliz12/Documentos-/blob/312361fff5e753be57c243b550ddf1af9b819730/lv_0_20240914135110.mp4

# 4.- Discusión:
<p align="justify">
El desarrollo e implementación del modelo de TinyML en el Arduino Nano 33 BLE Sense fue exitoso, cumpliendo con los objetivos planteados al inicio del proyecto. La integración de herramientas como Edge Impulse y la plataforma de Magic_Wand_ML resultó efectiva para entrenar un modelo capaz de identificar gestos específicos, tales como el dibujo de un círculo, el número 3 y el número 1, y traducirlos en acciones concretas, como el encendido de LEDs de diferentes colores.
</p>
<p align="justify">
Uno de los aspectos más destacables fue la precisión del modelo para reconocer correctamente los patrones de movimiento, a pesar de las limitaciones de procesamiento del microcontrolador. Esto demuestra que la aplicación de TinyML en dispositivos embebidos es una opción viable para proyectos que requieren una rápida respuesta a estímulos del entorno sin depender de plataformas de computación más potentes.
</p>
<p align="justify">
Sin embargo, también surgieron algunos desafíos. Uno de ellos fue la sensibilidad del dispositivo a variaciones sutiles en los gestos, lo que requería un entrenamiento más exhaustivo del modelo con un conjunto de datos adecuado para mejorar la robustez de las predicciones. Además, el uso de sensores de movimiento en entornos con ruido o interferencias podría afectar la exactitud de las predicciones, lo que sugiere la necesidad de una calibración más precisa o de la implementación de algoritmos de filtrado de señal.
</p>
<p align="justify">
En conclusión, este proyecto evidencia que TinyML tiene un gran potencial en la creación de soluciones inteligentes a pequeña escala, y su integración en microcontroladores como el Arduino Nano 33 BLE Sense abre un abanico de posibilidades para futuras aplicaciones en áreas como la automatización, la interacción humano-máquina y la robótica. El éxito de este proyecto sienta las bases para futuras mejoras, tales como la incorporación de más gestos y la optimización del modelo para entornos más complejos.
</p>

# 5.- Referencias bibliográficas:

* [1] TinyML Foundation, “TinyML,” 2021. [Online]. Available: https://www.tinyml.org. [Accessed: 11-Sep-2024].

- [2] Edge Impulse Documentation, "Getting Started with Edge Impulse for TinyML Projects," Edge Impulse, Inc., 2020.
- [3] M. Molina, «Ciencia detrás de la magia. Redes neuronales.», Rev Elect AnestesiaR, vol. 15, n.º 12, ene. 2024.

- Google, "Teachable Machine: Train a Computer to Recognize Your Own Images, Sounds, & Poses," Google, 2023. [Online]. Available: https://teachablemachine.withgoogle.com.

- M. David, S. Li, P. Kumar, and R. Martínez, "Tiny Machine Learning for Gesture Recognition on Embedded Devices," Sensors, vol. 21, no. 8, p. 2751, 2021. doi: 10.3390/s21082751.

- P. Warden and D. Situnayake, TinyML: Machine Learning with TensorFlow Lite on Arduino and Ultra-Low-Power Microcontrollers. O'Reilly Media, 2019.
