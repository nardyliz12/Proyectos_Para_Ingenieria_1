<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# INFORME DE LABORATORIO N° 5: Internet de las cosas (IoT)

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Castañeda Reategui Mercedes del Rosario
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

# 1.- Introducción:

<p align="justify">
El Internet de las Cosas (IoT) es descrito como uno de los objetos físicos o grupos relacionados con sensores, donde cuentan con una capacidad de procesamiento relacionados al software y otros que se conectan a otros dispositivos, además, de que intercambian datos con éstos a través de internet u otras redes de comunicación existentes [1]. A lo largo del tiempo este ha sido considerado como un término erróneo, dado que los dispositivos no necesitaban estar conectados a una vía de internet pública, ya que sólo necesitan estar conectados a una red y ser direccionados de manera independientemente [2].
</p>
<p align="justify">
Este campo ha logrado evolucionar a lo largo del tiempo gracias a la aparición de múltiples tecnologías en diferentes tipos de sistemas integrados, donde cada vez resulta ser más potente frente al aprendizaje automático [3]. Al ser una herramienta conocida abarca diferentes tipos de campos tradicionales, tales como los sistemas embebidos, las redes de sensores analámbricos, asimismo, los sistemas de control y la automatización, estos componentes hacen posible que se de el internet de las cosas de manera colectiva como individual [4].
</p>
<p align="justify">
Ahora que sabemos un poco más, de que trata el internet de las cosas, en este informe mostrará la configuración y programación de los diferentes tipos de dispositivos utilizados como un ESP32 en este caso, donde se conectó para adquirir datos de acuerdo a una serie de plataformas usando protocolos de comunicación como Wi-Fi, por ende, el objetivo es poder entender los fundamentos de dichos protocolos de comunicación utilizados en IoT, evaluando su uso según el contexto que se nos plantee, para monitorear y analizar datos en tiempo real mediante plataformas que se encuentran en la nube.  
</p>  
 
# 2.- Metodología:
<p align="justify">
Actualmente existen muchas tarjetas de desarrollo y microcontroladores que están orientados al internet de las cosas, pero para esta actividad solamente nos enfocamos en el ESP32 Dev kit 1, que es un microcontrolador de bajo costo y consumo de energía, ya que cuenta con una tecnología vía Wi-Fi y Bluetooth que permite controlar todo tipo de sensores, lo cual lo hace ser eficaz y económico. 
</p> 

<div align="center">

|ESP32 DEVKIT V1|
|---------------|
|<img src="https://github.com/user-attachments/assets/c0fa98ed-c5b5-4600-93c8-94ea1ca31a0c" alt="ESP32 DEVKIT V1" width="300"/>|
Fuente: Electromanía Perú

</div>

## 2.1 Adquisición de datos en IoT
<p align="justify">
El proceso para capturar información mediante los sensores y su conversión en señales digitales para realizar el análisis nos permiten tomar decisiones automatizadas basadas en datos que se emiten en tiempo real, dado que tiene aplicaciones relacionadas con la automatización y el monitoreo remoto, para ello, se utilizó un componente electrónico que es el potenciómetro, qué es un tipo de resistor mayormente utilizado para ajustar voltajes en un circuito, donde controla la resistencia entre sus terminales, sin embargo, en ciertos contextos suele funcionar como un sensor de posición o cómo un sensor de desplazamiento, dado que convierte el movimiento mecánico (como girar una perilla) en un cambio de resistencia que puede llegar a ser medido eléctricamente. Adicionalmente, se debe adquirir un convertidor ADC para que convierta todas las señales analógicas a señales digitales, asimismo, se debe contar con la transmisión de datos que se refiere al envío de dichos datos a la nube o plataformas qué tiene IoT.
</p> 

<div align="center">

|Potenciómetro|
|---------------|
|<img src="https://github.com/user-attachments/assets/668bfeb7-ea61-4a7e-ab11-2a40c98237f4" alt="ESP32 DEVKIT V1" width="300"/> |
Fuente: Geekbot Electronics

