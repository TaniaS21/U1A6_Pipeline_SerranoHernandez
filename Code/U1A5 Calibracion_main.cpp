#include <Arduino.h>

// ====== Pines ADC (ajusta a tu ESP32 y tu conexión) ======
// Recomendación: usa pines ADC1 para evitar conflictos con WiFi.
// ADC1 típicos: 32, 33, 34, 35, 36, 39 (depende del modelo)
const int PIN_S1 = 34;   // TCRT5000 #1 (AO)
const int PIN_S2 = 35;   // TCRT5000 #2 (AO)

// ====== Config ======
const uint32_t BAUD = 115200;
const uint32_t SAMPLE_MS = 100; // 10 Hz (cada 100 ms)

uint32_t lastSample = 0;

void setup() {
  Serial.begin(BAUD);
  delay(300);

  // Config ADC (opcional pero recomendado)
  // Rango típico ESP32: 0-4095 (12 bits)
  analogReadResolution(12);

  // Ajusta atenuación para ampliar rango (depende tu voltaje de sensor)
  // ADC_11db ~ hasta ~3.3V (aprox), suele ser lo más útil
  analogSetPinAttenuation(PIN_S1, ADC_11db);
  analogSetPinAttenuation(PIN_S2, ADC_11db);

  // Header (opcional)
  Serial.println("t_ms,s1,s2");
}

void loop() {
  uint32_t now = millis();
  if (now - lastSample >= SAMPLE_MS) {
    lastSample = now;

    int s1 = analogRead(PIN_S1);
    int s2 = analogRead(PIN_S2);

    // CSV compacto: t_ms,s1,s2
    Serial.print(now);
    Serial.print(",");
    Serial.print(s1);
    Serial.print(",");
    Serial.println(s2);
  }
}