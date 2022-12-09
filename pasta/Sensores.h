#pragma once

#include "QTRSensors.h"
#include "SharpIR.h"
#include "Arduino.h"

class Sensores{
  public:
  void ativaSensores();
  void testaQTR();
  int testaIR();
};
