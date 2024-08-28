<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

# INFORME DE LABORATORIO N° 1

 ### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile

## Introducción: 

<p align="justify">
La agencia de protección ambiental (United States Environmental Protection Agency o simplemente EPA por sus siglas en ingles), es el encargado de proteger la salud de todos los seres humanos, asimismo, del medio ambiente y todos los recursos naturales como labor principal. El objetivo de esta agencia es poder crear y hacer cumplir las leyes ambientales establecidas para este medio, además, de que inspecciona cada recurso natural para brindar apoyo técnico y así poder minimizar las amenazas que pueden presentarse, asímismo, pueda respaldar la planificación de recuperación de cada uno de estos puntos.
</p>
<p align="justify">
Al ser una entidad que trata de controlar la contaminación del aire y el agua, siendo puntos importantes para la vida humana, esta agencia llegó a otorgar miles de millones de dólares en subvenciones de fondo para poder reducir los gases de efecto invernadero y así acelerar las soluciones de energía limpia para que logre combatir las crisis climáticas que existen actualmente y favorecer al planeta y a familias enteras, lo cual ha ido mejorando con el tiempo tras existir fondos que benefician a nuestro entorno y mejoran las condiciones climáticas con las que contamos actualmente.
</p>
<p align="justify">
En este contexto, el ozono emerge como un contaminante atmosférico de gran preocupación debido a sus efectos negativos en la salud humana y el medio ambiente. Este informe se centra en el análisis de los niveles de ozono en el estado de Florida durante los años 2022 y 2023, utilizando datos recopilados mediante monitores ubicados al aire libre en todos los Estados Unidos. El objetivo es lograr identificar tendencias y patrones en los niveles de ozono a lo largo de este período, lo que podría informar futuras políticas y estrategias de gestión ambiental.
</p>

## Metodología:

<p align="justify">
Los datos fueron utilizados para realizar la identificación en la concentración de Ozono de manera diaria, los cuales fueron obtenidos de la base de datos del EPA para un periodo de dos años (2022-2023). El análisis se realizó mediante una regresión lineal, tomando en cuenta los datos del tiempo (en días) como variable independiente y la concentración de Ozono como variable dependiente.
</p>
<p align="justify">
La regresión lineal es uno de los métodos que se utiliza para lograr predecir el valor de una determinada variable en función del valor de otra variable, donde el valor que se desea predecir corresponde a la variable dependiente mientras que la otra variable pasa ser la variable independiente tal como se mencionó con anterioridad, el objetivo detrás de la regresión lineal es estimar los coeficientes de dicha ecuación, donde involucra una o más variables independientes, dado que asi logra predecir mejor el valor de la variable dependiente, hay que tener en cuenta que la regresión lineal se ajusta a una línea recta que muchas veces minimiza las discrepancias entre los valores de salida y los valores reales.
</p>  
<p align="justify">
Por ende, para realizar la regresión lineal en base a los datos encontrados en las datas del EPA logramos realizar un proceso el cual nos ayuda a identificar los patrones de concentración del ozono, lo que ayuda a identificar las variables que necesitamos para predecir de manera efectiva y que tenga la menor cantidad errores posibles, lo que involucra seguir la siguiente secuencia de pasos:
</p>  

