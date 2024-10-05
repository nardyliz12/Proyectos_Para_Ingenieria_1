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
</p>
<p align="justify">
Se hace énfasis en los esfuerzos de tracción y compresión; ya que, ambos ocurrirían en el momento en el que el dispositivo se encuentre de manera estática operando. Estos dos esfuerzos resultan también ser de especial interés para el momento de aplicación de nuestro modelo ya que no necesitarían de fuerzas externas para suceder al este estar en estado de reposo.
</p>
<p align="justify">
El primer paso será la importación del modelo 3D del dispositivo en SimScale, seguido de la configuración de las condiciones de frontera. Estas condiciones simularán el escenario real en el que el dispositivo está montado sobre un poste y estará sometido a cargas externas. Con esto, también definiremos que tipo de simulación realizaremos que en este caso sería de carácter estructural y de categoría estática.
</p>

<div align="center">

| Creaciónde la cuenta | Importación del modelo  3D|
|----------------|----------|
|<img src="https://github.com/user-attachments/assets/904d5c84-78b2-4ee1-94f6-10cd02fa06d4" alt="ESP32 DEVKIT V1" width="500"/> | <img src="https://github.com/user-attachments/assets/ef620c81-980b-4434-b6ab-50b55eeb42a1" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<div align="center">

|Inicio de simulación  |
|-----|
|<img src="https://github.com/user-attachments/assets/7a2a597e-d91a-4f2e-b1df-23d88624c018" alt="ESP32 DEVKIT V1" width="500"/>|

</div>

<p align="justify">
Posteriormente, se definirán las propiedades del material PLA, asegurando que todos los parámetros mecánicos, como el módulo de elasticidad y la resistencia a tracción, sean correctamente introducidos en el software para obtener resultados precisos. Además, las características de este material serán consideradas con los valores que se proporcionaron dentro de la tabla de especificaciones en la plataforma educativa instuticional (BlackBoard UPCH)
</p>

<div align="center">

| Propiedades |
|-----|
|<img src="https://github.com/user-attachments/assets/6f5cb677-0774-489d-9362-2f2cd019e9c8" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
Las condiciones de carga incluyen el peso propio del dispositivo, las fuerzas de viento que podrían impactar en su estabilidad, y posibles vibraciones externas que generarían esfuerzos adicionales. Durante la simulación, se analizarán diferentes tipos de esfuerzos mecánicos: tracción y compresión en las áreas de contacto con el poste y las sujeciones del dispositivo, flexión debido a cargas distribuidas y fuerzas laterales, torsión causada por momentos alrededor del eje de sujeción, y finalmente, esfuerzos de corte en los puntos de fijación.
</p>
<p align="justify">
Este análisis permitirá identificar las áreas críticas del diseño y verificar si el dispositivo puede soportar los esfuerzos dentro de los límites establecidos por las propiedades del material PLA. Con esto, se busca garantizar la seguridad estructural y la resistencia del dispositivo en condiciones reales de operación.
</p>
<p align="justify">
También, se recalca que el modelo presentado tiene la función de medir las concentraciones de algunos contaminantes atmosféricos. Para ello, la parte posterior del dispositivo se configuró como una supercie fija debido a que esta va a estar fija y los postes funcionan como un soporte estable para el dispositivo.
</p>

<div align="center">

|Soporte fijo  |
|-----|
|<img src="https://github.com/user-attachments/assets/706db813-22a9-4732-bcab-e904e6185a7d" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

## 2.1.- Tracción

<p align="justify">
La simulación de tracción en este trabajo se centra en analizar las fuerzas generadas por el peso del dispositivo, que es de aproximadamente 300 gramos. Para llevar a cabo esta simulación, se utiliza SimScale en un análisis estructural estático. El primer paso es importar el modelo CAD del dispositivo y verificar que esté correctamente representado. Posteriormente, se selecciona PLA (Ácido Poliláctico) como el material de simulación, con las propiedades mecánicas adecuadas, como el módulo de Young (3.3 - 3.6 GPa), el coeficiente de Poisson (0.38 - 0.4) y su límite elástico (55 - 72 MPa).
Ecuación de la fuerza de tracción:
</p>
<p align="justify">
La fuerza de tracción que se aplicará en la simulación es el peso del dispositivo. Esta fuerza se puede calcular utilizando la fórmula:
</p>

