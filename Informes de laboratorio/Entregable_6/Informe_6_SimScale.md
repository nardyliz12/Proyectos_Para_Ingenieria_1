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
<p align="justify">
En esta primera etapa de la metodología, se llevará a cabo la simulación de los esfuerzos mecánicos estáticos en el sistema utilizando el software SimScale. El objetivo es analizar el comportamiento estructural del dispositivo, el cual está fijado a un poste y fabricado con material PLA (Ácido Poliláctico). Para ello, se tomarán en cuenta las propiedades mecánicas y térmicas del PLA, tales como su densidad de 1.24 x 10³ kg/m³, un módulo de Young entre 3.3 y 3.6 GPa, y un coeficiente de Poisson que varía entre 0.38 y 0.4. Además, se considerarán sus valores límite de resistencia a la tracción (47 - 70 MPa), resistencia a la compresión (66 - 86 MPa) y su límite elástico (55 - 72 MPa), entre otras propiedades clave.

<p align="justify">
El primer paso será la importación del modelo 3D del dispositivo en SimScale, seguido de la configuración de las condiciones de frontera. Estas condiciones simularán el escenario real en el que el dispositivo está montado sobre un poste y estará sometido a cargas externas. Con esto, también definiremos que tipo de simulación realizaremos que en este caso sería de carácter estructural y de categoría estática.

