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
# 2.- Solución
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
# 7.- Pruebas
# 8.- PCB del circuito electrónico