<div align="center">
  
| Formula:    |
|------|
|F=m⋅gF = m\cdot gF = m⋅g|

</div>

Donde:

•	F es la fuerza de tracción (en Newtons),
•	m es la masa del dispositivo (0.3 kg),
•	g es la aceleración de la gravedad (9.81 m/s²).

<div align="center">
  
|Por lo tanto:|
|----------|
|F = 0.3 kg ⋅ 9.81 m/s² = 2.943 N|

</div>

<p align="justify">
Esta fuerza de 2.943 N se aplica en los puntos de fijación superiores, en la dirección opuesta al soporte. Se asignan condiciones de frontera en las áreas de sujeción al poste, fijando esas zonas, mientras que las fuerzas de tracción actúan sobre las zonas sujetas al peso del dispositivo. La simulación se ejecuta utilizando una malla fina para capturar con precisión las concentraciones de tensiones.
</p>

<div align="center">

|Fuerza 1  |
|-----|
|<img src="https://github.com/user-attachments/assets/9d4f85b0-822b-40bd-80e6-975c6ab0fdba" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
El análisis de los resultados se enfoca en verificar que las tensiones generadas por la tracción no excedan los límites elásticos del material, asegurando que la estructura pueda soportar el peso sin fallos estructurales.
</p>
<p align="justify">
Finalmente, también se realizó la misma prueba pero exagerando la fuerza ejercida por el peso del dispositivo, con el fin de mostrar de que manera este reaccionaría frente al aumente de una fuerza de la misma dirección sobre todo el sistema.
</p>

<div align="center">

|Fuerza 2 |
|-----|
|<img src="https://github.com/user-attachments/assets/ede20c2a-9477-4d52-a169-1ba699f04201" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

## 2.2.- Compresión

<p align="justify">
Para la simulación de compresión, se estudian las fuerzas del viento que actúan de manera horizontal sobre los laterales del dispositivo. Estas fuerzas se simulan aplicando una presión sobre las superficies laterales, lo que genera tensiones de compresión. Nuevamente, se utiliza SimScale para realizar un análisis estructural estático con el material PLA, configurando sus propiedades mecánicas de acuerdo a las especificaciones mencionadas.
</p>

<p align="justify">
Ecuación de la fuerza de compresión por el viento:
La fuerza de compresión debido al viento se puede calcular utilizando la fórmula de la presión dinámica:
</p>

<div align="center">
  
|Formula:   |
|------|
|F = 1/2 ⋅ ρ ⋅ v² ⋅ A ⋅ Cd|

</div>

Donde:

•	F es la fuerza del viento (en Newtons),
•	ρ es la densidad del aire (1.225 kg/m),
•	v es la velocidad del viento (en m/s),
•	A es el área lateral del dispositivo sobre la que actúa el viento (en m²),
•	C_d es el coeficiente de arrastre (aproximadamente 1.2 para una superficie plana).

Por ejemplo, para una velocidad de viento de 4 m/s y un áreas laterales aproximadamente de 0.05 m² por lado:

<div align="center">
  
| Calculo:   |
|-------|
|F = 1/2 ⋅ 1.225 ⋅ (4)² ⋅ 0.05 ⋅ 1.2 = 0.588 N|

</div>

