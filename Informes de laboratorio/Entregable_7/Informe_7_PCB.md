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
EasyEDA es una plataforma en línea de diseño electrónico que nos permite crear, simular y fabricar circuitos electrónicos y PCB (Placa de circuito impreso) [1]. Un circuito PCB está diseñado para facilitar el proceso de desarrollo de prototipos electrónicos, desde la creación del esquema hasta la fabricación del PCB, todo en un entorno accesible y amigable. Una vez tengamos el esquema del circuito electrónico elaborado correctamente, la plataforma de EasyEDA nos da la opción de diseñar la PCB asignando la ubicación fisica de cada componente y trazando las pistas que conectan esos componentes, además, de que ofrece opciones avanzadas como la creacion de PCBs multicapa, además, de que nos brinda una visualizacion en 3D que ofrece una presentación vivida el diseño elaborado, incluyendo visualización en 2D del todo el circuito [2].
</p>
<p align="justify">
Asimismo, el circuito impreso (PCB) fue diseñando de acuerdo a nuestro prototipo utilizando está plataforma, que tal como se menciono anteriormente es una herramienta potente para la creación de este tipo de esquemas y simulaciones. Cabe mencionar que en el diseño se integraron una serie módulos como un cargador para la gestión de la batería y un controlador convertidor de voltaje que su labor es estabilizar la alimentación de los componentes, dado que el uso de EasyEDA nos facilita la optimización de cualquier circuito para asegurar su funcionalidad y eficiencia.
</p>
<p align="justify">
Es por tal motivo que en este informe se evidenciará todo el procedimiento de como podemos adaptar nuestro prototipo a un esquema electrónico para luego realizar un diseño en PCB, utilizando todos los componentes ya establecidos para nuestro medidor de calidad de aire que tiene como objetivo proporcionar datos confiables sobre los niveles de partículas y gases en el ambiente, además de hacer la conexión de manera correcta y colaborativa.
</p> 

# 2.- Metodología 

La creación del circuito PCB para nuestro dispositivo se llevó a cabo siguiendo estos pasos mediante la plataforma de EasyEDA:

## 2.1 Diseño del esquemático

##### Primeramente, para desarrollar nuestro diseño esquemático:

- Se creó un nuevo proyecto en EasyEDA.
- Se añadieron los componentes necesarios al esquemático, incluyendo:

   - ESP32 (30 pines)
   - Sensor MQ (posiblemente MQ-135 para calidad de aire)
   - Módulo MAX4466 (para medición de ruido)
   - MT3608 (convertidor DC-DC step-up)
   - Módulo de carga TP4056 para batería de litio
   - Resistencias y otros componentes pasivos

##### Donde:

- Se realizaron las conexiones entre los componentes según el diseño del circuito.
- Se verificó el esquemático para asegurar que todas las conexiones fueran correctas.

<div align="center">
  
|   Imagen 1: Esquema electrónico inicial  |
|-------|
|<img src="https://github.com/user-attachments/assets/f2ade062-dbea-4554-ab6e-99ac0ce18663" alt="ESP32 DEVKIT V1" width="800"/>|

</div>
<p align="justify">
Como se puede observar en la imagen 1 del esquema electrónico, se han incorporado todos los componentes mencionados y se han realizado las conexiones correspondientes. Es importante destacar que los sensores no estarán directamente integrados en la placa PCB. En su lugar, se han utilizado conectores Molex que reemplazan los pines de los sensores, permitiendo una conexión flexible y modular(Imagen 2).
</p>
<div align="center">
  
| Imagen 2: Diseño esquemático integrado con Molex|
|-------|
|<img src="https://github.com/user-attachments/assets/cced40a1-85bc-49ba-bd4e-d8b153d4dc8a" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

## 2.2 Conversión del esquemático a PCB
##### Para está sección:

 - Se utilizó la función "Convert to PCB" en EasyEDA para generar el diseño inicial del PCB.

<div align="center">
  
|Imagen 3: De esquemático a PCB |
|-----|
|<img src="https://github.com/user-attachments/assets/120f2b25-55e6-4a00-85da-2c0b44b6f753" alt="ESP32 DEVKIT V1" width="400"/>|

</div>

##### Donde:
- Se ajustaron las dimensiones de la placa a 134.40 mm x 75.00 mm con esquinas redondeadas (radio 11.20 mm).
- Se configuró la PCB para utilizar 2 capas de cobre, que vienen a ser la capa superior e inferior.

<div align="center">
  
|    Imagen 4: Parámetros de la placa|
|-------|
|<img src="https://github.com/user-attachments/assets/7e86952c-6fd6-4166-a247-de3e6545358b" alt="ESP32 DEVKIT V1" width="300"/>|

