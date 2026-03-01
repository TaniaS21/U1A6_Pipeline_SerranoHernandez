#  Bitácora – U1A6 Pipeline Integrado

## Entrada 1 – Inicio Telemetría
Se implementó lectura ADC con un sensor y envío por Serial. Se definió frecuencia de 20 Hz usando control con millis().

## Entrada 2 – Registro en Node-RED
Se configuró nodo serial y nodo CSV para guardar datos automáticamente.

## Entrada 3 – Validación de frecuencia
Se verificó incremento constante de timestamp (~50 ms).

## Entrada 4 – Integración segundo sensor
Se modificó firmware para agregar s2 y actualizar formato CSV.

## Entrada 5 – Dashboard gráfico
Se implementaron dos gráficas independientes en Node-RED para monitoreo en tiempo real.

## Entrada 6 – Calibración
Se agregaron botones para capturar negro y blanco, calculando umbral por canal.