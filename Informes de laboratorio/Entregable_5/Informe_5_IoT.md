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

````
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
| Para escanear las redes Wi-Fi con el ESP32, se configura un código que permite verificar todas las redes Wi-Fi cercanas en nuestra área, donde se muestra el número total de redes encontradas con el nombre (SSID) y la intensidad de la señal (RSSI). Los resultados se imprimen en el monitor serie con una pausa de 5 segundos entre cada escaneo. | <img src="https://github.com/user-attachments/assets/35430843-5053-4c84-a494-20cd5019aadb" alt="ESP32 DEVKIT V1" width="1000"/> |


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

## 2.3 Arquitectura en la Nube
<p align="justify">
La arquitectura en la nube hace referencia a la forma en la que se logran integrar las distintas tecnologías que existen para crear la nube, es decir, los entornos qué tiene TI para separar o agrupar y compartir los recursos que existen a través de la red [5], además, se define la forma en la que se conectan todos los elementos y las funciones, para así diseñar la nube y ejecutar las distintas aplicaciones existentes actualmente, para ser precisos la arquitectura en IoT es un proceso en el cual toda la información viaja a través de la red en forma de datos digitalizados desde los sensores a un centro de datos que en este caso es la nube, donde estos datos son procesados y almacenados muchas veces en tiempo real.
</p> 

### 2.3.1 Enviando datos a la red
<p align="justify">
Para esta sección se realizó un código que muestre en tiempo real la variación del potenciómetro conectado al ESP32 en una de las plataformas de IoT que en este caso es ThingSpeak, y así poder enviar los datos en tiempo real a la nube.
</p> 
<p align="justify">
Para saber un poco más, ThingSpeak es un servicio de plataforma correspondiente a IoT que nos permite agregar, visualizar y analizar el flujo de los datos en tiempo real en la nube, ya que puede enviar datos a la plataforma desde cualquier dispositivo, además, de crear visualizaciones instantáneas en tiempo real de los datos y enviar alertas utilizando servicios web [6], para ello se siguió los siguientes pasos: 
</p> 

<div align="center">
  
| Creación de la cuenta en ThingSpeak|
|-------------------------------------|
|<img src="https://github.com/user-attachments/assets/d5e8d112-e0c6-4f22-8c39-bea9c9722b8d" alt="ESP32 DEVKIT V1" width="550"/>|

</div>

|  Una vez creada la cuenta, procedemos a crear un canal nuevo, como se muestra a continuación.  |  <img src="https://github.com/user-attachments/assets/9b95458a-1abd-4598-9f1b-850089bbd804" alt="ESP32 DEVKIT V1" width="1100"/>|
|----------------------|-----------------------|
|Luego, procedemos a llenar solo los campos de Nombre del Canal, y los Field que serán las variables a enviar desde nuestro microcontrolador, como se muestra en la imagen. | <img src="https://github.com/user-attachments/assets/d3b97115-0ef1-4172-bd04-451cf675dc49" alt="ESP32 DEVKIT V1" width="1100"/> |

|    Para visualizar la interfaz                                   |        Secuencia                                                                                                                         |
|-------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------|
| Mostrar la interfaz                       | Una vez de haber creado el canal pasamos al siguiente paso de mostrar la interfaz, donde nos moveremos hacia el lado de los API Keys.         |
| Crear y copiar API Key                    | Una vez de haber ingresado a ese punto y haber creado el API copiamos dichos datos como el Channel ID y el API Key creado.                    |
| Usar con ESP32                            | Utilizaremos estos datos en nuestro código para hacer la demostración juntamente con el ESP32.                                                |
| Channel ID                    |  <img src="https://github.com/user-attachments/assets/5791e169-f39a-4163-99a2-536637d352d4" alt="ESP32 DEVKIT V1" width="500"/>                                                  |
| API Key                    |  <img src="https://github.com/user-attachments/assets/40d94168-731f-43f5-b695-f92d8925ff1d" alt="ESP32 DEVKIT V1" width="500"/>                                                  |

