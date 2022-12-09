#pragma once

#include "Motores.h"
#include "Sensores.h"

  class Kronezinho: public Motor, public Sensores{
  public:
    Motor motor;
    Sensores sensor;
  public:
    void esquerdaComBarreira();
    void direitaComLinha();
};
