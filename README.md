#  U1A6 – Pipeline Ciberfísico con Trazabilidad y Reproducibilidad

##  Descripción General

Este repositorio integra la evolución de un sistema de adquisición y visualización de datos utilizando sensores de línea conectados a un ESP32.

El proyecto muestra la transición desde una telemetría básica (U1A4) hasta un sistema con dos sensores, dashboard gráfico y calibración (U1A5), demostrando trazabilidad mediante versionado en Git.

---

##  Evolución del Sistema

###  v0.1 – Telemetría básica (U1A4)
- 1 sensor de línea.
- Lectura ADC.
- Envío por Serial (9600 baudios).
- Registro en CSV desde Node-RED.

###  v0.2 – Dashboard y calibración (U1A5)
- 2 sensores (s1 y s2).
- Gráficas en tiempo casi real.
- Botones para capturar negro/blanco.
- Cálculo de min, max y umbral.
- Registro final ≥300 muestras.

---

##  Flujo del Pipeline Final

```text
Sensores IR (s1, s2)
        ↓
ESP32 (ADC 12 bits)
        ↓
Serial 9600
        ↓
Node-RED (Parseo + Dashboard)
        ↓
Archivo CSV
```

---

##  Parámetros Técnicos

| Parámetro | Valor |
|------------|--------|
| Plataforma | ESP32 |
| ADC | 12 bits (0–4095) |
| Frecuencia de muestreo | 20 Hz |
| Periodo | 50 ms |
| Comunicación | Serial 9600 |
| Canales | 2 |

---

##  Estructura del Repositorio

- `/code/U1A4_telemetria/` → Versión inicial
- `/code/U1A5_dashboard_calibracion/` → Versión evolucionada
- `/data/raw/` → CSV final (≥300 muestras)
- `/data/processed/` → Parámetros de calibración
- `/docs/` → Evidencia visual

---

##  Formato del CSV

Campos:

- `t_ms`
- `s1`
- `s2`

Ejemplo:
```
9550,3453,4095
```

---

##  Resultado

Se logró un sistema reproducible de adquisición y calibración de sensores, con documentación, versionado y evidencia estructurada.

## Evidencia de ejecución
Se incluyen capturas del dashboard activo, fragmento del CSV y flujo de Node-RED.