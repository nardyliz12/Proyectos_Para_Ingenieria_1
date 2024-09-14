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

En la actualidad, el avance de la tecnología ha permitido la miniaturización y optimización de sistemas de inteligencia artificial, dando lugar al concepto de Tiny Machine Learning (TinyML). Este término TinyML [1] se refiere al uso de inteligencia artificial liviana en dispositivos integrados  que permite ejecutarlo en dispositivos con recursos limitados, como microcontroladores y sensores embebidos, lo que abre nuevas posibilidades para su integración en aplicaciones del Internet de las Cosas (IoT).


En este proyecto, se realizó un modelo de TinyML utilizando la plataforma Edge Impulse y Teachable Machine, con el objetivo de inferir en un microcontrolador Arduino Nano 33 BLE Sense. El sistema está diseñado para identificar patrones de movimiento y activar diferentes LEDs en función de los gestos detectados. En concreto, el Arduino enciende un LED rojo al detectar la figura de un círculo, un LED azul cuando se dibuja el número 3 y un LED verde al reconocer el número 1. Este proyecto no solo demuestra las capacidades del TinyML en la interpretación de movimientos, sino que también resalta la viabilidad de implementar soluciones inteligentes en dispositivos embebidos con recursos limitados.

# 2.- Metodología:

Este proyecto siguió una serie de pasos estructurados para lograr la implementación de un modelo de TinyML en el microcontrolador Arduino Nano 33 BLE Sense, con el fin de reconocer patrones de movimiento y accionar diferentes LEDs en función de los gestos identificados. A continuación, se describen las etapas principales.

## 2.1 Preparación de datos (Captura de movimientos)

La primera fase consistió en la recopilación de datos de los movimientos que se deseaba reconocer: el dibujo de un círculo, el número 3 y el número 1. Se realizaron múltiples repeticiones de cada uno de estos gestos, asegurando una variabilidad suficiente en la captura de datos para mejorar la precisión del modelo. Estos movimientos fueron registrados a través de Edge Impulse, que se encargó de almacenar los datos para su posterior análisis y procesamiento.

| Arduino Nano 33 BLE Sense | Edge Impulse |
| ----------- | ----------- |
| <img src="https://github.com/user-attachments/assets/853746c4-dfe0-47c1-9257-bd59a878f8e4" width="300"/>   <br> Fuente: Mouser Electronics Perú | <img src="https://github.com/user-attachments/assets/86f001a4-8cb3-4476-9531-437076508bbf" width="550"/> |

<div align="center">
    <img src="https://github.com/user-attachments/assets/f38cc160-e3b4-47a7-9a06-3ca6a652a10c" width="500"/>
</div>


### 2.1.1 Diseño del impulso

<div align="center">
    <img src="https://github.com/user-attachments/assets/bdbd9fe9-bbfa-4b77-984f-b9936469d718" width="500"/>
</div>

### 2.1.2 Características espectrales

<div align="center">
    <img src="https://github.com/user-attachments/assets/8e169668-d6df-4efb-aa5e-ea57a1f55550" width="500"/>
</div>

### 2.1.3 Clasificación y entrenamiento
<table>
  <tr>
    <th width="33%"> :</th>
    <th width="33%"> :</th>
    <th width="33%"> :</th>
  </tr>
  <tr>
    <td><img src="https://github.com/user-attachments/assets/4d0f74b3-e360-4c8a-ae7a-426701a33aad" width="400"/></td>
    <td><img src="https://github.com/user-attachments/assets/81e3ea43-73f9-40a1-be4e-881782d5b07f" width="450"/></td>
    <td><img src="https://github.com/user-attachments/assets/e16e9526-d153-44a9-9e49-0833395e0f3f" width="650"/></td>
  </tr>
</table>

### 2.1.4 Despliegue

<div align="center">
    <img src="https://github.com/user-attachments/assets/3b530319-cfc3-4f8b-bd59-d34b2ec2c151" width="500"/>
</div>

## 2.2 Implementación del modelo (Para Arduino IDE)
# 3.- Resultados:
# 4.- Discusión:

El desarrollo e implementación del modelo de TinyML en el Arduino Nano 33 BLE Sense fue exitoso, cumpliendo con los objetivos planteados al inicio del proyecto. La integración de herramientas como Edge Impulse y Teachable Machine resultó efectiva para entrenar un modelo capaz de identificar gestos específicos, tales como el dibujo de un círculo, el número 3 y el número 1, y traducirlos en acciones concretas, como el encendido de LEDs de diferentes colores.

Uno de los aspectos más destacables fue la precisión del modelo para reconocer correctamente los patrones de movimiento, a pesar de las limitaciones de procesamiento del microcontrolador. Esto demuestra que la aplicación de TinyML en dispositivos embebidos es una opción viable para proyectos que requieren una rápida respuesta a estímulos del entorno sin depender de plataformas de computación más potentes.

Sin embargo, también surgieron algunos desafíos. Uno de ellos fue la sensibilidad del dispositivo a variaciones sutiles en los gestos, lo que requería un entrenamiento más exhaustivo del modelo con un conjunto de datos adecuado para mejorar la robustez de las predicciones. Además, el uso de sensores de movimiento en entornos con ruido o interferencias podría afectar la exactitud de las predicciones, lo que sugiere la necesidad de una calibración más precisa o de la implementación de algoritmos de filtrado de señal.

En conclusión, este proyecto evidencia que TinyML tiene un gran potencial en la creación de soluciones inteligentes a pequeña escala, y su integración en microcontroladores como el Arduino Nano 33 BLE Sense abre un abanico de posibilidades para futuras aplicaciones en áreas como la automatización, la interacción humano-máquina y la robótica. El éxito de este proyecto sienta las bases para futuras mejoras, tales como la incorporación de más gestos y la optimización del modelo para entornos más complejos.

# 5.- Referencias bibliográficas:

[1] TinyML Foundation, “TinyML,” 2021. [Online]. Available: https://www.tinyml.org. [Accessed: 11-Sep-2024].

- Arduino, "Arduino Nano 33 BLE Sense Overview," Arduino, 2023. [Online]. Available: https://www.arduino.cc.

- Edge Impulse, "Edge Impulse Documentation," Edge Impulse, 2023. [Online]. Available: https://docs.edgeimpulse.com.

- Google, "Teachable Machine: Train a Computer to Recognize Your Own Images, Sounds, & Poses," Google, 2023. [Online]. Available: https://teachablemachine.withgoogle.com.

- M. David, S. Li, P. Kumar, and R. Martínez, "Tiny Machine Learning for Gesture Recognition on Embedded Devices," Sensors, vol. 21, no. 8, p. 2751, 2021. doi: 10.3390/s21082751.

- P. Warden and D. Situnayake, TinyML: Machine Learning with TensorFlow Lite on Arduino and Ultra-Low-Power Microcontrollers. O'Reilly Media, 2019.