#### NUESTRO CÓDIGO
```
/*
 * Conexión hacia la plataforma ThingSpeak para proyectos 
 * de Internet de las Cosas (IoT) usando un potenciómetro
 */

/* Incluimos las librerías necesarias */
#include <WiFi.h>
#include <ThingSpeak.h>

/* Definimos el pin del potenciómetro */
#define POT_PIN  34  // Pin al que está conectado el potenciómetro

/* Definimos como constantes las credenciales de acceso a la red WiFi */
const char* ssid = "WIFI_SSID";
const char* password = "WIFI_PASSWORD";

/* Definimos las credenciales para la conexión a ThingSpeak */
unsigned long channelID = 2668052;
const char* WriteAPIKey = "DN86CF0JEUBMZFEO";

/* Definimos el cliente WiFi que usaremos */
WiFiClient cliente;

void setup() {
  /* Iniciamos el terminal Serial a una velocidad de 115200 */
  Serial.begin(115200);
  delay(1000);
  
  /* Conectamos a la red WiFi */
  Serial.println("Conectando al WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  /* Conexión establecida */
  Serial.println("\nConectado al WiFi");
  ThingSpeak.begin(cliente);
  delay(5000);
}

void loop() {
  /* Hacemos la medición del potenciómetro */
  medicion();

  /* Enviamos los datos a ThingSpeak */
  ThingSpeak.writeFields(channelID, WriteAPIKey);
  Serial.println("Datos enviados a ThingSpeak!");

  /* Pausa de 10 segundos antes de la siguiente medición */
  delay(10000);
}

/* Función de medición del potenciómetro */
void medicion() {
  /* Leemos el valor del potenciómetro y lo convertimos a un rango de 0 a 100 */
  int potValue = analogRead(POT_PIN);
  float potPorcentaje = (potValue / 4095.0) * 100.0;  // Convertimos el valor a un porcentaje
  
  /* Imprimimos el valor leído en el terminal Serial */
  Serial.print("Valor del potenciómetro: ");
  Serial.println(potPorcentaje);
  Serial.println("-----------------------------------------");
  
  /* Enviamos el valor del potenciómetro como Field 1 a ThingSpeak */
  ThingSpeak.setField(1, potPorcentaje);
}
```
<p align="justify">
Este código conecta el ESP32 a la plataforma ThingSpeak para (IoT), utilizando un potenciómetro para medir valores analógicos, donde incluye las librerías necesarias que definen los pines del potenciómetro así como las credenciales de acceso a la red WiFi y ThingSpeak (mediante "channelID" y "WriteAPIKey"). En la función "setup()" se inicia la conexión WiFi y una vez establecida se configura la conexión a ThingSpeak. En el bucle principal (`loop()`), el valor del potenciómetro se lee, se convierte en porcentaje y se imprime en el monitor en serie, luego el valor se envía a ThingSpeak como un campo (Field 1) para ser visualizado, asimismo, los datos se envíaran a la plataforma de ThingSoeak repetidamente cada 10 segundos.
</p>   

### 2.3.2 Controlando desde la nube

| Controlando un Led para verlo en la nube   |  Imagen |
|----------------------|-----------------------|
| En esta sección, se implementó un código para el control de un LED conectado a uno de los pines digitales del ESP32 a través de la plataforma ThingSpeak mediante un potenciómetro, permitiendo el control remoto del Led para mandar los datos a la nube. Para ello fue necesario implementar una rede Wi-Fi, juntamente con el API que nos brinda la plataforma de ThingSpeak para visualizar los datos.| <img src="https://github.com/user-attachments/assets/5c2b45ef-9269-4285-b7bf-c3170ff4518b" alt="ESP32 DEVKIT V1" width="3000"/> |

