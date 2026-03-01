#  Metadata del Pipeline – U1A6

##  Sensores

- Tipo: Sensores IR reflectancia
- Canales: 2 (s1 y s2)
- Señal: Analógica

##  Muestreo

- Frecuencia: 20 Hz
- Periodo: 50 ms
- Resolución ADC: 12 bits (0–4095)

##  Telemetría

- Medio: Serial USB
- Baudrate: 9600
- Formato: CSV

##  Estructura del mensaje

```
timestamp_ms,s1,s2
```

##  Plataforma

- Microcontrolador: ESP32
- IDE: PlatformIO
- Visualización: Node-RED Dashboard

##  Procesamiento

- Registro de datos en CSV
- Calibración basada en captura de valores negro/blanco
- Cálculo de umbral por canal