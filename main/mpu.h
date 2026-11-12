#ifndef MPU_H
#define MPU_H

#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include "globals.h"

void setupMpu();
void collectMpuData();

#endif