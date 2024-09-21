<p align="center">
  <img src="https://github.com/JefHuiza/Fundamentos-de-Dise-o/assets/156036185/d3c66dfb-5faa-419b-bf1b-d897ea110ce7" width="70%">
</p>

### Intregantes del equipo:
 
 - Alarcon Arias Julio Erick
 - Atao Surichaqui Ester Solamyt
 - Condori Mamani Nardy Liz
 - Vega Pahuara Millene Nadile
 - 

## Objetivo:

Monitorear la calidad de aire considerando los contaminantes de PM2.5, PM10 y monóxido de Carbono(CO) para la toma de decisiones.
## FUNCIÓN
|Característica principal |	Característica secundaria | Estudio del caso industrial |
|--------------------------|---------------------------|-----------------------------|
|                          |PLA (polímero termoplástico): para el sistema de monitoreo.|                            |
| **Material**            |  Acero: para sujetar las piezas                         |                            |
| **Energía**              |Corriente continua (batería de 12V): con un panel solar.  |                             |  
|    **Señal**             | Analógica: para el registro de datos por parte de los sensores.| Los sensores que medirán los parámetros de calidad del aire emitirán señales analógicas continuas. Estos parámetros podrían incluir: Partículas en suspensión (PM2.5, PM10), Monóxido de carbono (CO).|
|                          |  Digital: transmisión vía Wi-Fi.| Los sensores de calidad del aire enviarán los datos a una plataforma en la nube a través de Wi-Fi, donde serán almacenados en una base de datos para su análisis y monitoreo en tiempo real. |
|**Definición de interfaces**  | Software en la nube  |   Los datos de los sensores de calidad del aire serán visualizados a través de un software o plataforma en la nube, accesible desde cualquier dispositivo con conexión a internet, permitiendo el control y monitoreo en tiempo real del sistema. |
|                          |   Interfaz manual |Se proporcionará una guía paso a paso para el uso, instalación y mantenimiento del dispositivo de monitoreo de calidad del aire, facilitando su correcta implementación y operación por parte del usuario. |
|     **Costos**           |        Regular                   |  El costo del sistema se mantiene dentro del alcance de los materiales o componentes utilizados, como los sensores, módulos de comunicación (Wi-Fi), y la infraestructura para el almacenamiento y visualización de los datos (plataforma en la nube). Esto garantiza que el sistema sea accesible y económicamente viable.                |

## DISEÑO/ESTRUCTURA

| Característica principal | Característica secundaria                                   | Estudio del caso industrial                                                                                   |
|--------------------------|-------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------|
| **Geometría**            | Dimensiones del dispositivo                                 | Altura: 17,5 cm; Largo: 20,9 cm |
|                          | Portabilidad                                                | Diseño compacto para fácil instalación en diferentes ubicaciones de Chicla.    |
|                          | Cinemática                                                  | Dispositivo estático con captación de flujos de aire para monitoreo.                    |
| **Materiales**           | Carcasa: Material resistente a condiciones climáticas       | Selección de materiales que garanticen durabilidad y protección contra lluvia, polvo y variaciones de temperatura.|
|                          | Componentes internos: Electrónica de alta calidad           | Selección de sensores y componentes que ofrezcan la mejor relación calidad-precio y precisión en las mediciones. |


## ORGANIZACIÓN

| Característica principal | Característica secundaria                           | Estudio del caso industrial                                                                                   |
|--------------------------|-----------------------------------------------------|---------------------------------------------------------------------------------------------------------------|
| **Planificación**        | Costo                                               | Desarrollo y producción dentro de un presupuesto asequible para autoridades locales y comunidades.  |           |
|                          | Normativas                                          | Cumplimiento con estándares nacionales e internacionales de medición de calidad del aire. |
| **Sostenibilidad**       | Equilibrio energetica                               | Uso de baterías recargables y/o paneles solares para minimizar el impacto ambiental y asegurar autonomía. |
|                          | Durabilidad                                         | Diseño para larga vida útil, reduciendo la necesidad de reemplazo frecuente y generación de residuos. |          |


## Realización y producción

