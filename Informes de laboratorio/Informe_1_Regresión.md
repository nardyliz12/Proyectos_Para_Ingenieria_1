<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# INFORME DE LABORATORIO N° 1

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

# Introducción: 

<p align="justify">
La agencia de protección ambiental (United States Environmental Protection Agency o simplemente EPA por sus siglas en ingles), es el encargado de proteger la salud de todos los seres humanos, asimismo, del medio ambiente y todos los recursos naturales como labor principal [6]. El objetivo de esta agencia es poder crear y hacer cumplir las leyes ambientales establecidas para este medio, además, de que inspecciona cada recurso natural para brindar apoyo técnico y así poder minimizar las amenazas que pueden presentarse, asímismo, pueda respaldar la planificación de recuperación de cada uno de estos puntos [6].
</p>
<p align="justify">
Al ser una entidad que trata de controlar la contaminación del aire y el agua, siendo puntos importantes para la vida humana, esta agencia llegó a otorgar miles de millones de dólares en subvenciones de fondo para poder reducir los gases de efecto invernadero y así acelerar las soluciones de energía limpia para que logre combatir las crisis climáticas que existen actualmente y favorecer al planeta y a familias enteras, lo cual ha ido mejorando con el tiempo tras existir fondos que benefician a nuestro entorno y mejoran las condiciones climáticas con las que contamos actualmente [5].
</p>
<p align="justify">
En este contexto, el ozono emerge como un contaminante atmosférico de gran preocupación debido a sus efectos perjudiciales tanto en el medio ambiente como en la salud humana [1]. Este informe se centra en el análisis de los niveles de ozono en el estado de Florida durante los años 2022 y 2023, utilizando datos recopilados por la red de monitoreo de la EPA. Nuestro objetivo principal es encontrar patrones y tendencias en los niveles de ozono durante este período utilizando técnicas de regresión lineal para representar la relación entre el tiempo y las concentraciones de ozono.
</p>

# Metodología:

<p align="justify">
Los datos fueron utilizados para realizar la identificación en la concentración de Ozono de manera diaria, los cuales fueron obtenidos de la base de datos de la EPA para un periodo de dos años (2022-2023). El análisis se realizó mediante una regresión lineal, tomando en cuenta los datos del tiempo (en días) como variable independiente y la concentración de Ozono como variable dependiente.
</p>
<p align="justify">
La regresión lineal es uno de los métodos que se utiliza para lograr predecir el valor de una determinada variable en función del valor de otra variable, donde el valor que se desea predecir corresponde a la variable dependiente mientras que la otra variable pasa ser la variable independiente tal como se mencionó con anterioridad [8], el objetivo detrás de la regresión lineal es estimar los coeficientes de dicha ecuación, donde involucra una o más variables independientes, dado que asi logra predecir mejor el valor de la variable dependiente, hay que tener en cuenta que la regresión lineal se ajusta a una línea recta que muchas veces minimiza las discrepancias entre los valores de salida y los valores reales.
</p>  
<p align="justify">
Por ende, para realizar la regresión lineal en base a los datos encontrados en las datas del EPA logramos realizar un proceso el cual nos ayuda a identificar los patrones de concentración del ozono, lo que ayuda a identificar las variables que necesitamos para predecir de manera efectiva y que tenga la menor cantidad errores posibles, lo que involucra seguir la siguiente secuencia de pasos:
</p>  

## 1. Visualización de los datos

<p align="justify">
Para realizar la visualización de los datos es importante poder analizar las columnas que se presentan en el Dataset, además, de analizarlos a profundidad, para luego poder mostrar los datos establecidos de cada periodo, en este caso mostramos los valores nulos de cada uno de las Datasets tanto del 2022 como 2023 viendo la cantidad de nulos que presentaba en sus columnas.
</p>

<table>
<tr>
<td valign="top">

####  2022:
##### Columnas con valores nulos

| Columna    | Cantidad de nulos |
|------------|-------------------|
| CBSA Code  | 711               |
| CBSA Name  | 711               |

</td>
<td valign="top">

#### 2023:
##### Columnas con valores nulos

| Columna     | Cantidad de nulos |
|-------------|-------------------|
| Method Code | 123               |
| CBSA Code   | 713               |
| CBSA Name   | 713               |

</td>
</tr>
</table>