### 1. Visualización de los datos

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
Adicional a ello es necesario buscar todas las columnas que cuentan con un valor único, es decir, todas aquellas que por más que existan 1000 filas tienen el mismo dato, lo cual nos favorece para poder ver cuáles son aquellos datos que no son tan relevantes para hacer la regresión. Por lo que, debemos eliminar todas las columnas que tienen un único valor constante, como (Units, AQS Parameter Code, AQS Parameter Description, State FIPS Code, y State), ya que no aportan información relevante. Sin embargo, no se eliminó las columna de (Source y POC) porque, aunque tienen un solo valor en una tabla, en la otra tienen múltiples valores, lo que podría ser utilidad para la predicción.
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
Realizar la división y la identificación de las columnas tanto categóricas como numéricas nos ayuda a poder poder verificar cuales son las variables que debemos tomar en cuenta para poder convertir en uno o en el otro de ser necesario, es decir, si necesito columnas del tipo categórico pero mi datasets es numérico o al contrario se puede hacer la conversión para que no exista algún tipo de error.
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
Lograr comprender mejor los datos que nos proporciona cada Dataset, además, de ver la mejor distribución del aire en los dos años presentados (2022-2023) podemos realizar la implementación de histogramas lo que nos permitiría visualizar del como se lograrían distribuir los valores a las variables clave de lo que se quiere identificar, donde nos ayuda a proporcionar una idea más clara sobre la concentración y la frecuencia de los diferentes rangos de valores que este contiene al tener datos, tales como la concentración y la calidad del aire y realizar la comparación de distribución entre ambos en diferentes periodos, por ende, la elección de histogramas se basa en la capacidad de poder mostrar de manera más efectiva la distribución que se presenta en determinadas variables continuas, además, de poder comparar dichas frecuencias entre distintos conjuntos de datos lo que nos permite identificar patrones y posibles anomalías que se presentan en los diferentes tipos de años.
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
Asimismo, para analizar la distribución de todos los datos del ozono y el calidad del aire (AQI), también se puede tomar en cuenta los gráficos de densidad, dado que estos son útiles para poder visualizar la forma de la distribución de un conjunto de datos y así comparar la distribución que se presenta en cada tipo de conjunto, ya que estas visualizaciones nos proporcionan una comprensión visual más clara de las diferencias en la distribución que se presenta en los datos evaluados, lo que es de gran utilidad para el análisis de los datos presentados.
</p>

<table>
<tr>
<td valign="top">

#### Density of Daily Max 8-hour Ozone Concentration and Daily AQI Value