| *Etapa de realización*   | *Actividad*                           | *Descripción del proceso*                                                   | *Recursos requeridos*                                                         |
|----------------------------|-----------------------------------------|-------------------------------------------------------------------------------|---------------------------------------------------------------------------------|
| *Diseño y prototipo*      | Diseño del dispositivo de monitoreo     | Diseño del gabinete, selección de sensores y componentes de energía.          | Herramientas CAD, software de simulación, materiales como PCB, sensores PM2.5, PM10, CO, paneles solares. |
| *Fabricación*             | Impresión 3D y montaje de componentes   | Producción del gabinete mediante impresión 3D, integración de sensores y circuitos electrónicos. | Impresoras 3D, componentes electrónicos, ensambladores técnicos.               |
| *Desarrollo de software*  | Programación del microcontrolador y plataforma de monitoreo | Desarrollo de código para el microcontrolador (ESP32), creación de la plataforma web/móvil para visualización y alertas. | Programadores, software de desarrollo, plataformas de hosting y base de datos. |
| *Pruebas*                 | Pruebas de campo                       | Instalación del dispositivo en Chicla y monitoreo de su rendimiento en condiciones reales. | Personal técnico, equipos de medición complementarios, software de análisis.    |
| *Producción en serie*     | Fabricación masiva y despliegue         | Fabricación de múltiples unidades para su instalación en varias ubicaciones.   | Proveedores de componentes, líneas de producción, logística para distribución.  |

## Uso

| **Características**                | **Descripción**                                                                                                                                                   |
|------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Área de Aplicación**        | El dispositivo se utiliza en el contexto industrial de Chicla, Perú, para monitorear los niveles de PM10, PM2.5 y CO, contaminantes que afectan tanto al entorno urbano como a las áreas industriales cercanas. Su uso se orienta a la obtención de datos en tiempo real que ayudan a evaluar el impacto de actividades industriales en la calidad del aire. |
| **Puesta en Servicio**        | La instalación del dispositivo en un poste fijo asegura que el monitoreo se realice de manera continua y sin interrupciones. Su fácil integración en la red Wi-Fi existente permite que el dispositivo comience a operar automáticamente tras su instalación, reduciendo la necesidad de intervención técnica especializada. Esto es clave en entornos industriales donde el monitoreo ininterrumpido es crucial. |
| **Comodidad Operativa**       | El uso del dispositivo es altamente eficiente, ya que los datos se transmiten automáticamente a una plataforma accesible a través de internet. Esto minimiza la necesidad de manejo manual o de personal en el sitio, lo que es ideal para entornos industriales donde los recursos humanos pueden estar limitados. Los resultados pueden ser consultados en tiempo real por los operadores industriales y las autoridades locales. |
| **Servicio y Funcionalidad**  | Este dispositivo ofrece un servicio integral de monitoreo de contaminantes clave, proporcionando datos precisos sobre la calidad del aire. Su función de alertas en tiempo real permite a los responsables industriales tomar medidas inmediatas cuando los niveles de PM10, PM2.5 y CO exceden los límites establecidos por la normativa ECA Aire, ayudando a mitigar posibles efectos adversos en las operaciones industriales y en la salud de los trabajadores. |
| **Fiabilidad Técnica**        | El dispositivo emplea sensores avanzados (PMS5003, MQ7, KY-038) que están diseñados para entornos industriales. Estos sensores tienen una alta precisión en la detección de partículas y gases, lo que garantiza que las lecturas reflejen fielmente las condiciones reales del aire. La transmisión de datos vía Wi-Fi asegura una alta tasa de disponibilidad de datos, lo que es esencial para el monitoreo continuo en áreas industriales. |
| **Accesibilidad y Adaptabilidad** | El dispositivo es altamente accesible tanto para operadores industriales como para la población general. Su plataforma web facilita el acceso a los datos sin necesidad de software especializado. Además, el dispositivo puede adaptarse a diferentes tipos de industria, ya que sus sensores son modulables y pueden incorporar otros contaminantes relevantes en entornos específicos. |
| **Mantenimiento y Operabilidad** | El mantenimiento del dispositivo es mínimo, requiriendo solo revisiones periódicas para asegurar la limpieza de los sensores y la correcta transmisión de datos. Esto lo hace ideal para entornos industriales, donde el tiempo de inactividad debe minimizarse. La durabilidad del dispositivo y su bajo requerimiento de intervención técnica garantizan una operabilidad prolongada sin comprometer la calidad de los datos. |
| **Normativa Aplicada**        | El dispositivo cumple con el D.S. N° 003-2017-MINAM (ECA Aire), lo que asegura que las mediciones y alertas se alineen con los estándares de calidad del aire peruanos. Esto lo hace adecuado para su uso en industrias que operan bajo regulaciones estrictas de emisiones y control ambiental. |
| **Impacto en la Comunidad y Operaciones**   | El uso del dispositivo no solo beneficia a la comunidad al proporcionar datos transparentes sobre la calidad del aire, sino que también apoya a las industrias locales a cumplir con las normativas ambientales. Las alertas en tiempo real permiten a los responsables industriales ajustar las operaciones para mitigar la contaminación, reduciendo riesgos para la salud de los trabajadores y las comunidades cercanas. |
| **Escalabilidad y Viabilidad** | El dispositivo es escalable a otras industrias o ciudades con condiciones similares. Su diseño modular permite añadir nuevos sensores si las necesidades de monitoreo cambian o si se requiere controlar otros contaminantes específicos del entorno industrial. Su viabilidad económica y técnica lo convierte en una opción efectiva para cualquier sector que busque un monitoreo ambiental de bajo costo pero alta eficiencia. |