<p align="justify">
Esta fuerza de 0.588 N se aplica en las superficies laterales del dispositivo en la dirección del viento. Se fijan las áreas de contacto con el poste para simular correctamente las condiciones de frontera, permitiendo que las fuerzas de compresión actúen sobre las partes laterales. Una malla refinada en estas áreas críticas asegura la precisión en la distribución de tensiones.
El análisis de resultados se enfoca en las zonas con mayores concentraciones de esfuerzos de compresión, verificando que las tensiones no excedan la resistencia a compresión del PLA (66 - 86 MPa).
</p>

<div align="center">

| Viento 1 |   Viento 2   |
|-----|---------|
|<img src="https://github.com/user-attachments/assets/e3073ff0-6a4d-44ef-97f6-49e2062f44c4" alt="ESP32 DEVKIT V1" width="800"/>|<img src="https://github.com/user-attachments/assets/719bafab-cc98-4e99-8b15-f2b7c2ed4d55" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
Finalmente, de igual forma de intensifica a manera exagerada las fuerzas ejercidas en los laterales para ver como es que el material y el diseño reaccionarían ante condiciones como esta.
</p>

<div align="center">

|Viento 2  | Viento 1   |
|-----|-------|
|<img src="https://github.com/user-attachments/assets/3c621f55-1914-4371-80d6-24788461ffb2" alt="ESP32 DEVKIT V1" width="800"/>|<img src="https://github.com/user-attachments/assets/fc2c241b-1380-470b-9b26-102f660851d7" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

# 3.- Resultados:

## 3.1.- Tracción

<p align="justify">
La simulación de tracción realizada en SimScale mostró los desplazamientos y las tensiones distribuidas a lo largo del dispositivo, sometido a una fuerza equivalente a su peso (aproximadamente 2.943 N). Utilizando el material PLA, las tensiones fueron evaluadas a través del criterio de Von Mises, que se observa en la escala de colores en la simulación.
</p>
<p align="justify">
En la parte superior del dispositivo, especialmente en los bordes de contacto con el poste y en las zonas de fijación, las tensiones de tracción fueron mínimas, indicadas por los tonos azules en el espectro de Von Mises. Esto es consistente con la rigidez del material y la buena distribución de las fuerzas en estas zonas.
</p>

<div align="center">

|Campos de solución  |
|-----|
|<img src="https://github.com/user-attachments/assets/5929fdb0-6647-48f6-8309-f52a2224f889" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
En la base del dispositivo, donde se observan algunas concentraciones de tensiones, representadas por tonos más cercanos al verde, se detectan ligeros incrementos en las tensiones. Sin embargo, estos valores se mantienen dentro de los límites aceptables del material, ya que no se superan los valores de límite elástico del PLA (55 - 72 MPa). La mayor concentración de esfuerzo se ubica en la parte inferior de la estructura, lo que sugiere que, aunque el dispositivo experimenta tensiones, estas no son suficientes para causar deformaciones permanentes o fallas estructurales.
</p>
<p align="justify">
Finalmente, los resultados indican que la estructura es capaz de soportar el peso del dispositivo sin superar los límites de seguridad del material, lo que garantiza que el diseño puede resistir las condiciones de tracción en su aplicación real.
</p>

<div align="center">

|Desplazamiento  |
|-----|
|<img src="https://github.com/user-attachments/assets/794936d9-7793-4da2-b5bb-531752fcc759" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
Al aplicar una fuerza de 100,000 N en la misma dirección del peso del dispositivo, la simulación muestra una distribución más notable de tensiones a lo largo de la estructura. En este caso, las tensiones más elevadas se concentran en la parte inferior del dispositivo, como se observa en la escala de colores del criterio de Von Mises, donde los tonos más cercanos al verde y amarillo indican mayores esfuerzos. A pesar de esta concentración, el modelo estructuralmente se mantiene estable en términos de desplazamientos, aunque se evidencian zonas que podrían estar próximas a su límite de resistencia, sobre todo en áreas de contacto con el poste o fijaciones.
</p>
<p align="justify">
La magnitud de la fuerza aplicada excede con creces el peso real del dispositivo, lo cual permite analizar el comportamiento del material bajo condiciones extremas de tracción. Si bien el PLA puede soportar hasta cierto punto estos esfuerzos, es posible que las tensiones máximas en ciertas regiones se aproximen o incluso excedan el límite elástico del material, provocando deformaciones plásticas si la carga fuera mantenida por tiempo prolongado. Esto destaca la importancia de realizar estudios más detallados para garantizar la seguridad y estabilidad del dispositivo bajo cargas extremas, ya que en una situación real, el material podría fallar si las tensiones superan los valores críticos.
</p>

