<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# PROYECTOS DE INGENIERIA - I

#  AIRVIBE: Sistema Integrado de Monitoreo de Calidad del Aire


# Objetivo 🌱: 
<p align="justify">
Desarrollar e implementar un prototipo de dispositivo de monitoreo ambiental que mida en tiempo real la calidad del aire, proporcionando datos accesibles a través de una interfaz web y emitiendo alertas en caso de contaminación excesiva, con el fin de informar a los residentes y apoyar al gobierno local en la toma de decisiones para mejorar las condiciones ambientales de la comunidad. Para ello, nuestro objetivo esta abarcando el ODS número que se centra en la necesidad de adoptar medidas urgentes para acabar con el cambio climático que afecta a todos los países del mundo [1].
</p>

[Ingresa aqui para saber mas acerca del ODS 13](https://www.un.org/sustainabledevelopment/es/climate-change-2/)

<div align="center">
  
|<img src="https://github.com/user-attachments/assets/86ac4f6f-d762-420a-a34b-f254d1ed591d" width="700"/>|
|-------------------------------------------------------------------------------------------------------|
|Fuente: EduFORS

</div>

# ¿Quiénes somos? 
<p align="justify">
¡Bienvenidos a nuestro repositorio! 🤓☝️ Somos el Grupo 9 del curso de Proyectos para Ingeniería I ( 2024-2), y nos complace utilizar este repositorio para compartir y cargar el proyecto que estaremos desarrollando durante cada sesión a lo largo del curso. Estamos entusiasmados por contribuir al desarrollo sostenible de nuestro país y esperamos compartir nuestros avances y aprendizajes con ustedes.
</p>

## Intregrantes y Roles del Grupo
|Nombres:                      |Rol:        | Correo: |
|---------------------|---------------------------------|-----------|
|1. Alarcon Arias Julio Erick |  **Coordinador General y de modelado**| julio.alarcon@upch.pe        |
|2. Atao Surichaqui Ester Solamyt| **Coordinadora de Manufactura digital**|ester.atao@upch.pe|
|3. Castañeda Reategui Mercedes del Rosario | **Coordinadora Diseño Web**|mercedes.castaneda@upch.pe|
|4. Condori Mamani Nardy Liz | **Coordinadora de software y programación** |nardy.condori@upch.pe|
|5. Vega Pahuara Millene Nadile | **Coordinadora de Hardware**| millene.vega@upch.pe |

# PROGRESO TRL

## TRL1: Principios básicos observados y reportados

### Sensores utilizados: 
### 1) Sensor MQ -7
|Descripción| Imagen del sensor |
|-------|-----|
|El sensor MQ-7 es un dispositivo diseñado para detectar monóxido de carbono (CO) en el aire. Su principio de funcionamiento se basa en la medición de la resistencia variable del material sensor frente a diferentes concentraciones de gas, que cambia según la presencia de gases como CO, H2, LPG y CH4.| <img src="https://github.com/user-attachments/assets/f64460c6-8bc2-4d36-9aa9-209316468d77" width="700"/>|


| Características principales del MQ-7:|
|---------------------------------------|
|1. **Rango de detección**: Puede detectar concentraciones de gases en un rango de 50 a 5000 ppm.|
|2. **Curva de respuesta**: La relación entre la resistencia del sensor y la concentración de gas sigue una curva logarítmica. Para efectos prácticos, se asume que es lineal.|
|3. **Precalentamiento**: Para una operación precisa, el sensor alterna entre dos fases de voltaje: 5V durante 60 segundos y 1.4V durante 90 segundos. Esto ayuda a estabilizar el sensor para obtener lecturas precisas.|
|4. **Circuito**: El sensor MQ-7 se conecta a un Arduino, donde la señal analógica se procesa y se convierte en una lectura de concentración de CO usando una ecuación basada en regresión exponencial.|



|Propiedades físicas:|
|----------------------|
|- El material sensible del MQ-7 es dióxido de estaño (SnO2), que es un semiconductor. Este material cambia su resistencia en presencia de gases reductores como el CO.|
|- El MQ-7 tiene un tiempo de respuesta relativamente rápido, típicamente de 60 a 90 segundos, una vez completada la fase de calentamiento para estabilizar el sensor.|
|- El sensor puede operar en un rango de temperatura de -20°C a 50°C, lo que lo hace útil para diversas condiciones ambientales.|
|- Los sensores MQ suelen tener un encapsulado cilíndrico con terminales para conectarse fácilmente a un circuito. El MQ-7 es compacto y fácil de integrar en proyectos de electrónica como en un Arduino.|

### 2) Sensor PMS5003
|Descripción| Imagen del sensor |
|-------|-----|
|El PMS5003 es un sensor de partículas diseñado para medir concentraciones de material particulado (PM2.5 y PM10) en el aire mediante el principio de dispersión de luz láser. El dispositivo detecta partículas en suspensión como polvo, polen y humo, midiendo la cantidad de luz dispersada por las partículas cuando atraviesan un haz de luz láser. Este sensor es útil para monitorear la calidad del aire en aplicaciones de control ambiental.| <img src="https://github.com/user-attachments/assets/90288d1b-94f3-4142-a6d0-a87a8103ddc7" width="700"/>|

| Características principales del MQ-7:|
|---------------------------------------|
|1. **Rango de detección**: Puede detectar concentraciones de gases en un rango de 50 a 5000 ppm.|
|2. **Curva de respuesta**: La relación entre la resistencia del sensor y la concentración de gas sigue una curva logarítmica. Para efectos prácticos, se asume que es lineal.|
|3. **Precalentamiento**: Para una operación precisa, el sensor alterna entre dos fases de voltaje: 5V durante 60 segundos y 1.4V durante 90 segundos. Esto ayuda a estabilizar el sensor para obtener lecturas precisas.|
|4. **Circuito**: El sensor MQ-7 se conecta a un Arduino, donde la señal analógica se procesa y se convierte en una lectura de concentración de CO usando una ecuación basada en regresión exponencial.|



|Propiedades físicas:|
|----------------------|
|- El material sensible del MQ-7 es dióxido de estaño (SnO2), que es un semiconductor. Este material cambia su resistencia en presencia de gases reductores como el CO.|
|- El MQ-7 tiene un tiempo de respuesta relativamente rápido, típicamente de 60 a 90 segundos, una vez completada la fase de calentamiento para estabilizar el sensor.|
|- El sensor puede operar en un rango de temperatura de -20°C a 50°C, lo que lo hace útil para diversas condiciones ambientales.|
|- Los sensores MQ suelen tener un encapsulado cilíndrico con terminales para conectarse fácilmente a un circuito. El MQ-7 es compacto y fácil de integrar en proyectos de electrónica como en un Arduino.|



|Propiedades  químicas:|
|----------------------|
|- El SnO2 es altamente sensible a gases reductores como el CO. Cuando el gas se encuentra en el aire, los átomos de oxígeno en la superficie del material reaccionan con el gas, cambiando la conductividad del sensor.|
|- l CO, al entrar en contacto con el SnO2, reduce los átomos de oxígeno en la superficie del sensor. Esta reacción química provoca una disminución en la resistencia eléctrica del sensor, lo que permite calcular la concentración del gas.|



|Funcionamiento básico:|
|----------------------|
|- El sensor mide la relación entre la resistencia en presencia del gas (RS) y su resistencia en aire limpio (R0), usando la ley de Ohm para calcular el voltaje de salida.|
|- Luego, mediante la ecuación de la recta logarítmica, se obtiene la concentración de CO en ppm.|

### Sensor MAX4466

| Descripción | Imagen del sensor |
|-------------|-------------------|
| El **MAX4466** es un amplificador de micrófono que se utiliza como sensor de ruido para detectar niveles de sonido en el entorno. Su diseño incluye un circuito de amplificación de bajo ruido, lo que permite captar sonidos con alta sensibilidad y precisión. | ![image](https://github.com/user-attachments/assets/4698ce5c-aca9-4606-b371-12ebb498ca29) |
 |

| Características principales del MAX4466: |
|-----------------------------------------|
| 1. **Amplificación ajustable**: Proporciona un aumento de ganancia de hasta 125x, ideal para captar sonidos débiles y medir niveles de ruido. |
| 2. **Bajo nivel de ruido**: Diseñado con tecnología de bajo ruido, minimizando la distorsión y mejorando la calidad de la señal de audio. |
| 3. **Voltaje de operación**: Funciona con un rango de voltaje de 2.7V a 5.5V, adecuado para diversos proyectos de electrónica. |
| 4. **Salida analógica**: La señal de salida es analógica y se puede conectar fácilmente a microcontroladores, sistemas de audio o circuitos de procesamiento de señales. |

| Propiedades físicas: |
|----------------------|
| - El MAX4466 se presenta en un encapsulado compacto, facilitando su integración en proyectos de diseño de circuitos. |
| - Tiene un bajo consumo de energía, lo que lo hace ideal para aplicaciones portátiles y de batería. |
| - Las conexiones son sencillas, con terminales claramente identificados para VCC, GND, y la señal de salida. |

| Propiedades químicas: |
|-----------------------|
| - El sensor no tiene reacciones químicas internas, ya que su función es puramente electrónica, enfocándose en la amplificación de señales acústicas. |
| - Utiliza componentes electrónicos de alta calidad que contribuyen a la estabilidad y durabilidad del amplificador en diferentes condiciones ambientales. |

| Funcionamiento básico: |
|------------------------|
| - El micrófono electret integrado capta las ondas sonoras y las convierte en señales eléctricas de bajo voltaje. |
| - La señal es enviada al MAX4466, donde es amplificada según la ganancia configurada. |
| - La señal amplificada se presenta en la salida, que se puede conectar a un microcontrolador, sistema de registro de datos o visualización de niveles de ruido. |

## Referencias: 

[1] "MQ-7 Gas Sensor," SparkFun Electronics. [En línea]. Disponible en: https://www.sparkfun.com/datasheets/Sensors/Biometric/MQ-7.pdf. [Accedido: 24-Oct-2024].



