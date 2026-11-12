#include "utils.h"

float map(float in, float inMin, float inMax, float outMin, float outMax) {
  return (in - inMin) / (inMax - inMin) * (outMax - outMin) + outMin;
}
