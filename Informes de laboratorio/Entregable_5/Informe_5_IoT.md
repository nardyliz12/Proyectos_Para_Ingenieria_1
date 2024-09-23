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

## Adquisición de datos en IoT
<p align="justify">
El proceso para capturar información mediante los sensores y su conversión en señales digitales para realizar el análisis nos permiten tomar decisiones automatizadas basadas en datos que se emiten en tiempo real, dado que tiene aplicaciones relacionadas con la automatización y el monitoreo remoto, para ello, se utilizó un componente electrónico que es el potenciómetro, qué es un tipo de resistor mayormente utilizado para ajustar voltajes en un circuito, donde controla la resistencia entre sus terminales, sin embargo, en ciertos contextos suele funcionar como un sensor de posición o cómo un sensor de desplazamiento, dado que convierte el movimiento mecánico (como girar una perilla) en un cambio de resistencia que puede llegar a ser medido eléctricamente. Adicionalmente, se debe adquirir un convertidor ADC para que convierta todas las señales analógicas a señales digitales, asimismo, se debe contar con la transmisión de datos que se refiere al envío del dichos datos a la nube o plataformas qué tiene IoT.
</p> 

<div align="center">

|Potenciómetro|
|---------------|
|<img src="https://github.com/user-attachments/assets/668bfeb7-ea61-4a7e-ab11-2a40c98237f4" alt="ESP32 DEVKIT V1" width="300"/> |
Fuente: Geekbot Electronics

</div>

# 3.- Resultados:
# 4.- Discusión:
# 5.- Referencias bibliográficas:

- [1] "Internet of Things (IoT)," IoT Agenda, TechTarget. [Online]. Available: https://www.techtarget.com/iotagenda/definition/Internet-of-Things-IoT. [Accessed: 23-Sep-2024].
- [2] N. Dey, A. E. Hassanien, C. Bhatt, A. Ashour, and S. C. Satapathy, Internet of Things and Big Data Analytics Toward Next-Generation Intelligence. Cham, Switzerland: Springer, 2018. [Online]. Available: https://search.worldcat.org/es/title/1001327784. [Accessed: 23-Sep-2024].
- [3] J. Hu, B. Lennox, H. Niu, J. Carrasco, & F. Arvin "Fault-tolerant cooperative navigation of networked UAV swarms for forest fire monitoring," *ScienceDirect*, vol. 123, April 2022. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0005109822000802. [Accessed: 23-Sep-2024].
- [4] J. Hu, B. Lennox, & F. Arvin, "Robust formation control for networked robotic systems using Negative Imaginary dynamics," *Automatica*, vol. 140, June 2022. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0005109822000802. [Accessed: 23-Sep-2024].