#### NUESTRO CÓDIGO
```
/* Incluimos las librerías necesarias */
#include <WiFi.h>
#include <ThingSpeak.h>


/* Definimos los pines */
#define POT_PIN 34  // Pin al que está conectado el potenciómetro (ADC)
#define LED_PIN 14  // Pin al que está conectado el LED (PWM)


/* Definimos como constantes las credenciales de acceso a la red WiFi */
const char* ssid = "UPCH_CENTRAL";    // Cambia por tu SSID
const char* password = "CAYETANO2022";      // Cambia por tu contraseña


/* Definimos las credenciales para la conexión a ThingSpeak */
unsigned long channelID = 2669324;
const char* WriteAPIKey = "9HKQ74WQDXEIOJTG";


/* Definimos el cliente WiFi que usaremos */
WiFiClient cliente;


/* Variable para controlar el tiempo entre envíos a ThingSpeak y monitor serie */
unsigned long previousMillis = 0;
const long interval = 15000; // Cambiar el intervalo a 15 segundos


void setup() {
 /* Iniciamos el terminal Serial a una velocidad de 115200 */
 Serial.begin(115200);
 delay(1000);


 /* Configuración del pin del LED */
 pinMode(LED_PIN, OUTPUT);


 /* Conectamos a la red WiFi */
 Serial.println("Conectando al WiFi...");
 WiFi.begin(ssid, password);
 while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
 }


 /* Conexión establecida */
 Serial.println("\nConectado al WiFi");
 ThingSpeak.begin(cliente);
}


void loop() {
 /* Controlamos el brillo del LED */
 controlLedBrillo();
 

 /* Verificamos si ha pasado el intervalo para enviar datos a ThingSpeak y mostrar en el monitor serie */
 unsigned long currentMillis = millis();
 if (currentMillis - previousMillis >= interval) {
  previousMillis = currentMillis;
 

  /* Enviamos los datos a ThingSpeak */

  enviarDatosThingSpeak();


  /* Imprimimos los datos en el monitor serie */
  imprimirDatosSerie();


  Serial.println("Datos enviados a ThingSpeak!");
 }
}


/* Función para controlar el brillo del LED en tiempo real */
void controlLedBrillo() {
 /* Leemos el valor del potenciómetro */
 int potValue = analogRead(POT_PIN);
 int ledBrightness = map(potValue, 0, 4095, 0, 255); // Mapeamos el valor del potenciómetro al rango de 0-255
 

 /* Ajustamos el brillo del LED */
 analogWrite(LED_PIN, ledBrightness);
}


/* Función para enviar los datos a ThingSpeak */
void enviarDatosThingSpeak() {
 int potValue = analogRead(POT_PIN);
 float potPorcentaje = (potValue / 4095.0) * 100.0; // Convertimos el valor a un porcentaje
 int ledBrightness = map(potValue, 0, 4095, 0, 255); // Mapeamos el valor del potenciómetro al rango de 0-255


 /* Enviamos el valor del potenciómetro como Field 1 a ThingSpeak */
 ThingSpeak.setField(1, potPorcentaje);


 /* Enviamos el valor del brillo del LED como Field 2 a ThingSpeak */
 ThingSpeak.setField(2, ledBrightness);


 /* Enviamos los datos a ThingSpeak y verificamos el código de respuesta */
 int response = ThingSpeak.writeFields(channelID, WriteAPIKey);
 if (response == 200) {
  Serial.println("Datos enviados correctamente a ThingSpeak.");
 } else {
  Serial.print("Error al enviar datos. Código de error: ");
  Serial.println(response);
 }
}


/* Función para imprimir los datos en el monitor serie */
void imprimirDatosSerie() {
 int potValue = analogRead(POT_PIN);
 int ledBrightness = map(potValue, 0, 4095, 0, 255); // Mapeamos el valor del potenciómetro al rango de 0-255
 float potPorcentaje = (potValue / 4095.0) * 100.0; // Convertimos el valor a un porcentaje


 /* Imprimimos los datos en el terminal Serial */
 Serial.println("-----------------------------------------");
 Serial.print("Valor del potenciómetro: ");
 Serial.println(potPorcentaje);
 Serial.print("Brillo del LED: ");
 Serial.println(ledBrightness);
 Serial.println("-----------------------------------------");
}
```
<p align="justify">
Este código permite usar un potenciómetro para controlar el LED conectado a un ESP32 y enviar los datos del LED como el valor del potenciómetro a la plataforma ThingSpeak para su monitoreo en tiempo real. El código primero incluye las librerías necesarias para conectar ThingSpeak y WiFi, así como los pines del potenciómetro y del LED. Se establece la conexión WiFi y se inicia ThingSpeak en "setup()". En el proceso "loop()", el brillo del LED se ajusta en tiempo real en función de la lectura del potenciómetro. Cada 15 segundos, estos datos se envían a ThingSpeak y se imprimen en el monitor serie. El valor del potenciómetro se convierte en un porcentaje para enviarlo como un campo, y el brillo del LED, mapeado entre 0 y 255, se envía de igual manera a otro campo.
</p> 

<div align="center">