<div align="center">

|Resultados del desplazamiento |
|-----|
|<img src="https://github.com/user-attachments/assets/622cff3c-b5c2-4942-b86a-48da01b5739a" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

## 3.2.- Compresión

<p align="justify">
En la simulación de compresión causada por las fuerzas del viento, como se observa en la imagen, el modelo muestra una distribución considerable de esfuerzos en la estructura. La tensión de Von Mises evidencia que las zonas de mayor concentración de esfuerzos están ubicadas en la región central del modelo, destacándose en las áreas cercanas al agujero circular. Estas áreas presentan mayores tensiones, lo cual se refleja en los colores verdes y amarillos, mientras que las demás áreas permanecen en un rango de tensiones más bajas, indicadas por los colores azules.
</p>

<div align="center">

|Campos de solución   |
|-----|
|<img src="https://github.com/user-attachments/assets/dd29adb0-31e4-4085-9b25-59c27077addd" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
Este análisis sugiere que la estructura experimenta una mayor compresión en los laterales sometidos a la presión del viento. Las tensiones alcanzan valores significativos pero no parecen exceder el límite elástico del PLA, indicando que el material podría resistir estas fuerzas sin sufrir deformaciones permanentes. No obstante, es crucial prestar atención a las áreas donde los esfuerzos son más altos, ya que estas zonas podrían representar puntos críticos en situaciones de carga prolongada o con vientos más intensos.
</p>

<div align="center">

|Desplazamiento |
|-----|
|<img src="https://github.com/user-attachments/assets/112c43c8-a6bb-446c-89ca-09213ed54125" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

<p align="justify">
Cuando se aplicaron fuerzas de 100,000 N sobre los laterales del modelo, los resultados mostraron una deformación considerable en la estructura, particularmente en las áreas cercanas a las curvas y cavidades, como se ve en la imagen. Las tensiones de Von Mises revelan una concentración elevada de esfuerzos en las zonas de deformación máxima, representadas por los colores verde y amarillo. La estructura muestra una notable curvatura hacia el exterior, lo que indica que las fuerzas son mucho mayores de lo que la pieza puede resistir sin sufrir daños importantes.
</p>
<p align="justify">
Este tipo de deformación sugiere que, bajo estas condiciones de carga extrema, el material PLA está muy cerca de su límite elástico, o incluso podría estar superándolo en algunas zonas. Aunque algunas áreas de la estructura aún muestran tensiones bajas, en general, la pieza no podría mantener su integridad estructural a largo plazo bajo estas cargas. Las áreas más críticas, como las que rodean el orificio circular y las esquinas, son las que podrían sufrir daños irreparables debido a la concentración de esfuerzos.
</p>

<div align="center">

|Resultados del desplazamiento |
|-----|
|<img src="https://github.com/user-attachments/assets/47d61d08-ec03-4a86-8b94-93acb0524307" alt="ESP32 DEVKIT V1" width="800"/>|

</div>

# 4.- Discusión:

Los resultados de las simulaciones de tracción y compresión realizadas sobre la carcasa de PLA del medidor de calidad del aire revelan aspectos importantes que merecen un análisis detallado:

