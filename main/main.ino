#include <Arduino.h>
#include "mpu.h"
#include "globals.h"

Adafruit_MPU6050 mpu;

void setup() {
  // Start Serial communication
  Serial.begin(115200);
  while (!Serial)
    delay(10);

  setupMpu();
}

void loop() {
  //collectMpuData();
  delay(500);
}
