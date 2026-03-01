#  Checklist de Reproducibilidad – U1A6

##  Preparación

- Conectar ESP32.
- Abrir PlatformIO.
- Cargar firmware correspondiente (v0.2 para versión final).

---

##  Configuración Serial

- Baudrate: 9600.
- Confirmar puerto COM correcto.

---

##  Node-RED

- Importar flows_U1A5.json.
- Presionar Deploy.
- Abrir Dashboard.

---

##  Verificación

✔ Las gráficas de s1 y s2 deben actualizarse cada ~50 ms.  
✔ El CSV debe crecer en tiempo real.  
✔ Los valores deben estar entre 0 y 4095.  
✔ El archivo final debe contener ≥300 filas.

---

##  Evidencia

- Confirmar presencia de capturas en `/docs`.
- Confirmar existencia de `/data/raw/U1A6_sample.csv`.