#include <Arduino.h>

#define MOIS_SENSOR_PIN 32

const int Range1 = 1960;
const int Range2 = 2477;
int soilMoistureValue = 0;

void setup() {
  Serial.begin(9600); 
}
void loop() {
  soilMoistureValue = analogRead(MOIS_SENSOR_PIN);
  Serial.println(soilMoistureValue);
  if (soilMoistureValue < Range1)
  {
    Serial.println("very Wet");
  }
  else if (Range1 <= soilMoistureValue && soilMoistureValue < Range2)
  {
    Serial.println("Wet");
  }
  else
  {
    Serial.println("Dry");
  }
  delay(100);
} 
