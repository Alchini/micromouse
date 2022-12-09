#include "Motores.h"

  DCMotorController motorEsquerda = DCMotorController(5,3,4);
  DCMotorController motorDireita = DCMotorController(2,6,7);

void Motor::testaMotor(int velocidadeEsquerda,int velocidadeDireita){
  motorEsquerda.write(velocidadeEsquerda);
  motorDireita.write(velocidadeDireita);
}

void Motor::frente(int velocidade){
  motorEsquerda.write(velocidade);
  motorDireita.write(velocidade);  
}

void Motor::tras(int velocidade){  
  motorEsquerda.write(-velocidade);
  motorDireita.write(-velocidade);
}

void Motor::para(){
  motorEsquerda.brake();
  motorDireita.brake();  
}

void Motor::direita(int velEsquerda, int velDireita){
  motorEsquerda.write(velEsquerda);
  motorDireita.write(-velDireita);
}

void Motor::esquerda(int velEsquerda, int velDireita){
  motorEsquerda.write(-velEsquerda);
  motorDireita.write(velDireita);
}
