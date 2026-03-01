#include <Arduino.h>

#define SENSOR_PIN 34     // AO del TCRT5000 -> GPIO34 (ADC1)
#define FS 20
#define TS_MS (1000 / FS)

unsigned long lastSample = 0;

int readAveragedADC(uint8_t n = 8) {
  long sum = 0;
  for (uint8_t i = 0; i < n; i++) {
    sum += analogRead(SENSOR_PIN);
    delayMicroseconds(300); // pequeña separación
  }
  return (int)(sum / n);
}

void setup() {
  Serial.begin(9600);
  analogReadResolution(12);   // 0–4095
  delay(500);

  Serial.println("t_ms,s");   // encabezado CSV
}

void loop() {
  unsigned long now = millis();
  if (now - lastSample >= TS_MS) {
    lastSample = now;

    int s = readAveragedADC(8); // lectura más estable

    Serial.print(now);
    Serial.print(",");
    Serial.println(s);
  }
}