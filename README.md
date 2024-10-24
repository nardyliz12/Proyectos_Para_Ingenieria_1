# Proyectos De Ingeniería - I

<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

#  AIRVIBE: Sistema Integrado de Monitoreo de Calidad del Aire

# ¿Quiénes somos? 

¡Bienvenidos a nuestro repositorio! 🤓☝️ Somos el Grupo 9 del curso de Proyectos para Ingeniería I ( 2024-2), y nos complace utilizar este repositorio para compartir y cargar el proyecto que estaremos desarrollando durante cada sesión a lo largo del curso. Estamos entusiasmados por contribuir al desarrollo sostenible de nuestro país y esperamos compartir nuestros avances y aprendizajes con ustedes.


## Intregrantes y Roles del Grupo
|Nombres:                      |Rol:        | Correo: |
|---------------------|---------------------------------|-----------|
|1. Alarcon Arias Julio Erick |  **Coordinador General y de modelado**| julio.alarcon@upch.pe        |
|2. Atao Surichaqui Ester Solamyt| **Coordinadora de Manufactura digital**|ester.atao@upch.pe|
|3. Castañeda Reategui Mercedes del Rosario | **Coordinadora Diseño Web**|mercedes.castaneda@upch.pe|
|4. Condori Mamani Nardy Liz | **Coordinadora de software y programación** |nardy.condori@upch.pe|
|5. Vega Pahuara Millene Nadile | **Coordinadora de Hardware**| millene.vega@upch.pe |

# Objetivo 🌱: 
Desarrollar e implementar un prototipo de dispositivo de monitoreo ambiental que mida en tiempo real la calidad del aire, proporcionando datos accesibles a través de una interfaz web y emitiendo alertas en caso de contaminación excesiva, con el fin de informar a los residentes y apoyar al gobierno local en la toma de decisiones para mejorar las condiciones ambientales de la comunidad. Para ello, nuestro objetivo esta abarcando el ODS número 13 que se centra en la necesidad de adoptar medidas urgentes para acabar con el cambio climático que afecta a todos los países del mundo.

![image](https://github.com/user-attachments/assets/86ac4f6f-d762-420a-a34b-f254d1ed591d)

# PROGRESO TRL

## TRL1:Principios básicos observados y reportados

### Sensores utilizados: 

#### 1) MQ - 7:

El sensor MQ-7 es un dispositivo diseñado para detectar monóxido de carbono (CO) en el aire. Su principio de funcionamiento se basa en la medición de la resistencia variable del material sensor frente a diferentes concentraciones de gas, que cambia según la presencia de gases como CO, H2, LPG y CH4.

![image](https://github.com/user-attachments/assets/f64460c6-8bc2-4d36-9aa9-209316468d77)

### Características principales del MQ-7:
1. **Rango de detección**: Puede detectar concentraciones de gases en un rango de 50 a 5000 ppm.
2. **Curva de respuesta**: La relación entre la resistencia del sensor y la concentración de gas sigue una curva logarítmica. Para efectos prácticos, se asume que es lineal.
3. **Precalentamiento**: Para una operación precisa, el sensor alterna entre dos fases de voltaje: 5V durante 60 segundos y 1.4V durante 90 segundos. Esto ayuda a estabilizar el sensor para obtener lecturas precisas.
4. **Circuito**: El sensor MQ-7 se conecta a un Arduino, donde la señal analógica se procesa y se convierte en una lectura de concentración de CO usando una ecuación basada en regresión exponencial.

### Funcionamiento básico:
- El sensor mide la relación entre la resistencia en presencia del gas (RS) y su resistencia en aire limpio (R0), usando la ley de Ohm para calcular el voltaje de salida.
- Luego, mediante la ecuación de la recta logarítmica, se obtiene la concentración de CO en ppm.


