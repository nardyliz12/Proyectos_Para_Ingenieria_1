<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# Presentación: Avance del proyecto

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

# 1.- Problemática

Según la Organización Mundial de la Salud (OMS), el 99% de la población mundial reside en áreas donde los niveles de calidad del aire exceden los límites establecidos. Entre los contaminantes más preocupantes se encuentran las partículas en suspensión, el monóxido de carbono, el ozono, el dióxido de nitrógeno y el dióxido de azufre. La exposición a estos contaminantes incrementa significativamente el riesgo de enfermedades graves, como accidentes cerebrovasculares, enfermedades cardíacas y pulmonares, así como ciertos tipos de cáncer [1].

El Informe Mundial sobre la Calidad del Aire 2023 indica que Perú está entre los países con los niveles más altos de contaminación del aire a nivel mundial. En 2021, la concentración de partículas finas (PM2.5), un indicador clave para medir la contaminación del aire, alcanzó un promedio histórico de 29.6 microgramos por metro cúbico (μg/m³). Según la OMS, los niveles de PM2.5 en una ciudad deberían situarse entre 0 y 5 μg/m³ para ser considerados adecuados [2]. 

  ![image](https://github.com/user-attachments/assets/09c06a0e-7f34-4275-84eb-7f725961a0bd)

*Fuente: 2023 World Air Quality Report | Elaboración: GEE - AAP*

En este contexto, nos enfocamos en la ciudad de Chicla, situada en la provincia de Huarochirí, a 11 km de Casapalca, donde operan varias minas de metales. Según el Sistema Nacional de Información Ambiental (SINIA) [3], entre 2019 y 2022, se han reportado casos de contaminación, especialmente en el río Rímac, que fluye adyacente a Chicla. Sin embargo, casi no existen datos específicos sobre la contaminación del aire en esta ciudad. La principal fuente de información proviene de la página oficial de la Red de Salud de Huarochirí, que ofrece informes ambientales generalizados para toda la provincia, dejando a Chicla con una alarmante falta de datos actualizados sobre su calidad ambiental.

Esta situación es especialmente preocupante, ya que los habitantes de Chicla son vulnerables a problemas de salud. Si no se implementan medidas efectivas de regulación y control de la contaminación, se prevén efectos negativos en la salud pública en el futuro.

# 2.- Solución
 
Desarrollaremos e implementaremos un dispositivo de monitoreo ambiental que mida en tiempo real la calidad del aire y los niveles de ruido en Chicla. Este dispositivo proporcionará datos accesibles a través de una interfaz web y emitirá alertas en caso de contaminación excesiva. El objetivo es informar a los residentes y respaldar al gobierno local en la toma de decisiones para mejorar las condiciones ambientales de la comunidad. 

# 3.- Requerimientos

El diseño del dispositivo debe ser económico y eficiente, permitiendo la medición de la calidad del aire y el ruido ambiental de manera accesible para aplicaciones como monitoreo ciudadano, educación y estudios preliminares. Aunque los sensores a utilizar no tienen que ser de grado industrial, el dispositivo debe proporcionar lecturas fiables para niveles de partículas en el aire (PM10 y PM2.5) y el ruido ambiental. Las mediciones deben estar alineadas con las normativas vigentes en Perú, como la Norma de Calidad Ambiental del Aire del MINAM, y con los estándares internacionales de la Organización Mundial de la Salud (OMS), aunque con una precisión ajustada a un enfoque de bajo costo.

## 3.1.- Sensores de partículas
Se requiere un sensor capaz de medir partículas suspendidas en el aire, especialmente PM10 y PM2.5, para cumplir con los límites establecidos en las normativas ambientales nacionales e internacionales. El sensor debe ser compacto, de bajo costo y fácil de integrar con el sistema electrónico. Si bien no es obligatorio que cumpla con los requisitos para equipos industriales, debe permitir la detección confiable de concentraciones peligrosas de partículas, proporcionando datos útiles para la toma de decisiones preventivas o de concienciación pública. Este sensor debe ser capaz de operar en exteriores con protección adecuada.

## 3.2.- Medición de ruido 
El dispositivo debe incluir un sensor que permita detectar niveles de ruido ambiental de manera económica y eficiente. Este sensor no tiene que estar certificado para cumplir con normativas estrictas como el Decreto Supremo N.º 085-2003-PCM sobre límites máximos de ruido, pero debe ser capaz de identificar fluctuaciones de ruido en diferentes ambientes, proporcionando datos suficientes para estudios preliminares o monitoreos básicos. El sensor debe ser fácil de integrar y configurarse para funcionar en una amplia gama de niveles sonoros, sin necesidad de un equipo especializado para su instalación.

## 3.3.- Material del chasis 
El chasis del dispositivo debe estar fabricado con un material económico y fácil de procesar, como plásticos biodegradables o materiales de impresión 3D, con suficiente resistencia para aplicaciones tanto en interiores como en exteriores protegidos. El material debe ser lo suficientemente robusto para proteger los componentes electrónicos contra daños mecánicos y proporcionar cierta resistencia a condiciones ambientales moderadas (por ejemplo, luz solar, humedad). Se requiere una estructura que permita la instalación en postes o superficies urbanas, y que sea compatible con las normas internacionales de durabilidad, como la ISO 9223.

## 3.4.- Fuente de energía 
El dispositivo debe ser alimentado por una fuente de energía autónoma, preferiblemente una batería recargable, que garantice una operación continua sin depender de una fuente de alimentación externa constante. La batería debe cumplir con los estándares de seguridad, como la IEC 62133, que garantizan protección contra sobrecargas y descargas profundas. Para optimizar su operación en ubicaciones remotas o sin acceso a la red eléctrica, se podría considerar la integración de un sistema de carga solar, compatible con el enfoque low cost, para mantener la batería funcional a lo largo del tiempo sin intervenciones frecuentes.

# 4.- Diseño mecánico

El diseño mecánico del dispositivo se centra en la creación de un chasis funcional y eficiente que albergue los componentes electrónicos de manera segura y optimizada. Este chasis está fabricado con PLA, un material biodegradable y fácil de procesar mediante técnicas de impresión 3D, lo que no solo contribuye a un enfoque sostenible, sino que también permite una fabricación de bajo costo y accesible para la producción en pequeña escala. La elección de PLA garantiza una buena resistencia mecánica y rigidez, adecuadas para proteger los componentes internos del dispositivo.

El chasis ha sido diseñado con un espacio específico para alojar el sensor de calidad de aire PMS5003, que mide las concentraciones de PM10 y PM2.5, así como el sensor de ruido KY-037. Ambas unidades se han integrado en posiciones estratégicas dentro del chasis para asegurar que estén expuestas a las condiciones ambientales que se desean medir, mientras que se minimiza la interferencia de otros componentes. Además, se han incorporado compartimentos dedicados para la batería recargable, garantizando que el sistema tenga un suministro de energía adecuado y que se mantenga una fácil accesibilidad para su carga y reemplazo.

El diseño también incluye un sistema de fijación que permite que el dispositivo se instale de manera segura en un poste, proporcionando la estabilidad necesaria para resistir factores como el viento y las vibraciones. Se ha modelado una parte posterior curvada que se adapta al contorno del poste, lo que no solo mejora la estética del dispositivo, sino que también optimiza el uso del espacio y evita el sobreespacio que podría afectar su desempeño.

# 5.- Simulaciones

La simulación de tracción realizada en SimScale mostró los desplazamientos y las tensiones distribuidas a lo largo del dispositivo, sometido a una fuerza equivalente a su peso (aproximadamente 2.943 N). Utilizando el material PLA, las tensiones fueron evaluadas a través del criterio de Von Mises, que se observa en la escala de colores en la simulación.

En la parte superior del dispositivo, especialmente en los bordes de contacto con el poste y en las zonas de fijación, las tensiones de tracción fueron mínimas, indicadas por los tonos azules en el espectro de Von Mises. Esto es consistente con la rigidez del material y la buena distribución de las fuerzas en estas zonas.

En la base del dispositivo, donde se observan algunas concentraciones de tensiones, representadas por tonos más cercanos al verde, se detectan ligeros incrementos en las tensiones. Sin embargo, estos valores se mantienen dentro de los límites aceptables del material, ya que no se superan los valores de límite elástico del PLA (55 - 72 MPa). La mayor concentración de esfuerzo se ubica en la parte inferior de la estructura, lo que sugiere que, aunque el dispositivo experimenta tensiones, estas no son suficientes para causar deformaciones permanentes o fallas estructurales.

Finalmente, los resultados indican que la estructura es capaz de soportar el peso del dispositivo sin superar los límites de seguridad del material, lo que garantiza que el diseño puede resistir las condiciones de tracción en su aplicación real.

En la simulación de compresión causada por las fuerzas del viento, como se observa en la imagen, el modelo muestra una distribución considerable de esfuerzos en la estructura. La tensión de Von Mises evidencia que las zonas de mayor concentración de esfuerzos están ubicadas en la región central del modelo, destacándose en las áreas cercanas al agujero circular. Estas áreas presentan mayores tensiones, lo cual se refleja en los colores verdes y amarillos, mientras que las demás áreas permanecen en un rango de tensiones más bajas, indicadas por los colores azules.

Este análisis sugiere que la estructura experimenta una mayor compresión en los laterales sometidos a la presión del viento. Las tensiones alcanzan valores significativos pero no parecen exceder el límite elástico del PLA, indicando que el material podría resistir estas fuerzas sin sufrir deformaciones permanentes.

# 6.- Diseño Electrónico

Figura 1: Diseño electrónico

![](https://github.com/user-attachments/assets/1cce0267-1661-4926-81c0-e3f03fd68401)

Figura 2: Diseño electrónico por partes

![](https://github.com/user-attachments/assets/6c8ab319-f46e-4d90-9558-b88b61b3e30a)


# 7.- Pruebas

https://github.com/user-attachments/assets/1d06c45c-0708-46ee-8a09-e7ee31cfaf3e

https://github.com/user-attachments/assets/96144028-8eda-495f-84b2-57fee171a812

https://github.com/user-attachments/assets/d4f08f1d-42be-4acf-876a-4c91c198ecf7

# 8.- PCB del circuito electrónico

<div align="center">
  
|Circuito electrónico para el PCB|
|------|
|<img src="https://github.com/user-attachments/assets/f317762b-1c61-4fce-a0b2-2bd9ac3e01cd" alt="ESP32 DEVKIT V1" width="800"/>|

</div>
<div align="center">
  
| Conexión PCB  |
|-----------------|
|<img src="https://github.com/user-attachments/assets/cbd79743-84d0-4c00-9b20-53ece9f282e7" alt="ESP32 DEVKIT V1" width="800"/>|

</div>
<div align="center">
  
|  Vista 2D   |
|------|
|<img src="https://github.com/user-attachments/assets/501a1de1-c565-4f2a-bde5-5b63ade62740" alt="ESP32 DEVKIT V1" width="800"/>|

</div>
<div align="center">
  
|  Vista 3D: Capa Inferior  | Vista 3D: Capa Superior|
|------|----------|
|<img src="https://github.com/user-attachments/assets/520cc312-4e1a-4a8e-9691-fcd962559a62" alt="ESP32 DEVKIT V1" width="800"/>|<img src="https://github.com/user-attachments/assets/2697b088-8152-4266-bd24-61cf124d56bd" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

# Referencias Bibliográficas

[1] -. Contaminación atmosférica [Internet]. Who.int. [citado el 6 de octubre de 2024]. Disponible en: https://www.who.int/es/health-topics/air-pollution.

[2] -. Org.pe. [citado el 6 de octubre de 2024]. Disponible en: https://aap.org.pe/observatorio-aap/raking-calidad-de-aire-2023/Ranking_calidad_de_aire_2023.pdf

[3] -. Ministerio del Ambiente. Denuncias ambientales 2019-2022, región Lima [Internet]. 2023 [citado 2024 oct 7]. Disponible en: https://sinia.minam.gob.pe/documentos/denuncias-ambientales-2019-2022-region-lima