### Resistencia Estructural:
<p align="justify">  
Las simulaciones muestran que la carcasa puede soportar cargas de 15,000 N tanto en tracción como en compresión sin exceder los límites de resistencia del material PLA. En el caso de tracción, la tensión máxima observada estuvo por debajo de 70 MPa, que es el límite superior de resistencia a tracción del PLA. Para la compresión, los valores máximos de tensión se mantuvieron por debajo de 86 MPa, que corresponde al límite de resistencia a compresión del material. Estos resultados indican que el diseño actual es robusto y capaz de soportar las cargas aplicadas sin riesgo inmediato de falla estructural [2].
</p>

### Distribución de Esfuerzos:
<p align="justify">
En ambas simulaciones, se observó que las tensiones de Von Mises se concentran principalmente en las esquinas, bordes y áreas más delgadas del chasís. Esta distribución de esfuerzos es consistente con la teoría de mecánica de materiales, donde las discontinuidades geométricas actúan como concentradores de esfuerzos [3]. En el caso de tracción, las zonas cercanas a los bordes y áreas más delgadas presentaron valores más elevados de tensión. Para la compresión, las tensiones se concentraron en las esquinas y áreas más angostas, especialmente en las zonas de contacto y apoyo.
</p>

### Zonas Críticas:
<p align="justify">
Las áreas de mayor concentración de esfuerzos identificadas en ambas simulaciones representan los puntos críticos donde podría ocurrir una falla si las tensiones superaran los límites de resistencia del material. Sin embargo, dado que los valores máximos observados se mantienen por debajo de los límites del PLA, se puede concluir que la estructura es segura bajo las condiciones evaluadas.
</p>

 ### Optimización del Diseño:
<p align="justify">
Los resultados sugieren que hay margen para optimizar el diseño. Las áreas centrales del chasís mostraron niveles de esfuerzo considerablemente más bajos, especialmente en la simulación de tracción. Esto indica que podría ser posible reducir el material en estas zonas sin comprometer significativamente la integridad estructural del dispositivo [4].
</p>

### Consideraciones para Futuras Iteraciones:
<p align="justify">
Aunque los resultados actuales son favorables, sería prudente considerar análisis adicionales que tengan en cuenta factores como la fatiga del material, especialmente en las zonas identificadas como críticas. Además, dado que el dispositivo es un medidor de calidad del aire, podría ser beneficioso realizar simulaciones que consideren las condiciones ambientales a las que estará expuesto, como variaciones de temperatura y humedad [5].
</p>


# 5.- Referencias Bibliográficas:

- [1] SIMSCALE, "SIMSCALE CFD," Scribd, [Online]. Available: https://es.scribd.com/presentation/460657487/SIMSCALE-CFD. [Accessed: 01-Oct-2024].
  
- [2] A. Rodríguez-Panes, J. Claver, and A. M. Camacho, "The Influence of Manufacturing Parameters on the Mechanical Behaviour of PLA and ABS Pieces Manufactured by FDM: A Comparative Analysis," Materials, vol. 11, no. 8, p. 1333, 2018. [Online]. Available: https://www.mdpi.com/1996-1944/11/8/1333

- [3] M. R. Layadi, M. A. Benakcha, L. Mouhali, N. Chikh, A. Zegadi, and N. E. Chabane Sari, "Finite element analysis of the effect of temperature-dependent material properties on thermo-mechanical behaviors of 3D-printed PLA parts," Journal of Thermal Analysis and Calorimetry, vol. 149, pp. 1589–1599, 2022. [Online]. Available: https://link.springer.com/article/10.1007/s10973-021-11188-1
  
- [4] J. R. C. Dizon, A. H. Espera, Q. Chen, and R. C. Advincula, "Mechanical characterization of 3D-printed polymers," Additive Manufacturing, vol. 20, pp. 44-67, 2018. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S2214860417304718
  
- [5] D. Popescu, A. Zapciu, C. Amza, F. Baciu, and R. Marinescu, "FDM process parameters influence over the mechanical properties of polymer specimens: A review," Polymer Testing, vol. 69, pp. 157-166, 2018. [Online]. Available: https://www.sciencedirect.com/science/article/pii/S0142941818304495