|ThingSpeak |
|-------------|
|<img src="https://github.com/user-attachments/assets/7e0dd981-171b-4109-9f0e-e17c8dcc84fb" alt="ESP32 DEVKIT V1" width="800"/> |

</div>

## 2.4 Mini Proyecto con Node-RED
<p align="justify">
Para el mini proyecto, se estuvo utilizando Node-RED como una herramienta para gestionar y visualizar el flujo de datos en tiempo real, utilizando el protocolo MQTT. Se desarrolló un flujo de trabajo que recibe datos de de manera aleatoria conectado al ESP32 y los envía a través de un broker MQTT, permitiendo la visualización en un panel de control en Node-RED.
</p> 
<p align="justify">
Este método con Node-RED permite la configuración de una interfaz gráfica que recibe datos del ESP32 a través de un broker MQTT, lo que permite visualizar datos provenientes de los sensores en un panel de control en tiempo real, lo que facilita el monitoreo del sistema. Además, se incluye control remoto, lo que permite enviar instrucciones al ESP32 para manejar cualquier dispositivo conectado a través de una interfaz gráfica básica. Esto destaca la capacidad de Node-RED para integrar eficientemente y fácilmente dispositivos IoT en sistemas de monitoreo y control en tiempo real.
</p> 

# 3.- Resultados:
## 3.2.1 Lectura de un Potenciómetro con ESP32
## 3.2.2 Uso de la Biblioteca WiFi.h y Aplicaciones
### Scanner WIFI con ESP32

https://github.com/user-attachments/assets/d47bb2dc-9fda-4e90-931b-6d869d1f2184

### Scanner WIFI con ESP32 con un Smartphone

## 2.3.3 Arquitectura en la nube
### Conexión a ThingSpeak

|ThingSpeak con potenciómetro | Gráfico |
|-------------|------------------|
|<img src="https://github.com/user-attachments/assets/c8e89189-574d-49c5-9e1e-f09aea6657c9" alt="ESP32 DEVKIT V1" width="800"/> | <img src="https://github.com/user-attachments/assets/1099d9be-cefc-4b79-9296-34bad29f37d5" alt="ESP32 DEVKIT V1" width="800"/>|

### Control desde la nube utilizando ThingSpeak (Led)

<p align="justify">
En esta sección, se detalla el comportamiento del sistema diseñado, que permite controlar el brillo de un LED mediante un potenciómetro y enviar los datos de manera remota a la plataforma ThingSpeak. Los datos se enviaron cada 15 segundos, y fueron visualizados mediante gráficas en la nube, donde La imagen muestra dos gráficos: uno para el brillo del LED (Campo 1) y otro para el potenciómetro (Campo 2). Los valores del potenciómetro oscilan entre 30 y 150, mientras que el brillo del LED fluctúa entre 20 y 60. Estos datos fueron capturados y enviados a ThingSpeak, lo que permitió su monitoreo remoto y en tiempo real. Los gráficos están alineados temporalmente, demostrando la relación directa entre los cambios en la resistencia del potenciómetro y el ajuste del brillo del LED, como se muestras continuación:
</p>

<div align="center">

| Gráficas de ThingSpeak para el control del LED y potenciómetro.  | 
|----------------------|
| <img src="https://github.com/user-attachments/assets/1721ac16-f1f1-4fa7-a102-f23368447065" alt="ESP32 DEVKIT V1" width="800"/> | 

</div>

### Visualización y análisis de los datos en ThingSpeak

- **Campo 1 (LED_P):** La gráfica de este campo muestra las variaciones en el brillo del LED, que fluctúan entre valores de 20 y 60. Estas fluctuaciones son producto de los cambios en la resistencia del potenciómetro.

- **Campo 2 (Potenciómetro):** En este gráfico se observan las lecturas del potenciómetro, las cuales oscilan entre 30 y 150, lo que refleja la intervención manual. Los cambios en el potenciómetro generan variaciones directas en el brillo del LED, como se ve en el Campo 1.


https://github.com/user-attachments/assets/fe079d2d-f8fd-4d41-af07-30c82d5e0f4d

https://github.com/user-attachments/assets/cd7f940c-ab66-4a9c-a66c-ecbf672f14c2