![image](https://github.com/user-attachments/assets/3793066e-66e3-49ea-8082-70039d837e9f)

</td>
</tr>
</table>

### 2. Preparación de Datos para el Análisis Predictivo 

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
Adicionalmente, considerar crear un gráfico de caja y bigotes para poder comparar la distribución de nuestra variable objetivo es importante, porque nos permite observar de cómo están distribuidas estos datos a lo largo de un rango, además, de que nos muestra la mediana, los cuartiles y los rangos intercuartílicos, asímismo, nos permiten detectar los "outliers", es decir, los puntos que están fuera de los bigotes del gráfico, que son considerados como valores atípicos donde nos permite identificar datos que se desvían significativamente y que se puede visualizar.
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

### 3. Aplicación del Modelo de regresión 

#### División de entrenamiento-prueba

<p align="justify">
Para enriquecer el análisis temporal y permitir una mejor modelización de nuestros datos, se extrajeron componentes temporales de la columna de fecha del DataFrame "ozono_dataset", donde se  añadieron nuevas columnas para el año, mes y día de la semana utilizando las funciones ".dt.year", ".dt.month", y ".dt.dayofweek", adicional a ello, se le aplicó la técnica de codificación one-hot a las variables categóricas mediante la función "pd.get_dummies()", convirtiéndolas en variables numéricas binarias, lo cual nos facilita su inclusión en modelos de aprendizaje automático de acuerdo a los parámetros establecidos.
</p>
<p align="justify">
Asimismo, se definieron las características de la variable(X) y la variable objetivo (y) de nuestro modelo, donde las características establecidas para nuestro objetivo, se utilizó del DataFrame "ozono_dataset_" excluyendo la columna del target 'Daily AQI Value' y la columna 'Date', dado que la  variable objetivo se definió como 'Daily AQI Value',  posteriormente a ello, los datos se dividieron en conjuntos de entrenamiento y prueba utilizando la función "train_test_split" de "scikit-learn", con un 70% de los datos para entrenamiento y un 30% para realizar la prueba, incluyendo un estado aleatorio fijo para la reproducibilidad de los datos. Los tamaños resultantes para realizar el entrenamiento fueron de 28,014 observaciones, mientras que 12,006 son para la prueba, con un total 148 características en cada conjunto.
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

#### Ajuste y entrenamiento del modelo
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
Una vez de haber ajustado el modelo de regresión lineal, se imprimió el término de intersección (intercept_) y los coeficientes (coef_) del modelo, donde indican el punto donde la línea de regresión cruza el eje (Y) y la magnitud del impacto de cada característica en nuestra variable objetivo, respectivamente. Luego, se creó un DataFrame llamado "cdf" utilizando pandas, que contiene los coeficientes del modelo asociados a cada característica del los datos, ya que eso nos facilita la interpretación y análisis de la importancia de dichas características, presentes para la predicción.
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

#### Cálculo de errores estándar y estadística t para los coeficientes
<p align="justify">
Para lograr evaluar e significado estadístico de los coeficientes de nuestro modelo de regresión lineal, se logró calcular los errores estándar de cada coeficiente establecidos en cada una de las columnas, donde primeramente, se determinó el número de observaciones (n) y el número de características (k), para luego calcular los grados de libertad (dfN). Asímismo, se predijeron los valores en el conjunto de entrenamiento y se calculó el error cuadrático, adicionalmente, se calcularon los errores estándar de xada uno de los coeficientes, teniendo en cuenta la variabilidad de cada característica en el conjunto de datos, para luego crear una DataFrame que incluya los coeficientes, los errores estándar y las estadísticas t (t-statistic), que se obtuvieron dividiendo los coeficientes entre sus errores estándar, por lo que este análisis nos permite evaluar la relevancia de cada característica en el modelo.
</p>
### 4.Evaluación del modelo mediante el coeficiente de determinación (R²)

##5.Visualización de resultados

</p>

## Resultados: 

Tras aplicar la regresion lineal a los datos de ozono de Florida para 2022 y 2023,se obtuvieron los siguientes resultados:

### Matriz de Correlación
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

<table>
<tr>
<td valign="top">

#### Valores reales vs. valores predichos 

![image](https://github.com/user-attachments/assets/d84d89d5-e942-4608-8192-f6bb23b41ab8)

</td>
</tr>
</table>

<table>
<tr>
<td valign="top">

#### Histograma de residuos para verificar la normalidad 

![image](https://github.com/user-attachments/assets/ec2eb6ac-e9e5-4cc1-82e7-1219b60624db)

</td>
</tr>
</table>

<table>
<tr>
<td valign="top">

#### Diagrama de dispersión de residuos vs. valores predichos 

![image](https://github.com/user-attachments/assets/c9fe3e6a-47e6-4e0a-80b4-fd7ea66cad12)

</td>
</tr>
</table>

## Discusión:

Los resultados obtenidos revelan una tendencia ligeramente ascendente en los niveles de ozono en Florida durante 2022 y 2023. Esta observación concuerda con estudios previos que han identificado un aumento gradual en las concentraciones de ozono troposférico en varias regiones de Estados Unidos [1].

La fuerte correlación (0.97) entre la concentración máxima diaria de ozono en 8 horas y el valor diario del Índice de Calidad del Aire (AQI) es consistente con los hallazgos de Zhang et al. [2], quienes también encontraron una relación estrecha entre estos parámetros en su análisis de la calidad del aire urbano.

Sin embargo, la baja correlación entre el código FIPS del condado y los niveles de ozono sugiere que otros factores, como las condiciones meteorológicas locales o las fuentes de emisión, podrían tener un impacto más significativo en las concentraciones de ozono que la ubicación geográfica específica dentro del estado. Esto se alinea con las conclusiones de Cooper et al. [3], quienes destacaron la importancia de las condiciones atmosféricas en la formación y acumulación de ozono troposférico.

Es importante señalar que, aunque se observa un ligero aumento en los niveles de ozono, se requiere un análisis más detallado y a largo plazo para determinar si esta tendencia es estadísticamente significativa y si representa una amenaza real para la calidad del aire en Florida.
## Referencias:

[1] J. L. Schnell et al., "Elucidating the influence of anthropogenic emissions and meteorological variability on US surface ozone," Environmental Research Letters, vol. 15, no. 7, p. 074050, 2020. [Online]. Available: https://iopscience.iop.org/article/10.1088/1748-9326/ab8a6b
[2] Y. Zhang et al., "Tropospheric ozone change from 1980 to 2010 dominated by equatorward redistribution of emissions," Nature Geoscience, vol. 9, no. 12, pp. 875-879, 2016. [Online]. Available: https://www.nature.com/articles/ngeo2827
[3] O. R. Cooper et al., "Increasing springtime ozone mixing ratios in the free troposphere over western North America," Nature, vol. 463, no. 7279, pp. 344-348, 2010. [Online]. Available: https://www.nature.com/articles/nature08708
[4] United States Environmental Protection Agency, "Outdoor Air Quality Data," [Online]. Available: https://www.epa.gov/outdoor-air-quality-data. [Accessed: 28-Aug-2024].
[5] Florida Department of Environmental Protection, "Air Quality," [Online]. Available: https://floridadep.gov/air. [Accessed: 28-Aug-2024].