![image](https://github.com/user-attachments/assets/904d5c84-78b2-4ee1-94f6-10cd02fa06d4)

![image](https://github.com/user-attachments/assets/ef620c81-980b-4434-b6ab-50b55eeb42a1)

![image](https://github.com/user-attachments/assets/7a2a597e-d91a-4f2e-b1df-23d88624c018)

<p align="justify">
Posteriormente, se definirán las propiedades del material PLA, asegurando que todos los parámetros mecánicos, como el módulo de elasticidad y la resistencia a tracción, sean correctamente introducidos en el software para obtener resultados precisos. Además, las características de este material serán consideradas con los valores que se proporcionaron dentro de la tabla de especificaciones en la plataforma educativa instuticional (BlackBoard UPCH)

![image](https://github.com/user-attachments/assets/6f5cb677-0774-489d-9362-2f2cd019e9c8)

<p align="justify">
Las condiciones de carga incluyen el peso propio del dispositivo, las fuerzas de viento que podrían impactar en su estabilidad, y posibles vibraciones externas que generarían esfuerzos adicionales. Durante la simulación, se analizarán diferentes tipos de esfuerzos mecánicos: tracción y compresión en las áreas de contacto con el poste y las sujeciones del dispositivo, flexión debido a cargas distribuidas y fuerzas laterales, torsión causada por momentos alrededor del eje de sujeción, y finalmente, esfuerzos de corte en los puntos de fijación.

<p align="justify">
Este análisis permitirá identificar las áreas críticas del diseño y verificar si el dispositivo puede soportar los esfuerzos dentro de los límites establecidos por las propiedades del material PLA. Con esto, se busca garantizar la seguridad estructural y la resistencia del dispositivo en condiciones reales de operación.

<p align="justify">
También, se recalca que el modelo presentado tiene la función de medir las concentraciones de algunos contaminantes atmosféricos. Para ello, la parte posterior del dispositivo se configuró como una supercie fija debido a que esta va a estar fija y los postes funcionan como un soporte estable para el dispositivo.

![image](https://github.com/user-attachments/assets/706db813-22a9-4732-bcab-e904e6185a7d)

## 2.1.- Tracción
## 2.2.- Compresión
## 2.3.- Flexión

# 3.- Resultados:
<p align="justify">
En esta sección se presentan los resultados obtenidos de las simulaciones realizadas sobre el chasís en estudio, utilizando el material PLA. Las pruebas de simulación están enfocadas en analizar el comportamiento estructural del chasís bajo condiciones de tracción y compresión, con el objetivo de determinar las zonas de mayor esfuerzo y posibles fallas estructurales. Los resultados se expresan en términos de tensiones de Von Mises, que permiten evaluar la distribución de esfuerzos en todo el cuerpo del chasís, así como las posibles deformaciones bajo las condiciones aplicadas.
</p>

## 3.1 Tracción
<p align="justify">
Para la simulación de tracción, se aplicó una fuerza de 15,000 N en los costados del chasís. Los resultados obtenidos mostraron que las tensiones de Von Mises se distribuyeron principalmente en las zonas cercanas a los bordes y áreas más delgadas del chasís. Estas zonas presentaron valores más elevados de tensión, indicando que podrían ser los puntos críticos donde ocurra una falla si las tensiones superan los límites de resistencia del material. Sin embargo, en las áreas centrales del chasís, los niveles de esfuerzo fueron considerablemente más bajos, lo que sugiere que la estructura central es capaz de soportar mejor las tensiones aplicadas.
</p>

![image](https://github.com/user-attachments/assets/a4ef1a2b-037e-47c0-8f27-b662f00543b7)
<p align="justify">
La máxima tensión observada en el análisis de tracción estuvo por debajo del límite de resistencia a tracción del PLA (70 MPa), lo cual indica que, bajo estas condiciones, el chasís no presenta riesgos significativos de falla por tracción.
</p>

## 3.2 Compresión
<p align="justify">
Para la prueba de compresión, se aplicó también una fuerza de 15,000 N en los costados del chasís. En este caso, las tensiones de Von Mises se concentraron principalmente en las esquinas y áreas más angostas, con mayores valores de tensión observados en las zonas de contacto y apoyo. Estas áreas presentan una concentración de tensiones críticas que podrían indicar una mayor probabilidad de deformación o daño estructural bajo cargas de compresión más elevadas.
</p>

![image](https://github.com/user-attachments/assets/8d5ef977-994d-4608-bcc7-0275b0bf35c1)
<p align="justify">
No obstante, los valores máximos de tensión de compresión se mantuvieron por debajo del límite de resistencia a compresión del material (86 MPa), lo cual sugiere que el chasís es estructuralmente seguro bajo las condiciones evaluadas. Sin embargo, se recomienda monitorear las áreas de mayor concentración de esfuerzos para asegurar que no se excedan los límites durante su uso.
</p>  
<p align="justify">
En conjunto, los resultados obtenidos tanto en tracción como en compresión indican que el chasís fabricado en PLA es capaz de soportar las cargas aplicadas sin riesgo inmediato de falla estructural, aunque es importante tener en cuenta los puntos de mayor tensión para futuras optimizaciones del diseño.
</p>

## 4.- Discusión:

<p align="justify">  

Los resultados de las simulaciones de tracción y compresión realizadas sobre la carcasa de PLA del medidor de calidad del aire revelan aspectos importantes que merecen un análisis detallado:

Resistencia Estructural:
  
Las simulaciones muestran que la carcasa puede soportar cargas de 15,000 N tanto en tracción como en compresión sin exceder los límites de resistencia del material PLA. En el caso de tracción, la tensión máxima observada estuvo por debajo de 70 MPa, que es el límite superior de resistencia a tracción del PLA. Para la compresión, los valores máximos de tensión se mantuvieron por debajo de 86 MPa, que corresponde al límite de resistencia a compresión del material. Estos resultados indican que el diseño actual es robusto y capaz de soportar las cargas aplicadas sin riesgo inmediato de falla estructural [2].
  
Distribución de Esfuerzos:

En ambas simulaciones, se observó que las tensiones de Von Mises se concentran principalmente en las esquinas, bordes y áreas más delgadas del chasís. Esta distribución de esfuerzos es consistente con la teoría de mecánica de materiales, donde las discontinuidades geométricas actúan como concentradores de esfuerzos [3]. En el caso de tracción, las zonas cercanas a los bordes y áreas más delgadas presentaron valores más elevados de tensión. Para la compresión, las tensiones se concentraron en las esquinas y áreas más angostas, especialmente en las zonas de contacto y apoyo.

Zonas Críticas:

Las áreas de mayor concentración de esfuerzos identificadas en ambas simulaciones representan los puntos críticos donde podría ocurrir una falla si las tensiones superaran los límites de resistencia del material. Sin embargo, dado que los valores máximos observados se mantienen por debajo de los límites del PLA, se puede concluir que la estructura es segura bajo las condiciones evaluadas.

Optimización del Diseño:

Los resultados sugieren que hay margen para optimizar el diseño. Las áreas centrales del chasís mostraron niveles de esfuerzo considerablemente más bajos, especialmente en la simulación de tracción. Esto indica que podría ser posible reducir el material en estas zonas sin comprometer significativamente la integridad estructural del dispositivo [4].

Consideraciones para Futuras Iteraciones:

Aunque los resultados actuales son favorables, sería prudente considerar análisis adicionales que tengan en cuenta factores como la fatiga del material, especialmente en las zonas identificadas como críticas. Además, dado que el dispositivo es un medidor de calidad del aire, podría ser beneficioso realizar simulaciones que consideren las condiciones ambientales a las que estará expuesto, como variaciones de temperatura y humedad [5].
</p>


# 5.- Referencias Bibliográficas:

- [1] SIMSCALE, "SIMSCALE CFD," Scribd, [Online]. Available: https://es.scribd.com/presentation/460657487/SIMSCALE-CFD. [Accessed: 01-Oct-2024].
  
- [2] A. Rodríguez-Panes, J. Claver, and A. M. Camacho, "The Influence of Manufacturing Parameters on the Mechanical Behaviour of PLA and ABS Pieces Manufactured by FDM: A Comparative Analysis," Materials, vol. 11, no. 8, p. 1333, 2018. [Online]. Available: https://www.mdpi.com/1996-1944/11/8/1333
- 
- [3] M. R. Layadi, M. A. Benakcha, L. Mouhali, N. Chikh, A. Zegadi, and N. E. Chabane Sari, "Finite element analysis of the effect of temperature-dependent material properties on thermo-mechanical behaviors of 3D-printed PLA parts," Journal of Thermal Analysis and Calorimetry, vol. 149, pp. 1589–1599, 2022. [Online]. Available: https://link.springer.com/article/10.1007/s10973-021-11188-1
  
- [4] J. R. C. Dizon, A. H. Espera, Q. Chen, and R. C. Advincula, "Mechanical characterization of 3D-printed polymers," Additive Manufacturing, vol. 20, pp. 44-67, 2018. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S2214860417304718
  
- [5] D. Popescu, A. Zapciu, C. Amza, F. Baciu, and R. Marinescu, "FDM process parameters influence over the mechanical properties of polymer specimens: A review," Polymer Testing, vol. 69, pp. 157-166, 2018. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0142941818304495