<p align="justify">
Adicional a ello es necesario buscar todas las columnas que cuentan con un valor único, es decir, todas aquellas que por más que existan 1000 filas tienen el mismo dato, lo cual nos favorece para poder ver cuáles son aquellos datos que no son tan relevantes para hacer la regresión. Por lo que, debemos eliminar todas las columnas que tienen un único valor constante, como (Units, AQS Parameter Code, AQS Parameter Description, State FIPS Code, y State), ya que no aportan información relevante. Sin embargo, no se eliminó las columna de (Source y POC) porque, aunque tienen un solo valor en la tabla, en la otra tienen múltiples valores, lo que podría ser de utilidad para la predicción.
</p>

<table>
<tr>
<td valign="top">

#### 2022:
##### Columnas con un solo valor único

| Columna    | Valor Único |
|------------|-------------------|
|  Source    | AQS               |
|  Units     | ppm               |
| AQS Parameter Code |   44201   |
| AQS Parameter Description|Ozone|
| State FIPS Code | 12           |
| State      | Florida           |

</td>
<td valign="top">

#### 2023:
##### Columnas con un solo valor único

| Columna     | Valor Único |
|-------------|-------------------|
| POC         | 1                 |
|  Units      | ppm               |
| AQS Parameter Code   | 44201               |
| AQS Parameter Description |   Ozone |
|  State FIPS Code | 12     |
|   State     |  Florida  |

</td>
</tr>
</table>

<p align="justify">
Realizar la división y la identificación de las columnas tanto categóricas como numéricas nos ayuda a poder verificar cuales son las variables que debemos tomar en cuenta para poder convertir en uno o en el otro de ser necesario, es decir, si necesito columnas del tipo categórico pero mi datasets es numérico o al contrario se puede hacer la conversión para que no exista algún tipo de error.
</p>

<table>
<tr>
<td valign="top">

#### 2022:
##### Columnas categóricas

| Columna    | Valores Únicos |
|------------|-------------------|
|       POC        |             [1, 2]              |
| Daily Obs Count  |      [17, 15, 14, 16, 13]       |
| Percent Complete | [100.0, 88.0, 82.0, 94.0, 76.0] |
|   Method Code    |       [47, 190, 215, 87]        |

</td>
<td valign="top">

#### 2023:
##### Columnas categóricas

| Columna     | Valores Únicos |
|-------------|-------------------|
|      Source      |                    ['AQS', 'AirNow']                    |
| Percent Complete | [100.0, 76.0, 88.0, 94.0, 82.0, 75.0, 79.0, 83.0, 96.0] |
|   Method Code    |                [47.0, nan, 87.0, 215.0]                 |

</td>
</tr>
</table>

<table>
<tr>
<td valign="top">

#### 2022:

| Columnas numéricas    |
|------------|
|                 Date                 |
|               Site ID                |
| Daily Max 8-hour Ozone Concentration |
|           Daily AQI Value            |
|           Local Site Name            |
|              CBSA Code               |
|              CBSA Name               |
|           County FIPS Code           |
|                County                |
|            Site Latitude             |
|            Site Longitude            |

</td>
<td valign="top">

#### 2023:

| Columnas numéricas     |
|-------------|
|                 Date                 |
|               Site ID                |
| Daily Max 8-hour Ozone Concentration |
|           Daily AQI Value            |
|           Local Site Name            |
|              CBSA Code               |
|              CBSA Name               |
|           County FIPS Code           |
|                County                |
|            Site Latitude             |
|            Site Longitude            |

</td>
</tr>
</table>

### Visualización de la Distribución de Datos
<p align="justify">
Lograr comprender mejor los datos que nos proporciona cada Dataset, además, de ver la mejor distribución del aire en los dos años presentados (2022-2023) podemos realizar la implementación de histogramas lo que nos permitiría visualizar del como se lograrían distribuir los valores a las variables clave de lo que se quiere identificar, donde nos ayuda a proporcionar una idea más clara sobre la concentración y la frecuencia de los diferentes rangos de valores que este contiene al tener datos, tales como la concentración y la calidad del aire y realizar la comparación de distribución entre ambos en diferentes periodos, por ende, la elección de histogramas se basa en la capacidad de poder mostrar de manera más efectiva la distribución que se presenta en determinadas variables continuas, además, de poder comparar dichas frecuencias entre distintos conjuntos de datos, lo que nos permite identificar patrones y posibles anomalías que se presentan en los diferentes tipos de años.
</p>

<table>
<tr>
<td valign="top">

