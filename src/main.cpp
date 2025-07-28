#include <Arduino.h>
#include "ColorSensorRCUET.h"

ColorSensorRCUET myColor;

void setup() {
  Serial.begin(9600);
  if (!myColor.begin()) {
    Serial.println("Không tìm thấy cảm biến TCS34725!");
    while (1);
  }
  Serial.println("Cảm biến sẵn sàng.");
}

void loop() {
  uint8_t r, g, b;
  myColor.getRGB(r, g, b);
  Serial.print("R: "); Serial.print(r);
  Serial.print(" G: "); Serial.print(g);
  Serial.print(" B: "); Serial.println(b);
  delay(500);
}
