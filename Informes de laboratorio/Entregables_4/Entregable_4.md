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

| **Característica**                | **Descripción**                                                                                                                                                   |
|------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **Área de Aplicación**        | El proyecto se implementa en la ciudad de Chicla, Perú, como un caso de estudio industrial orientado al monitoreo ambiental. Se centra en la medición de PM10, PM2.5 y CO, contaminantes clave según la normativa peruana. |
| **Puesta en Servicio**        | La instalación en un poste fijo permite una operación continua, minimizando la intervención humana. El dispositivo se activa de manera automática al conectarse a una red Wi-Fi preestablecida, facilitando la integración en entornos urbanos sin modificar su infraestructura. |
| **Comodidad Operativa**       | El acceso a los datos a través de una plataforma web abierta permite a los usuarios locales y a las autoridades municipales monitorear la calidad del aire en tiempo real, sin necesidad de equipos especializados. Esta facilidad mejora la integración social del proyecto. |
| **Servicio y Funcionalidad**  | El dispositivo ofrece monitoreo continuo de la calidad del aire, con notificaciones automáticas en caso de exceder los niveles de contaminantes permitidos por el ECA Aire. Los datos son representados en gráficos que permiten evaluar la tendencia y variación en ciclos definidos, optimizando las decisiones operativas y de salud pública. |
| **Fiabilidad Técnica**        | Los sensores (PMS5003, MQ7, KY-038) han sido seleccionados por su precisión y robustez para ambientes exteriores. Estos dispositivos siguen un ciclo de calibración periódica, asegurando la exactitud en los datos transmitidos. La comunicación vía Wi-Fi permite una rápida transmisión y minimiza las fallas por interferencias de señal. |
| **Accesibilidad y Adaptabilidad** | La plataforma de monitoreo es accesible a cualquier usuario con conexión a internet, lo que convierte este sistema en una herramienta industrial replicable. Se puede adaptar para otras ciudades industriales que requieran una solución de monitoreo de bajo costo y alta eficacia. |
| **Mantenimiento y Operabilidad** | El mantenimiento del dispositivo está orientado a una operación prolongada, con tareas específicas como la limpieza de los sensores y la verificación de la conectividad, minimizando costos operativos y tiempos de inactividad. Esto asegura la longevidad y fiabilidad del sistema. |
| **Normativa Aplicada**        | El sistema se implementa conforme a las regulaciones peruanas, específicamente el D.S. N° 003-2017-MINAM (ECA Aire), lo que garantiza que los datos generados cumplan con los estándares de calidad del aire aplicables a nivel nacional. |
| **Impacto en la Comunidad y Operaciones**   | El proyecto tiene un impacto directo en la comunidad industrial de Chicla, permitiendo una mayor conciencia sobre la contaminación y mejorando la toma de decisiones en materia de políticas ambientales y de salud ocupacional. Se espera que las alertas en tiempo real también mejoren la reacción ante episodios críticos de contaminación. |
| **Escalabilidad y Viabilidad** | El modelo es escalable a otras ciudades con necesidades similares de monitoreo ambiental. Además, su estructura modular permite incorporar nuevos contaminantes o adaptar las mediciones a otros entornos industriales. La viabilidad técnica y económica lo convierte en una solución aplicable a nivel nacional o en sectores industriales específicos. |

##Especificaciones técnicas

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