#### Histogram of Daily Max 8-hour Ozone Concentration and Daily AQI Value

 ![image](https://github.com/user-attachments/assets/843c8f41-de41-4b07-aa5f-a09eb4f9e251)

</td>
</tr>
</table>

<p align="justify">
Asimismo, para analizar la distribución de todos los datos del ozono y el calidad del aire (AQI), también se puede tomar en cuenta los gráficos de densidad, dado que estos son útiles para poder visualizar la forma de la distribución de un conjunto de datos y así poder compararlo en cada tipo de conjunto, ya que estas visualizaciones nos proporcionan una comprensión visual más clara de las diferencias en la distribución que se presenta en los datos evaluados, lo que es de gran utilidad para el análisis de los datos presentados.
</p>

<table>
<tr>
<td valign="top">

#### Density of Daily Max 8-hour Ozone Concentration and Daily AQI Value

![image](https://github.com/user-attachments/assets/3793066e-66e3-49ea-8082-70039d837e9f)

</td>
</tr>
</table>

## 2. Preparación de Datos para el Análisis Predictivo 

#### Analisis del target
<p align="justify">
Como uno de los siguientes pasos es poder realizar la selección del Target, es decir, la variable objetivo, en nuestro caso realizamos la selección de la variable de "Daily AQI value", dado que es la variable que se dará a predecir utilizando el resto de las variables disponibles en el conjunto de datos, por lo cual cabemos en la necesidad de poder convertir las columnas de la fecha de ambos periodos (2022-2023) en el tipo de datos "Datetime", ya que esto nos permite un manejo más eficiente con las fechas, además, de que facilita la realización del análisis basado en el tiempo, tales como la agrupación de datos por mes o año, siguiendo la creación de características temporales de ser necesario.
</p>
<p align="justify">
Asímismo, para poder analizar nuestra variable objetivo en el año 2022 y 2023 se optó por crear un histograma con "seaborn" que incluye una estimación de la densidad de Kernel (KDE) para visualizar la distribución de dichos valores, donde se calculó y mostró la media de nuestra variable, logrando proporcionar una medida central de la calidad del aire durante ambos periodos.
</p>  

<table>
<tr>
<td valign="top">

#### Media del target 2022: 

34.30938563137883

![image](https://github.com/user-attachments/assets/28ff990f-7991-44d7-8e09-5325914b1729)


</td>
<td valign="top">

#### Media del target 2023: 

36.21700279552716

![image](https://github.com/user-attachments/assets/1e1aa3f2-cb7e-49a7-8689-0b259c8bc969)


</td>
</tr>
</table>

### Resumen general de los datos

<table>
<tr>
<td valign="top">

#### Resumen 2022: 

![image](https://github.com/user-attachments/assets/4623a3db-5660-464d-b6dd-5cf79c09d031)

</td>
</tr>
</table>

<table>
<tr>
<td valign="top">

#### Resumen 2023: 

![image](https://github.com/user-attachments/assets/41ca3b65-2aa5-4798-b875-8bbb87d470d0)

</td>
</tr>
</table>
<p align="justify">
Adicionalmente, considerar crear un gráfico de caja y bigotes para poder comparar la distribución de nuestra variable objetivo es importante, porque nos permite observar de cómo están distribuidos los datos a lo largo de un rango, además, de que nos muestra la mediana, los cuartiles y los rangos intercuartílicos, asímismo, nos permiten detectar los "outliers", es decir, los puntos que están fuera de los bigotes del gráfico, que son considerados como valores atípicos, donde nos permite identificar datos que se desvían significativamente y que se puede visualizar.
</p>  

<table>
<tr>
<td valign="top">

#### Gráfico de Bigotes (2022-2023)

![image](https://github.com/user-attachments/assets/4c577cf4-d0cf-4e61-a029-37fe3e6ff057)

</td>
</tr>
</table>

<table>
<tr>
<td valign="top">

#### Daily AQI Value 2022-2023: 

![image](https://github.com/user-attachments/assets/e458ffe3-5c3f-475b-aac6-f2c992d2463c)

</td>
</tr>
</table>

<p align="justify">
Una vez de haber concatenado ambas datas en una sola y haber identificado las columnas correspondientes a cada una de ellas, se creó una matriz de correlación para el Dataframe de "ozono_dataset" después de haber eliminado las columnas categóricas especificadas anteriormente, esta matriz resultante nos muestra la relación entre las variables numéricas con valores que indican la fuerza y dirección de las correlaciones entre ellas que van de -1 a 1.
</p>

<table>
<tr>
<td valign="top">

#### Tabla de la matriz de correlación 

![image](https://github.com/user-attachments/assets/03477579-52cc-4610-9976-f00b17d883d7)

</td>
</tr>
</table>

## 3. Aplicación del Modelo de regresión 

#### División de entrenamiento-prueba:

<p align="justify">
Para enriquecer el análisis temporal y permitir una mejor modelización de nuestros datos, se extrajeron componentes temporales de la columna de fecha del DataFrame "ozono_dataset", donde se añadieron nuevas columnas para el año, mes y día de la semana utilizando las funciones ".dt.year", ".dt.month", y ".dt.dayofweek", adicional a ello, se le aplicó la técnica de codificación one-hot a las variables categóricas mediante la función "pd.get_dummies()", convirtiéndolas en variables numéricas binarias, lo cual nos facilita su inclusión en modelos de aprendizaje automático de acuerdo a los parámetros establecidos.
</p>
<p align="justify">
Asimismo, se definieron las características de la variable (X) y la variable objetivo (y) de nuestro modelo, donde las características establecidas para nuestro objetivo, se utilizó del DataFrame "ozono_dataset_" excluyendo la columna del target 'Daily AQI Value' y la columna 'Date', dado que la variable objetivo se definió como 'Daily AQI Value', posteriormente a ello, los datos se dividieron en conjuntos de entrenamiento y prueba utilizando la función "train_test_split" de "scikit-learn", con un 70% de los datos para el entrenamiento y un 30% para realizar la prueba, incluyendo un estado aleatorio fijo para la reproducibilidad de los datos. Los tamaños resultantes para realizar el entrenamiento fueron de 28,014 observaciones, mientras que 12,006 son para la prueba, con un total 148 características en cada conjunto.
</p>

<table>
<tr>
<td valign="top">

|Tamaño de la variable objetivo del entrenamiento | 28014|
|-------------------------------------------------|------|
| Tamaño de la variable objetivo de prueba         |12006 |
</td>
</tr>
</table>

#### Ajuste y entrenamiento del modelo:
<p align="justify">
Después  de haber realizado la división de "entrenamiento-prueba", se utilizó la clase "LinearRegression" de la biblioteca scikit-learn para crear un modelo de regresión lineal, donde se instanció un objeto de regresión lineal llamado "lm", para luego, ajustar el  modelo a los datos de entrenamiento (X_train y y_train) utilizando el método "fit()", este proceso de ajuste nos permitió que el modelo aprendiera la relación entre las características y la variable objetivo directamente en el objeto "lm", sin la necesidad de asignar el resultado a otra variable.
</p>

<table>
<tr>
<td valign="top">

|LinearRegression |
|-------------------------------------------------|
| LinearRegression()       |
</td>
</tr>
</table>

**Verificamos la intercepción y los coeficientes y los colocamos en un DataFrame**
<p align="justify">
Una vez de haber ajustado el modelo de regresión lineal, se imprimió el término de intersección (intercept_) y los coeficientes (coef_) del modelo, ya que indican el punto donde la línea de regresión cruza el eje (Y) y la magnitud del impacto de cada característica en nuestra variable objetivo, respectivamente. Luego, se creó un DataFrame llamado "cdf" utilizando pandas, que contiene los coeficientes del modelo asociados a cada característica del los datos, ya que eso nos facilita la interpretación y análisis de la importancia de dichas características, presentes para la predicción.
</p>

<table>
<tr>
<td valign="top">

| Columna    | Coefficients |
|------------|-------------------|
| Site ID	|0.000003|
|POC	|-0.069752|
|Daily Max 8-hour Ozone Concentration	|1042.315108|
|Daily Obs Count|	0.076398|
|Percent Complete |	-0.017970|
|...	| ...|        
|County_Sarasota	|-0.132123|
|County_Seminole	|-0.062811|
|County_St. Lucie	|-0.038961|
|County_Volusia	|-0.019379|
|County_Wakulla       | -0.002585|
</td>
</tr>
</table>

#### Cálculo de errores estándar y estadística t para los coeficientes:
<p align="justify">
Para lograr evaluar el significado estadístico de los coeficientes de nuestro modelo de regresión lineal, se logró calcular los errores estándar de cada coeficiente establecido en cada una de las columnas, donde primeramente, se determinó el número de observaciones (n) y el número de características (k), para luego calcular los grados de libertad (dfN). Asímismo, se predijeron los valores en el conjunto de entrenamiento y se calculó el error cuadrático, adicionalmente, se calcularon los errores estándar de cada uno de los coeficientes, teniendo en cuenta la variabilidad de cada característica en el conjunto de datos, para luego crear una DataFrame que incluya los coeficientes, los errores estándar y las estadísticas t (t-statistic), que se obtuvieron dividiendo los coeficientes entre sus errores estándar, por lo que este análisis nos permite evaluar la relevancia de cada característica en el modelo.
</p>

<table>
<tr>
<td valign="top">

| Columna    | Standard Error|	t-statistic|
|------------|-------------------|------------|
| Site ID	| 3.987962e-08	|84.584249 |
|POC	| 1.857944e-01|	-0.375426|
|Daily Max 8-hour Ozone Concentration	|1.544165e+00	|675.002230|
|Daily Obs Count| 3.223418e-02| 2.370097|
|Percent Complete | 6.074531e-03|	-2.958253|
|...	|     ...|	...|
|County_Sarasota	| 6.733248e-02	|-1.962248|
|County_Seminole	|1.162257e-01	|-0.540426|
|County_St. Lucie	|1.129457e-01	|-0.344954|
|County_Volusia	|1.144931e-01|	-0.169258|
|County_Wakulla | 1.164628e-01	| -0.022195|
</td>
</tr>
</table>

<p align="justify">
Para poder asegurar la correcta interpretación de los resultados correspondientes a los datos, se tuvo que convertir los nombres de las características en un (X_train.columns) a cadenas de texto, asimismo, se reasignó el índice del DataFrame "cdf" a estos nombres de dichas características, permitiendo así una identificación clara y concisa de cada coeficiente y su correspondiente estadística, además, las características de dichos elementos se ordenaron en función de su "t-statistic" de manera descendente, reflejando la importancia relativa que tiene en la predicción de nuestra variable objetivo 'Daily AQI Value', para finalmente, imprimir la lista de características en orden de importancia, destacando cuáles tienen un mayor impacto predictivo de acuerdo al modelo de regresión lineal.
</p>

<table>
<tr>
<td valign="top">

| Las características organizadas en orden de importancia para predecir el valor de Daily AQI |
|------------|
|Daily Max 8-hour Ozone Concentration | 
|Site ID | 
|Month |
|Local Site Name_USMC Reserve Center (Gandy)|
|County_Hillsborough|
|County_Manatee|
|...|
 | DayOfWeek  |
|Method Code|
|Site Longitude|
|Site Latitude| 
</td>
</tr>
</table>
  
## 4. Evaluación del modelo mediante el coeficiente de determinación (R²)

<p align="justify">
Asimismo se realizó el calculó el valor del coeficiente de determinación R² para evaluar el desempeño que ejerce el modelo de regresión lineal ajustado, donde este coeficiente se obtiene utilizando la función "metrics.r2_score" de "scikit-learn", además, de que mide la proporción de la varianza en la variable objetivo 'Daily AQI Value' que es explicada por las características del modelo, ya que obtener un valor de R² cercano a 1 indica que el modelo tiene un buen ajuste, explicando una gran parte de la variabilidad observada en los datos de entrenamiento realizados en los períodos establecidos.
</p>

<table>
<tr>
<td valign="top">

| Valor del R cuadrado del ajuste del modelo | 0.942|
|--------------------|-------------|
</td>
</tr>
</table>

## 5. Visualización de resultados

### Matrices de evaluación de predicción, estimación de error y regresión

#### Predicción usando el modelo lm:
<p align="justify">
Al utilizar los datos de prueba para lograr evaluar el desempeño del modelo de regresión lineal ajustado, a su vez realizando predicciones sobre el conjunto de características de prueba (X_test), se debe verificar el tipo y tamaño del objeto de predicciones resultantes para asegurarse de que este se alinie con las expectativas esperadas, por lo cual, se generó un gráfico de dispersión que comparará los valores reales de 'Daily AQI Value' en el conjunto de prueba (y_test) con los valores predichos, además de que en el gráfico, se añadió una línea roja de 45 grados para facilitar la visualización de qué tan cerca están las predicciones de los valores reales, lo que nos ayuda a evaluar visualmente la precisión con la que conto el modelo.
</p>
<p align="justify">
Por consiguiente, para evaluar la normalidad de los errores que presenta el modelo, se creó un histograma de los residuos de la data, que son las diferencias entre los valores reales de 'Daily AQI Value' en el conjunto de prueba (y_test) y los valores predichos por el modelo de regresión, para ello se utilizó "seaborn", junto con una estimación de la densidad de Kernel (KDE) que facilita la visualización en la distribución de los residuos, ya que un histograma con una forma aproximadamente normal (en forma de campana) nos indicaría que los errores están distribuidos de manera simétrica alrededor del cero, lo cual es un buen indicativo de la calidad del modelo utilizado.
</p>
<p align="justify">
Adicionalmente, se generó un diagrama de dispersión de residuos frente a los valores predichos de la data para evaluar la presencia de patrones en los errores del modelo, lo cual es muy crucial para poder verificar la validez de las suposiciones de linealidad en la regresión, ya que en el gráfico, se evidencian los residuos, es decir, las diferencias entre los valores reales y los predichos por la regresión que se trazaron en función de los valores predicidos, adicional a ello, se le añadió una línea horizontal en y=0 para facilitar la visualización de la dispersión de los residuos alrededor de esta línea, lo que indica un patrón aleatorio y una dispersión uniforme de los puntos alrededor de la línea si el modelo está bien especificado y que los residuos son independientes y tienen varianza constante.
</p>

# Resultados: 

Tras aplicar la regresion lineal a los datos de ozono de Florida para 2022 y 2023,se obtuvieron los siguientes resultados:

### Matriz de Correlación:
<p align="justify">
- Fuerte Correlación entre "Daily Max 8-hour Ozone Concentration" y "Daily AQI Value":
Existe una correlación muy fuerte de 0.97 entre la concentración máxima diaria de ozono en 8 horas y el valor diario del Índice de Calidad del Aire (AQI). Lo que sugiere que a medida que aumenta la concentración de ozono, el valor del AQI también tiende a aumentar de manera significativa.
</p>
<p align="justify">
- Baja Correlación con "County FIPS Code":
Las variables "County FIPS Code" muestran una correlación muy baja con las demás variables, indicando que la ubicación del condado (codificada por FIPS) no está significativamente relacionada con los valores de ozono o AQI.
</p>

<table>
<tr>
<td valign="top">

#### Matriz de correlación 

![image](https://github.com/user-attachments/assets/081c3111-c99d-45b0-b12f-f4b0634ad668)

</td>
</tr>
</table>

### Comparación de valores reales y valores predichos:
<p align="justify">
Si realizamos la visualización del gráfico correspondiente a la distribución frente al valor real comparado con los valores predecidos después de haberde aplicado el entrenamiento de la Data con regresión lineal, se obtuvo que nuestro modelo de regresión lineal funciona bastante bien para predecir los valores dentro de un rango medio, pero hay que tener en cuenta que muy parte de ello presenta dificultades para predecir valores extremos, es decir, valores que contengan datos altos, lo que podría indicar que el modelo subestima los valores reales en esos casos, esto podría ser una señal de que el modelo necesita realizar mejoras quizá a través de la inclusión de más características, la transformación de algunas variables o la consideración de un modelo más complejo si los valores altos son importantes al momento de realizar el análisis, pero muy fuera de ello se puede identificar que las predicciones son razonablemente precisas, dado que coinciden bien con los valores reales para rangos más bajos que contiene la data, pero eso no quita el hecho de que necesita mejoras para mejorar la predicción.
</p>
<table>
<tr>
<td valign="top">

#### Valores reales vs. valores predichos 

![image](https://github.com/user-attachments/assets/d84d89d5-e942-4608-8192-f6bb23b41ab8)

</td>
</tr>
</table>

### Histograma de residuos para verificar la normalidad :
<p align="justify">
Una vez de haber realizado la comparación de los valores reales y predictivos, pasamos a ver los resultados presentados en el histograma que contiene los residuos para ver la normalidad de los datos, y de acuerdo a ello se logra visualizar que en su mayoría los datos se encuentran centrados alrededor del cero, lo que nos sugiere que los errores del modelo son pequeños, sin embargo, la distribución presenta una fuerte asimetría hacia el lado derecho con algunos residuos que se extienden hasta 60, lo que nos indica que cuenta con presencia de errores en ciertos casos al no tener la forma de una campana simétrica típica en la distribución normal, por lo cual en los resultados muestra una distribución sesgada con la cola larga hacia la derecha que sugiere que los residuos no son normales, además, de indicarnos que el modelo contiene dificultades para poder manejar ciertos valores que quizá no se pudieron capturar por el modelo y que afectaron en ciertos aspectos a las predicciones realizadas.
</p>

<table>
<tr>
<td valign="top">
  
#### Histograma de residuos para verificar la normalidad 

![image](https://github.com/user-attachments/assets/ec2eb6ac-e9e5-4cc1-82e7-1219b60624db)

</td>
</tr>
</table>


### Comparación de los residos y valores predichos:
<p align="justify">
En este gráfico nos muestra un diagrama de dispersión de los residuos en función a los valores predichos en el modelo ya establecido, donde se logra observar que los residuos se mantienen cerca de cero tal cual como se mencionó anteriormente para todos los valores que contienen un bajo rango menos de 40, lo que sugiere que el modelo predice razonablemente bien en ese rango, sin embargo, a medida que dichos valores aumentan los residuos se incrementan de manera significativa mostrando una tendencia ascendente, dado que dicha curva indica que el modelo no captura adecuadamente las relaciones subyacentes para los valores más grandes que existe dentro de la Data, lo que sugiere que el modelo podría estar infraestimando a los valores más altos que existen, resultando en residuos positivos muy grandes, al evidenciar la presencia de un patrón en los residuos nos indica que las suposiciones de linealidad que es la constancia de varianza de los errores pueden ni estar netamente satisfechas, lo que implica que existen relaciones no lineales en los datos que no están siendo capturados por el modelo de regresión lineal actual.
</p>

<table>
<tr>
<td valign="top">
#### Diagrama de dispersión de residuos vs. valores predichos 

![image](https://github.com/user-attachments/assets/c9fe3e6a-47e6-4e0a-80b4-fd7ea66cad12)

</td>
</tr>
</table>

<p align="justify">
Para ver los resultados del análisis de errores del modelo de regresión lineal se tiene lo siguiente:
</p>
<p align="justify">
- Error absoluto medio (MAE): 1.248 este valor nos indica que en promedio las predicciones del modelo están a una distancia de aproximadamente 1.25 unidades del valor real de la Data lo que sugiere que el modelo es bastante preciso en términos absolutos al predecir dichos valores.
</p>
<p align="justify">
- Error cuadrático medio (MSE): 6.676 en este caso nos indica que aunque el modelo generalmente predice con precisión, existe algunos errores de predicción más grandes que aumentan dicho valor, dado que el MSE es un promedio de los cuadrados de los errores, lo que penaliza más a los errores grandes que a los pequeños.
</p>
<p align="justify">
- Raíz del error cuadrático medio: 2.584 en este caso nos indica que en promedio las predicciones están a 2.5 84 unidades del valor real lo que sigue indicando un buen nivel de precisión, pero mostrando también que hay cierta variabilidad en la precisión de las predicciones realizadas.
</p>
<p align="justify">
- Coeficiente de determinación: 0.939 en este caso nos indica que el modelo es capaz de poder explicar el 93.9% de la variabilidad de los datos de la DataFrame de prueba, lo que sugiere que el modelo de regresión lineal ajusta bien los datos y tiene un buen poder predictivo.
</p>

## Discusión:
<p align="justify">
Los resultados obtenidos revelan una tendencia ligeramente ascendente en los niveles de ozono en Florida durante 2022 y 2023. Esta observación concuerda con estudios previos que han identificado un aumento gradual en las concentraciones de ozono  en varias regiones de Estados Unidos [1].
</p>
<p align="justify">
El valor diario del Índice de Calidad del Aire (AQI) y la concentración máxima diaria de ozono en 8 horas tienen una fuerte correlación (0.97), lo que confirma la validez del AQI como un indicador confiable de la calidad del aire en relación con el ozono.Este hallazgo corrobora los resultados de Zhang et al. [2], quienes también encontraron una relación estrecha entre estos parámetros durante su análisis de la calidad del aire en las ciudades. Esta correlación es fuerte porque el AQI se calcula utilizando contaminantes como el ozono [3].Esta relación sólida enfatiza el papel crucial del ozono en la calidad general del aire y respalda el uso del AQI como una herramienta útil para informar al público general sobre los riesgos de salud relacionados con la contaminación por ozono.
</p>
<p align="justify">
Por otro lado,la baja correlación entre las variables de ozono/AQI y el código FIPS del condado indica que la ubicación geográfica en Florida no afecta los niveles de ozono. El descubrimiento sugiere dos interpretaciones adicionales: las fuentes de precursores de ozono podrían estar distribuidas de manera bastante uniforme en todo el estado, o las condiciones meteorológicas favorecedoras de la formación de ozono podrían ser similares en todo el área. Sin embargo, según Cooper et al. [4], las fuentes de emisión específicas o las condiciones meteorológicas locales podrían tener un mayor impacto en las concentraciones de ozono que la ubicación geográfica en sí.Esta observación enfatiza la complejidad de la dinámica del ozono y enfatiza la necesidad de considerar más allá de la simple distribución espacial, múltiples variables en su formación y acumulación. Para comprender mejor la variabilidad espacial de los niveles de ozono en Florida, futuros estudios podrían beneficiarse de incorporar datos meteorológicos detallados y un análisis más detallado de las fuentes de emisión.
</p>

**Observaciones sobre el Modelo**:
<p align="justify">
Aunque las métricas MAE y RMSE son bajas y el R² es alto, lo que sugiere un buen rendimiento, se identificaron problemas de heterocedasticidad a través de los gráficos de residuos. Estos problemas indican que el modelo no mantiene una varianza constante en los errores, especialmente para valores predichos más altos.
</p>

**Mejoras Futuras**:
<p align="justify">
   - Mejora del Modelo: Podría ser beneficioso realizar transformaciones en las variables o explorar modelos alternativos para manejar mejor la heterocedasticidad observada.
   - Revisión de Outliers: Los valores atípicos identificados en los gráficos de residuos podrían estan afectando la precisión del modelo y deben ser revisados cuidadosamente.
</p>

<p align="justify">
En resumen, el modelo muestra un rendimiento general sólido, pero tiene áreas donde se puede mejorar, especialmente en la gestión de errores para valores predichos altos. [Link del código en colab](https://colab.research.google.com/drive/1I4PNfXti8X8RvR-hyJtEjr5WPyJGERJh?usp=sharing)

</p>

## Referencias:

- [1] D. J. Jacob, "Introduction to Atmospheric Chemistry," Princeton University Press, 1999. [Online]. Available: https://acmg.seas.harvard.edu/people/daniel-jacob/files/atmosphere-book. [Accessed: 27-Aug-2024].

- [2] Y. Zhang et al., "Tropospheric ozone change from 1980 to 2010 dominated by equatorward redistribution of emissions," Nature Geoscience, vol. 9, no. 12, pp. 875-879, 2016. [Online]. Available: https://www.nature.com/articles/ngeo2827

- [3] U.S. Environmental Protection Agency, "Technical Assistance Document for the Reporting of Daily Air Quality":
https://www.airnow.gov/sites/default/files/2020-05/aqi-technical-assistance-document-sept2018.pdf

- [4] O. R. Cooper et al., "Increasing springtime ozone mixing ratios in the free troposphere over western North America," Nature, vol. 463, no. 7279, pp. 344-348, 2010. [Online]. Available: https://www.nature.com/articles/nature08708

- [5] EPA, "EPA Awards $27B in Greenhouse Gas Reduction Fund Grants to Accelerate Clean Energy Solutions," [Online]. Available: https://www.epa.gov/newsreleases/epa-awards-27b-greenhouse-gas-reduction-fund-grants-accelerate-clean-energy-solutions (accessed Aug. 28, 2024).

- [6]  USA.gov., "Agencia de Protección Ambiental de Estados Unidos," [Online]. Available: https://www.usa.gov/es/agencias/agencia-de-proteccion-ambiental-de-estados-unidos#:~:text=La%20Agencia%20de%20Protecci%C3%B3n%20Ambiental,ambiente%20y%20los%20recursos%20naturales (accessed Aug. 28, 2024).

- [7] EPA en español, "Información básica sobre implementación de las leyes ambientales," [Online]. Available: https://espanol.epa.gov/espanol/informacion-basica-sobre-implementacion-de-las-leyes-ambientales (accessed Aug. 28, 2024).

- [8] *Revista Chilena de Anestesia*, "Regresión lineal," [Online]. Available: https://revistachilenadeanestesia.cl/regresion-lineal/#:~:text=La%20regresi%C3%B3n%20lineal%20permite%20predecir,y%20homogeneidad%20de%20las%20varianzas (accessed Aug. 28, 2024).

- [9] Amazon Web Services, Inc., "¿Qué es la regresión lineal?," [Online]. Available: https://aws.amazon.com/es/what-is/linear-regression/ (accessed Aug. 28, 2024).