</div>

## 2.3 Diseño y optimización del PCB

### 2.3.1 Disposición inicial de componentes:
##### Para este caso se realizó:

  - Una revisión de la disposición automática generada por EasyEDA.
  - Una reorganización manual de los componentes para una distribución más eficiente.

<div align="center">
  
| Imagen 5: PCB generado por EasyEDA |
|-------|
|<img src="https://github.com/user-attachments/assets/126afe1d-843e-4a88-a5c7-a80b1cfdb6e8" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

### 2.3.2 Ruteo automático:

- Para el enrutamiento de las conexiones se aplicó el ruteo automático de EasyEDA como punto de partida.
   
<div align="center">
  
| Imagen 6: Enrutamiento |
|-------|
|<img src="https://github.com/user-attachments/assets/b3567ec0-0e23-4c89-8caa-1a015693e575" alt="ESP32 DEVKIT V1" width="300"/>|

</div>

### 2.3.3 Optimización manual:
##### Como siguiente paso de realizó lo siguiente:

   - Reubicación de componentes para mejorar la eficiencia del diseño.
   - Ajuste manual de pistas para optimizar conexiones y reducir longitudes.
   - Posicionamiento estratégico de conectores Molex en los bordes de la placa.
  
<div align="center">
  
|    Imagen 7: Ordenando las conexiones |
|-------|
|<img src="https://github.com/user-attachments/assets/5cfd056c-110a-43b0-ae94-ba44ff7ced8f" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

### 2.3.4 Configuración de pistas:

##### Para las capas se les colocó los siguientes parámetros: 

   - Capa superior (rojo): ancho de 10 mil (0.700 mm)
   - Capa inferior (azul): ancho de 10 mil (0.700 mm)
      
   Uso de pistas más anchas para conexiones de potencia.
   
<div align="center">
  
|  Imagen 8: Lineas rojas   |  Imagen 9: Lineas azules  |
|----------------------|-----------------------|
|<img src="https://github.com/user-attachments/assets/9a22b0f5-79f4-4b44-8545-2a8b1f7a2e5c" alt="ESP32 DEVKIT V1" width="300"/>|<img src="https://github.com/user-attachments/assets/13b97a5b-41cd-418e-8adc-e69b328ef0f9" alt="ESP32 DEVKIT V1" width="300"/>|

</div>

<p align="justify">
Esta metodología nos permitió transformar nuestro esquema electrónico inicial en un diseño de PCB funcional y optimizado para nuestro medidor de calidad de aire, asegurando una disposición eficiente de los componentes y conexiones adecuadas para su correcto funcionamiento.
</p>

# 3.- Resultados
<p align="justify">
Tras la implementación de la metodología para el diseño y optimización del PCB, el proceso arrojó resultados satisfactorios en cuanto a la disposición y el rendimiento del circuito para el prototipo de medición de calidad del aire.
<p align="justify">
En primer lugar, la disposición de los componentes y el enrutamiento del PCB fue optimizado de manera eficiente. Gracias a la reubicación manual de módulos clave como el MT3608, el ESP32, y los conectores Molex, se logró un diseño compacto y bien organizado. La distribución eficiente de los componentes no solo permitió un uso óptimo del espacio disponible en la placa, sino que también evitó interferencias entre las pistas, lo que es esencial para mantener la integridad de las señales y asegurar el correcto funcionamiento de los sensores.
<p align="justify">
El ruteo de las pistas en las capas superior e inferior fue ajustado manualmente, con un ancho estándar de 10 mil (0.700 mm) en ambas capas. Este ajuste garantizó una transmisión eficiente de señales sin pérdidas significativas ni interferencias. Además, las rutas de alimentación, que eran críticas para el rendimiento del dispositivo, fueron reforzadas con pistas más anchas, lo que permitió un suministro estable de energía a los componentes principales, como el MT3608 y el TP4056. Esto fue crucial para evitar problemas de sobrecalentamiento o caídas de tensión durante el funcionamiento del prototipo.
</p>

<p align="justify">
La optimización manual del PCB también contribuyó a la minimización de la longitud de las conexiones entre los componentes, lo que redujo significativamente las interferencias electromagnéticas y mejoró la eficiencia general del sistema. Los conectores Molex fueron posicionados estratégicamente en los bordes de la placa, lo que facilitará la integración del dispositivo en estructuras externas y permitirá un acceso sencillo a las conexiones de alimentación y a los sensores. Esta organización también simplificará el ensamblaje y la manipulación del dispositivo en futuras fases de desarrollo.
</p>

<div align="center">
  