</div>

### 2.1.1 Lectura de un Potenciómetro con ESP32

```
int potPin = 34; // Pin donde está conectado el potenciómetro

void setup() {
  Serial.begin(115200); // Inicializar el monitor serie
}

void loop() {
  int valor = analogRead(potPin); // Leer valor del potenciómetro
  Serial.println(valor); // Mostrar valor en el monitor serie
  delay(500); // Esperar medio segundo
}
```
<p align="justify">
Este código esta diseñado para ejecutar la placa del ESP32 y leer el valor del potenciómetro conectado al pin analógico 34, para así enviar datos al monitor serie, la función 'setup()' inicia la comunicación serie con una velocidad de 115200 baudios. El valor analógico del potenciómetro, que varía según su posición, se lee utilizando la función 'analogRead()' en la función 'loop()' y se almacena en la variable valor. Luego, usando 'Serial.println()', este valor se imprime en el monitor serie, para finalmente, esperar 500 milisegundos antes de leer el valor de nuevo, repitiendo el proceso indefinidamente.
</p> 
<p align="justify">
Como actividad adicional era mejorar el código anterior haciendo el uso de un promediado de los datos en cuestión para convertirlos en valores del ADC a valores de voltaje, como se presenta s continuación.
</p> 

```
int potPin = 34; // Pin donde está conectado el potenciómetro
const int numReadings = 10; // Número de lecturas para promediar
int readings[numReadings]; // Arreglo para almacenar lecturas
int currentIndex = 0; // Índice actual de la lectura
float total = 0; // Suma total de las lecturas
float average = 0; // Promedio de las lecturas

void setup() {
    Serial.begin(115200); // Inicializar el monitor serie
    // Inicializar el arreglo de lecturas
    for (int i = 0; i < numReadings; i++) {
        readings[i] = 0;
    }
}

void loop() {
    // Restar la lectura más antigua de la suma total
    total -= readings[currentIndex];
    // Leer el nuevo valor del potenciómetro
    readings[currentIndex] = analogRead(potPin);
    // Sumar la nueva lectura a la suma total
    total += readings[currentIndex];
    // Actualizar el índice para la siguiente lectura
    currentIndex = (currentIndex + 1) % numReadings; // Vuelve al inicio si llega al final

    // Calcular el promedio
    average = total / numReadings;

    // Convertir a voltaje (suponiendo un ADC de 12 bits y Vcc de 3.3V)
    float voltage = (average / 4095.0) * 3.3;

    // Mostrar el promedio y el voltaje en el monitor serie
    Serial.print("Promedio ADC: ");
    Serial.print(average);
    Serial.print(" | Voltaje: ");
    Serial.println(voltage, 3); // Mostrar con 3 decimales

    delay(500); // Esperar medio segundo
}
```
<p align="justify">
Para suavizar las variaciones, este bloque mide el valor del potenciómetro conectado, donde la función "setup()" inicia la serie de comunicación y configura un arreglo para almacenar las lecturas. El arreglo se actualiza al restar la lectura más antigua, agregando la nueva lectura del potenciómetro, para luego calcular el promedio en el bucle "loop()". Este promedio se convierte a un valor de voltaje, asumiendo un ADC de 12 bits y una tensión de alimentación de 3.3V, que luego se imprime en el monitor serie con tres decimales para repetir el ciclo cada cincuenta milisegundos.
</p> 

## 2.2 Uso de la Biblioteca WiFi.h y Aplicaciones

<p align="justify">
La biblioteca de "WiFi.h" está dirigido para las placas de Arduino, donde nos permite conectar dispositivos basados en microcontroladores como el ESP32 a redes de Wi-Fi, esta biblioteca también nos proporciona funciones para configurar conexiones inalámbricas, además, de gestionar las redes y transferir datos a través del Wi-Fi. Algunas de las funcionalidades con las que cuenta este tipo de biblioteca es poder conectarse a una red Wi-Fi con un SSID y contraseña, además, de consultar el estado de la conexión Wi-Fi que se encuentra alrededor, asimismo, puede llegar obtener la dirección IP asignada por la red, como también realizar conexiones a servidores o servicios en línea a través del Wi-Fi, lo cual es particularmente utilizado para este tipo de proyectos como en la implementación en IoT, donde las dispositivos necesitan conectarse a internet y comunicarse entre ellos a través de las redes inalámbricas, para tener un monitoreo remoto y control de dispositivos, asímismo, emplear proyectos de automatización dentro del hogar.   
</p> 

