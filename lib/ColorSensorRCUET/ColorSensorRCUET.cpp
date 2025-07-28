#include "ColorSensorRCUET.h"

bool ColorSensorRCUET::begin() {
  return tcs.begin();
}

void ColorSensorRCUET::getRGB(uint8_t &r, uint8_t &g, uint8_t &b) {
  uint16_t red, green, blue, clear;
  tcs.getRawData(&red, &green, &blue, &clear);

  if (clear == 0) {
    r = g = b = 0;
    return;
  }

  r = (uint32_t)red * 255 / clear;
  g = (uint32_t)green * 255 / clear;
  b = (uint32_t)blue * 255 / clear;
}