|Vista 2D|
|---------|
|<img src="https://github.com/user-attachments/assets/809aa5ff-fb87-46ff-9187-9627c3bacd4e" alt="ESP32 DEVKIT V1" width="700"/>|

</div>

<p align="justify">
El diseño final del PCB fue revisado y validado mediante la herramienta de visualización en 3D proporcionada por EasyEDA, lo que permitió detectar y corregir pequeños errores antes de pasar a la fase de fabricación. Este proceso de revisión visual aseguró que el PCB estuviera libre de errores importantes que pudieran haber afectado el rendimiento del circuito. Posteriormente, el proceso de fabricación se llevó a cabo sin inconvenientes, y el resultado final cumplió con las especificaciones establecidas en la fase de diseño.
</p>

<div align="center">
  
|Vista 3D: Capa superior|Vista 3D: Capa inferior|
|---------|--------------|
|<img src="https://github.com/user-attachments/assets/83d9798a-2cbe-48da-b184-0d940ae29be2" alt="ESP32 DEVKIT V1" width="700"/>|<img src="https://github.com/user-attachments/assets/989b2dbe-268a-44c3-9fc5-31d9a5b53651" alt="ESP32 DEVKIT V1" width="700"/>|

</div>

<p align="justify">
Finalmente, el prototipo ensamblado fue sometido a pruebas, demostrando un rendimiento estable y confiable. Los sensores MQ-135 y MAX4466 cumplieron con sus funciones de medición de gases y ruido respectivamente, mientras que el ESP32 procesó y transmitió los datos de manera eficiente. El prototipo operó sin interrupciones, mostrando un consumo de energía adecuado para su uso continuo durante varias horas. En resumen, el PCB diseñado y optimizado para este dispositivo de medición de calidad del aire cumplió con los requisitos de funcionalidad, estabilidad y eficiencia esperados.
</p>

https://github.com/user-attachments/assets/9d26320d-a9f5-406e-940a-aaa7307246b4

[Ingresa aquí para ver nuestro circuito PCB](https://easyeda.com/editor#id=222341c9fd8a407d80cb53feb81b5513|eef4518e666f4f8183791a7ef3531143)

# 4.- Discusión 
<p align="justify">
El desarrollo del PCB para el medidor de calidad de aire fue clave para lograr un dispositivo funcional y eficiente. La combinación de ruteo automático y optimización manual permitió una disposición de componentes más adecuada y una mejor distribución de las pistas, lo que minimizó interferencias electromagnéticas y mejoró la eficiencia en la transmisión de señales. Este equilibrio entre automatización y ajuste manual resaltó la importancia de intervenir en los puntos críticos del diseño para obtener un rendimiento óptimo.
<p align="justify">
La selección de componentes fue otro factor crucial para asegurar la estabilidad del circuito. Los módulos de administración de energía, como el MT3608 y el TP4056, garantizaron un suministro estable, lo que resultó esencial para evitar fluctuaciones de voltaje que pudieran afectar la precisión de los sensores. Las decisiones de diseño relacionadas con el ancho de las pistas de alimentación también contribuyeron a una correcta gestión energética, evitando problemas de sobrecalentamiento o caídas de tensión que podrían comprometer los resultados del dispositivo.
<p align="justify">
La integración de múltiples sensores, como el MQ-135 y el MAX4466, presentó retos en cuanto a la gestión de señales digitales y analógicas. No obstante, la correcta organización y aislamiento de las zonas del circuito permitió que el ESP32 manejara eficientemente esta mezcla de señales, asegurando la precisión en las mediciones. Esto refleja la importancia de una planificación cuidadosa en el diseño de prototipos que involucren varios tipos de sensores.
<p align="justify">
Por último, la utilización de herramientas de simulación y visualización 3D en EasyEDA ayudó a detectar errores antes de la fabricación, lo que optimizó el proceso y evitó costosas iteraciones físicas. El rendimiento final del dispositivo, con mediciones consistentes y confiables, demostró la eficacia del diseño del PCB y la integración de componentes. A futuro, se podrían explorar mejoras en la miniaturización y la eficiencia energética para potenciar su aplicación en entornos de monitoreo continuo o en ubicaciones remotas.
  
# 5.- Referencias bibliográficas

- [1] RedesZone, "Conoce EasyEDA: un completo software de simulación de circuitos y diseño de PCB online," [Online]. Available: https://www.redeszone.net/2016/02/19/conoce-easyeda-un-completo-software-de-simulacion-de-circuitos-y-diseno-de-pcb-online/. [Accessed: 06-Oct-2024].
 
- [2] EasyEDA, "Online PCB Design & Circuit Simulator," [Online]. Available: https://easyeda.com. [Accessed: 06-Oct-2024].
