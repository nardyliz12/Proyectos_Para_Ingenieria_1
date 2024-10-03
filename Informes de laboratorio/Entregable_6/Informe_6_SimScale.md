<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# INFORME DE LABORATORIO N° 6: Utilizando Sim Scale

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Castañeda Reategui Mercedes del Rosario
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

# 1.- Introducción:

<p align="justify">
Realizar un análisis de esfuerzos sobre un componente mecánico en una estructura es parte fundamental en el diseño y validación de estructuras mecánicas, dado que resulta ser interesante cuando se trabaja en ello, ya que a través de este tipo de simulaciones, es posible prever el comportamiento de ciertos componentes o estructuras que se encuentran bajo cargas específicas, además, de que nos permite identificar todos los posibles puntos de fallo que se pueden presentar, asimismo, nos permite optimizar su diseño mucho antes de realizar la fabricación del producto.
</p>
<p align="justify">
Por ende, para llevar a cabo este análisis, se utilizará la plataforma de SIMSCALE, ya que este es capaz de realizar simulaciones basada en la nube donde nos permite realizar análisis por elementos finitos (FEA) y dinámica de fluidos computacional (CFD) [1]. Este tipo de software resulta ideal para poder realizar simulaciones de componentes mecánicos estáticos, además, de predecir el comportamiento estructural de todos los componentes que se encuentran sometidos mediante cargas mecánicas, lo que resulta ser muy crucial en el diseño de piezas mecánicas dentro de un prototipo o un producto grande.
</p>
<p align="justify">
Por todo lo explicado anteriormente, para esta actividad se llevará a cabo dicha simulación sobre los esfuerzos estáticos en un componente estructural perteneciente a nuestro prototipo, dado que el objetivo principal es poder identificar la distribución de los esfuerzos y deformaciones que presenta, asimismo, podamos evaluar si nuestro diseño cumple con todos los criterios de resistencia esteblecidos para asi identificar que sea lo más bueno posible y cumpla con su objetivo original.
</p>

Por lo cual el análisis se enfocará en los siguientes puntos clave:

- Aplicación de cargas estáticas y condiciones de contorno.
- Identificar todas las zonas críticas donde se concentran los esfuerzos en el componente.
- Analizar los resultados de deformación y las tensiones internas dentro del componente estructural empleado.

<p align="justify">
Realizar esta simulación no solo optimiza nuestro diseño, sino que también nos garantiza la seguridad y funcionalidad del componente en nuestro prototipo, lo que nos favorece conocer antes de llevarlo a cabo y culminarlo.
</p>

# 2.- Metodología:

En esta sección se detallan los pasos seguidos para realizar las simulaciones de esfuerzos estáticos aplicados al chasís modelado en PLA, utilizando la plataforma SimScale. El objetivo de estas simulaciones fue evaluar el comportamiento del material bajo diferentes tipos de carga, como tracción, compresión, flexión, torsión y corte, así como la rotación del modelo. A continuación, se describen las etapas del proceso.

# 2.1. Preparación del Modelo 3D
   
El chasís fue diseñado previamente en OnShape y exportado en formato compatible con SimScale. El material utilizado para la simulación fue PLA (ácido poliláctico), cuyas propiedades mecánicas fueron tomadas en cuenta para los cálculos:

![image](https://github.com/user-attachments/assets/cc8d1adf-07fd-44e2-849b-fcc33885bbbd)


Densidad: 1,24 × 10³ kg/m³
Módulo de Young: 3,6 GPa
Coeficiente de Poisson: 0,38
Límite elástico: (55-72) MPa
Resistencia a tracción: (47-70) MPa
Resistencia a compresión: (66-86) MPa

Para ello también se introducieron dichas características dentro del SimScale para que este tome en cuenta las propiedades del material a la hora de generar las simulaciones.

![image](https://github.com/user-attachments/assets/825238da-7dd5-4065-b400-41db89323e0c)


# 2.2. Configuración del Entorno de Simulación
Se utilizó SimScale como herramienta de simulación, la cual permite realizar análisis de elementos finitos (FEA) para determinar la respuesta del chasís bajo diferentes tipos de esfuerzos mecánicos. El modelo fue importado a la plataforma y se configuraron las siguientes condiciones iniciales:

Definición del material (PLA) con sus respectivas propiedades mecánicas.

![image](https://github.com/user-attachments/assets/32b9ec0f-3553-4b99-b74d-ce6f5c80e30a)

# 2.3 Simulación de Tracción

Para la simulación de tracción, se aplicó una fuerza perpendicular a la superficie del chasís. Para ello se dejó la parte curveada de nuestro diseño como una superficie fija; ya que, esta en la vida real iría fijada a un poste como medio de soporte. Se definieron las siguientes condiciones de contorno:

Fuerza aplicada: 15000 N, calculada de acuerdo con el rango de resistencia a tracción del material PLA (47-70 MPa) y el área definida.
Condiciones de soporte: Un extremo del chasís se fijó mediante la condición de Fixed Support, mientras que el otro extremo se dejó libre para experimentar desplazamiento bajo la acción de la fuerza.
Durante la simulación, se monitorearon las tensiones máximas alcanzadas y las deformaciones resultantes en función de la fuerza aplicada. El objetivo fue verificar si las tensiones inducidas se mantenían dentro de los límites de resistencia a tracción del PLA.

![image](https://github.com/user-attachments/assets/a2b67f2b-5712-44da-b20f-9ff9102a9260)

![image](https://github.com/user-attachments/assets/34c08a1e-5582-42f8-96b7-76936cdf96b5)

![image](https://github.com/user-attachments/assets/40747134-b74c-4ca4-b773-10e4c63c1849)

# 2.4 Simulación de Compresión
En el caso de la compresión, la fuerza se aplicó de manera similar, pero en dirección contraria, buscando simular la respuesta del chasís ante cargas compresivas. Además, se consideró de iual forma la parte posterior de este modelo para configurarlo como una superficie fija. Para esta simulación:

Fuerza aplicada: 15000 N, considerando la resistencia a compresión del material (66-86 MPa) y el área de aplicación.
Condiciones de soporte: Uno de los extremos del chasís fue fijado de igual manera, utilizando Fixed Support, mientras que el extremo opuesto se mantuvo libre para experimentar la contracción debido a la fuerza aplicada.

![image](https://github.com/user-attachments/assets/ba022c4e-580a-4bf7-a224-b20e63e90394)

![image](https://github.com/user-attachments/assets/fcf7ed13-a9c9-42b9-9ff0-f62d0e815041)

![image](https://github.com/user-attachments/assets/031439b1-b19a-43d4-902a-db63a93db598)

# 3.- Resultados:

En esta sección se presentan los resultados obtenidos de las simulaciones realizadas sobre el chasís en estudio, utilizando el material PLA. Las pruebas de simulación están enfocadas en analizar el comportamiento estructural del chasís bajo condiciones de tracción y compresión, con el objetivo de determinar las zonas de mayor esfuerzo y posibles fallas estructurales. Los resultados se expresan en términos de tensiones de Von Mises, que permiten evaluar la distribución de esfuerzos en todo el cuerpo del chasís, así como las posibles deformaciones bajo las condiciones aplicadas.

# 3.1Tracción

Para la simulación de tracción, se aplicó una fuerza de 15,000 N en los costados del chasís. Los resultados obtenidos mostraron que las tensiones de Von Mises se distribuyeron principalmente en las zonas cercanas a los bordes y áreas más delgadas del chasís. Estas zonas presentaron valores más elevados de tensión, indicando que podrían ser los puntos críticos donde ocurra una falla si las tensiones superan los límites de resistencia del material. Sin embargo, en las áreas centrales del chasís, los niveles de esfuerzo fueron considerablemente más bajos, lo que sugiere que la estructura central es capaz de soportar mejor las tensiones aplicadas.

![image](https://github.com/user-attachments/assets/a4ef1a2b-037e-47c0-8f27-b662f00543b7)

La máxima tensión observada en el análisis de tracción estuvo por debajo del límite de resistencia a tracción del PLA (70 MPa), lo cual indica que, bajo estas condiciones, el chasís no presenta riesgos significativos de falla por tracción.

# 3.2 Compresión

Para la prueba de compresión, se aplicó también una fuerza de 15,000 N en los costados del chasís. En este caso, las tensiones de Von Mises se concentraron principalmente en las esquinas y áreas más angostas, con mayores valores de tensión observados en las zonas de contacto y apoyo. Estas áreas presentan una concentración de tensiones críticas que podrían indicar una mayor probabilidad de deformación o daño estructural bajo cargas de compresión más elevadas.

![image](https://github.com/user-attachments/assets/8d5ef977-994d-4608-bcc7-0275b0bf35c1)

No obstante, los valores máximos de tensión de compresión se mantuvieron por debajo del límite de resistencia a compresión del material (86 MPa), lo cual sugiere que el chasís es estructuralmente seguro bajo las condiciones evaluadas. Sin embargo, se recomienda monitorear las áreas de mayor concentración de esfuerzos para asegurar que no se excedan los límites durante su uso.

En conjunto, los resultados obtenidos tanto en tracción como en compresión indican que el chasís fabricado en PLA es capaz de soportar las cargas aplicadas sin riesgo inmediato de falla estructural, aunque es importante tener en cuenta los puntos de mayor tensión para futuras optimizaciones del diseño.

# 4.- Discusión:

<p align="justify">  
Los resultados de nuestra simulación de la carcasa de PLA para el medidor de calidad del aire revelan varios puntos interesantes que merecen una reflexión más profunda:

Resistencia Estructural:
La carcasa demuestra una resistencia significativamente mayor a la necesaria para las condiciones de uso previstas. Esto sugiere que el diseño actual es robusto y probablemente durará mucho tiempo sin fallos estructurales. Sin embargo, también indica que podría haber oportunidades para optimizar el uso de material sin comprometer la integridad del dispositivo.

Deformación y Precisión:
Las deformaciones observadas son mínimas, lo cual es crucial para un dispositivo que alberga sensores sensibles. Esta rigidez asegura que los componentes internos permanecerán en su posición correcta, manteniendo la precisión de las mediciones de calidad del aire.

Comportamiento Térmico:
La respuesta de la carcasa a los cambios de temperatura parece ser adecuada para su función. No obstante, sería prudente considerar escenarios de uso en condiciones climáticas más extremas, especialmente si el dispositivo se utilizará en exteriores.

Consideraciones a Largo Plazo:
Aunque el PLA muestra un buen rendimiento en esta simulación estática, debemos tener en cuenta su comportamiento a lo largo del tiempo. Factores como la exposición a la luz UV, la humedad y las cargas cíclicas podrían afectar su durabilidad. Esto sugiere la necesidad de pruebas adicionales o la consideración de tratamientos superficiales protectores.


# 5.- Referencias Bibliográficas:

- [1] SIMSCALE, "SIMSCALE CFD," Scribd, [Online]. Available: https://es.scribd.com/presentation/460657487/SIMSCALE-CFD. [Accessed: 01-Oct-2024].