### 2.2.1 Scanner WIFI con ESP32

| Encontrar Redes Wi-Fi cercanas  | Redes  Wi-Fi  |
|----------------------|-----------------------|
| Para escanear las redes Wi-Fi con el ESP32, se configura un código que permite verificar todas las redes Wi-Fi cercanas en nuestra área. Este código muestra el número total de redes encontradas con el nombre (SSID) y la intensidad de la señal (RSSI). Los resultados se imprimen en el monitor serie con una pausa de 5 segundos entre cada escaneo. | <img src="https://github.com/user-attachments/assets/35430843-5053-4c84-a494-20cd5019aadb" alt="ESP32 DEVKIT V1" width="1000"/> |


<p align="justify">
En está ocasión se creó un código para diseñar una red Wi-Fi usando un smartphone como Hotspot, donde este pueda conectarse a ella mediante el ESP32, para luego poder visualizar en el monitor serial la dirección IP asignada a la red Wi-Fi establecida con el siguiente código: 
</p> 

```
#include <WiFi.h>

// Configuración del SSID y contraseña de la red Wi-Fi
const char* ssid = "Zildran";         // Cambia esto por el nombre del Hotspot
const char* password = "74698486sope"; // Cambia esto por la contraseña del Hotspot

void setup() {
  // Iniciar el monitor serie
  Serial.begin(115200);
  
  // Iniciar la conexión Wi-Fi
  Serial.println("Conectando a Wi-Fi...");
  WiFi.begin(ssid, password);

  // Esperar a que la conexión se establezca
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println(".");
  }

  // Imprimir la dirección IP asignada una vez conectado
  Serial.println("Conectado a la red WiFi");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // No se requiere hacer nada en el bucle
}
```
<p align="justify">
Con este código, podemos conectar el ESP32 a cualquier red Wi-Fi, pero en este caso es "Zildran" con la contraseña "74698486sope". La función "setup()" inicializa la comunicación del monitor serie a 115200 bauds y intenta establecer la conexión Wi-Fi con "WiFi.begin(ssid, password)". Se imprime un punto en el monitor serie cada segundo mientras se completa la conexión. Después de conectarse, el ESP32 imprime el mensaje "Conectado a la red WiFi", que se acompaña de la dirección IP asignada, que se obtiene utilizando "WiFi.localIP()".
</p> 

# 3.- Resultados:
# 4.- Discusión:
# 5.- Referencias bibliográficas:

- [1] "Internet of Things (IoT)," IoT Agenda, TechTarget. [Online]. Available: https://www.techtarget.com/iotagenda/definition/Internet-of-Things-IoT. [Accessed: 23-Sep-2024].
- [2] N. Dey, A. E. Hassanien, C. Bhatt, A. Ashour, and S. C. Satapathy, Internet of Things and Big Data Analytics Toward Next-Generation Intelligence. Cham, Switzerland: Springer, 2018. [Online]. Available: https://search.worldcat.org/es/title/1001327784. [Accessed: 23-Sep-2024].
- [3] J. Hu, B. Lennox, H. Niu, J. Carrasco, & F. Arvin "Fault-tolerant cooperative navigation of networked UAV swarms for forest fire monitoring," *ScienceDirect*, vol. 123, April 2022. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0005109822000802. [Accessed: 23-Sep-2024].
- [4] J. Hu, B. Lennox, & F. Arvin, "Robust formation control for networked robotic systems using Negative Imaginary dynamics," *Automatica*, vol. 140, June 2022. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0005109822000802. [Accessed: 23-Sep-2024].