## Especificaciones técnicas

| **Especificación**                          | **Descripción**                                                                                                                                                       |
|---------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Objetivo del Dispositivo**                | Monitorear la concentración de PM10, PM2.5 y CO en la ciudad de Chicla, Perú, para generar datos en tiempo real sobre la calidad del aire.                             |
| **Normativa de Referencia**                 | D.S. N° 003-2017-MINAM: Estándares de Calidad Ambiental para Aire (ECA Aire) de Perú.                                                                                  |
| **Contaminantes Monitoreados**              | - PM10 (Material Particulado de 10 micras) <br> - PM2.5 (Material Particulado de 2.5 micras) <br> - Monóxido de carbono (CO)                                            |
| **Valores de Referencia ECA Aire**          | - PM10: 100 µg/m³ (promedio diario) <br> - PM2.5: 50 µg/m³ (promedio diario) <br> - CO: 10 mg/m³ (promedio de 8 horas)                                                 |
| **Ubicación del Dispositivo**               | Instalado en un poste fijo en Chicla, permitiendo una medición continua en áreas estratégicas de la ciudad.                                                            |
| **Conectividad**                            | Transmisión de datos vía Wi-Fi hacia una plataforma en línea accesible al público.                                                                                      |
| **Plataforma de Datos**                     | - Proporciona la concentración de los contaminantes en tiempo real. <br> - Envía alertas cuando se exceden los límites según ECA Aire.                                  |
| **Alertas de Exceso de Contaminación**      | Notificaciones cuando los niveles de PM10, PM2.5 y CO superan los valores máximos permisibles establecidos por la normativa.                                            |
| **Análisis Estadístico de Contaminantes**   | Gráficos que muestran la variación de contaminantes a lo largo del tiempo, basados en ciclos de medición según el ECA Aire (promedios diarios, períodos de 8 horas).    |
| **Ciclos de Medición**                      | Definidos según los tiempos de referencia establecidos por el ECA Aire (diarios o por períodos de 8 horas para CO).                                                    |
| **Accesibilidad a la Plataforma**           | - Datos accesibles para cualquier ciudadano de Chicla mediante dispositivos con conexión a internet (móviles, ordenadores, tablets).                                     |
| **Almacenamiento de Datos**                 | Los datos se almacenan para permitir análisis históricos y generar reportes detallados sobre la evolución de la calidad del aire.                                       |
| **Aplicación para Políticas Públicas**      | Apoya la implementación de políticas de salud y medio ambiente a nivel local, proporcionando datos fiables y en tiempo real para la toma de decisiones.                 |

## MODELADO 3D

# Componentes


<img src="https://github.com/nardyliz12/Proyectos_Para_Ingenieria_1/blob/main/Informes%20de%20laboratorio/Entregables_4/Vista%20explosiva.png" alt="Imagen" width="300"/>


<img src="https://github.com/nardyliz12/Proyectos_Para_Ingenieria_1/blob/main/Informes%20de%20laboratorio/Entregables_4/componentes.png" alt="Imagen" width="300"/>

### Caja Principal
### Dispositivo de monitoreo 