# 4.- Discusión:
<p align="justify">
El desarrollo del proyecto con el ESP32, ThingSpeak y Node-RED resalta la creciente importancia de las tecnologías de Internet de las Cosas (IoT) en la creación de sistemas de monitoreo y control. A medida que las ciudades y los entornos se vuelven más interconectados, la capacidad de gestionar dispositivos de manera remota se vuelve esencial. Este proyecto no solo demuestra la viabilidad técnica de integrar diversos componentes en un solo sistema, sino que también abre la puerta a una serie de aplicaciones prácticas en diferentes ámbitos.
</p>   
<p align="justify">
Uno de los aspectos más destacados del proyecto fue la conexión del ESP32 a la plataforma ThingSpeak, que permite el almacenamiento y visualización de datos en la nube. Esta funcionalidad es fundamental para proyectos de IoT, ya que proporciona una interfaz accesible desde cualquier lugar, facilitando la toma de decisiones informadas. Sin embargo, un desafío que se presentó fue la latencia en la transmisión de datos. Si bien se lograron enviar los datos cada 10 segundos, la velocidad de respuesta podría ser un factor crítico en aplicaciones donde se requiere un monitoreo en tiempo real más inmediato. Futuros trabajos podrían explorar optimizaciones en la configuración de red o la utilización de protocolos alternativos como MQTT para mejorar esta latencia.
</p>   
<p align="justify">
La implementación del control del LED a través de Node-RED también plantea interesantes implicaciones. Este sistema no solo permite la personalización del entorno a través del ajuste del brillo, sino que también sirve como un ejemplo claro de cómo la automatización puede mejorar la eficiencia energética. No obstante, se deben considerar aspectos de seguridad, ya que el control remoto de dispositivos electrónicos plantea riesgos potenciales de acceso no autorizado. Integrar protocolos de seguridad robustos será crucial en futuros desarrollos para garantizar la integridad del sistema.
</p>   
<p align="justify">
Además, la capacidad de visualización y gestión de datos en tiempo real a través de Node-RED proporciona una experiencia de usuario intuitiva. Sin embargo, la complejidad de la interfaz puede ser un obstáculo para usuarios menos técnicos. Por lo tanto, se sugiere investigar la creación de interfaces de usuario más amigables y accesibles, que permitan a un público más amplio interactuar con los sistemas IoT sin necesidad de un conocimiento técnico avanzado.
</p>   
<p align="justify">
En resumen, el proyecto no solo ha logrado cumplir con los objetivos propuestos, sino que también ha resaltado áreas de mejora y oportunidades para futuros desarrollos. La integración de tecnologías IoT ofrece un potencial significativo para transformar la manera en que interactuamos con el entorno, y este trabajo representa un paso hacia la creación de soluciones más innovadoras y efectivas.
</p> 

# 5.- Referencias bibliográficas:

- [1] "Internet of Things (IoT)," IoT Agenda, TechTarget. [Online]. Available: https://www.techtarget.com/iotagenda/definition/Internet-of-Things-IoT. [Accessed: 23-Sep-2024].
- [2] N. Dey, A. E. Hassanien, C. Bhatt, A. Ashour, and S. C. Satapathy, Internet of Things and Big Data Analytics Toward Next-Generation Intelligence. Cham, Switzerland: Springer, 2018. [Online]. Available: https://search.worldcat.org/es/title/1001327784. [Accessed: 23-Sep-2024].
- [3] J. Hu, B. Lennox, H. Niu, J. Carrasco, & F. Arvin "Fault-tolerant cooperative navigation of networked UAV swarms for forest fire monitoring," *ScienceDirect*, vol. 123, April 2022. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0005109822000802. [Accessed: 23-Sep-2024].
- [4] J. Hu, B. Lennox, & F. Arvin, "Robust formation control for networked robotic systems using Negative Imaginary dynamics," *Automatica*, vol. 140, June 2022. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0005109822000802. [Accessed: 23-Sep-2024].
- [5] Red Hat, "¿Qué es la arquitectura en la nube?", Red Hat, Agosto 2022. [Online ]. Disponible: https://www.redhat.com/es/topics/cloud-computing/what-is-cloud-architecture. [Accedido: 23-sep-2024].
- [6] MathWorks, "ThingSpeak Documentation," MathWorks, [Online]. Available: https://la.mathworks.com/help/thingspeak/. [Accessed: 24-Sep-2024].
