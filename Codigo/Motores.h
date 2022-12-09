#pragma once

#include "MotorController.h"

class Motor{
  public:
    void testaMotor(int velocidadeEsquerda,int velocidadeDireita);
    void frente(int velocidade);
    void tras(int velocidade);
    void para();
    void direita(int velEsquerda, int velDireita);
    void esquerda(int velEsquerda, int velDireita);
};
