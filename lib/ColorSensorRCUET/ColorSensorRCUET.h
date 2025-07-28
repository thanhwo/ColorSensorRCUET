#ifndef COLOR_SENSOR_RCUET_H
#define COLOR_SENSOR_RCUET_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_TCS34725.h>

class ColorSensorRCUET {
public:
  bool begin();
  void getRGB(uint8_t &r, uint8_t &g, uint8_t &b);

private:
  Adafruit_TCS34725 tcs = Adafruit_TCS34725(
    TCS34725_INTEGRATIONTIME_50MS,
    TCS34725_GAIN_4X
  );
};

#endif
