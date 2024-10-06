
<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# INFORME DE LABORATORIO N° 7: Realizando nuestro circuito PCB

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Castañeda Reategui Mercedes del Rosario
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

# 1.- Introducción 

<p align="justify">
Si hablamoms de nuestro prototipo, debemos tener en consideracion de que la contaminación del aire es uno de los problemas principales que aún persiste en nuestro planeta, ya que afecta tanto a la salud  humana como al ecosistema. Por ese motivo, tiende a la necesidad de monitorear la calidad del aire, que ha ido aumentando con el tiempo, y para ello, existen una serie de sensores que nos permiten detectar partículas finas y gases que se presentan en el ecosistema. En este informe detallaremos el diseño y la implementación de nuetro prototipo que mide la calidad del aire, donde está incorporado con tecnología de sensores y electrónica, utilizando la plataforma de diseño de circuitos EasyEDA. 
</p>
<p align="justify">
EasyEDA es una plataforma en línea de diseño electrónico que nos permite crear, simular y fabricar circuitos electrónicos y PCB (Placa de circuito impreso) [1]. Un circuito PCB está diseñado para facilitar el proceso de desarrollo de prototipos electrónicos, desde la creación del esquema hasta la fabricación del PCB, todo en un entorno accesible y amigable. Una vez tengamos el esquema del circuito electrónico elaborado correctamente, la plataforma de EasyEDA nos da la opción de diseñar la PCB asignando la ubicación fisica de cada componente y trazando las pistas que conectan esos componentes, además, de que ofrece opciones avanzadas como la creacion de PCBs multicapa, ademá, de que nos brinda una visualizacion en 3D que ofrece una presentación vivida el diseño elaborado, incluyendo visualización en 2D del todo el circuito [2].
</p>
<p align="justify">
Asimismo, el circuito impreso (PCB) fue diseñando de acuerdo a nuestro prototipo utilizando EasyEDA, que tal como se menciono anteriormente es una herramienta potente para la creación de este tipo de esquemas y simulaciones. Cabe mencionar que en el diseño se integraron una serie módulos como un cargador para la gestión de la batería y un controlador convertidor de voltaje que su labor es estabilizar la alimentación de los componentes, dado que el uso de EasyEDA nos facilita la optimización de cualquier circuito para asegurar su funcionalidad y eficiencia.
</p>
<p align="justify">
Es por tal motivo que en este informe se evidenciará todo el procedimiento de como podemos adaptar nuestro prototipo a un esquema electrónico para luego realizar un diseño en PCB, utilizando todos los componentes ya establecidos para nuestro medidor de calidad de aire que tiene como objetivo proporcionar datos confiables sobre los niveles de partículas y gases en el ambiente, además de hacer la conexión de manera correcta y colaborativa.
</p> 

# 2.- Metodología 

La creación del circuito PCB para nuestro dispositivo se llevó a cabo siguiendo estos pasos utilizando la plataforma EasyEDA:

## 2.1 Diseño del esquemático

- Se creó un nuevo proyecto en EasyEDA.
- Se añadieron los componentes necesarios al esquemático, incluyendo:

   - ESP32 (30 pines)
   - Sensor MQ (posiblemente MQ-135 para calidad de aire)
   - Módulo MAX4466 (para medición de ruido)
   - MT3608 (convertidor DC-DC step-up)
   - Módulo de carga TP4056 para batería de litio
   - Resistencias y otros componentes pasivos

- Se realizaron las conexiones entre los componentes según el diseño del circuito.
- Se verificó el esquemático para asegurar que todas las conexiones fueran correctas.

|    Esquema electrónico  |
|-------|
|<img src="https://github.com/user-attachments/assets/f2ade062-dbea-4554-ab6e-99ac0ce18663" alt="ESP32 DEVKIT V1" width="800"/>|


## 2.2 Conversión del esquemático a PCB

- Se utilizó la función "Convert to PCB" en EasyEDA para generar el diseño inicial del PCB.
- Se ajustaron las dimensiones de la placa a 134.40 mm x 75.00 mm con esquinas redondeadas (radio 11.20 mm).
- Se configuró la PCB para utilizar 2 capas de cobre.


|Soporte fijo  |
|-----|
|<img src="https://github.com/user-attachments/assets/120f2b25-55e6-4a00-85da-2c0b44b6f753" alt="ESP32 DEVKIT V1" width="800"/>|




# 3.- Resultados
# 4.- Discusión 
# 5.- Referencias bibliográficas

- [1] RedesZone, "Conoce EasyEDA: un completo software de simulación de circuitos y diseño de PCB online," [Online]. Available: https://www.redeszone.net/2016/02/19/conoce-easyeda-un-completo-software-de-simulacion-de-circuitos-y-diseno-de-pcb-online/. [Accessed: 06-Oct-2024].
 
- [2] EasyEDA, "Online PCB Design & Circuit Simulator," [Online]. Available: https://easyeda.com. [Accessed: 06-Oct-2024].
