#include "KroneBot.h"



void Kronezinho::esquerdaComBarreira(){
  int distanciaAtual;
  distanciaAtual = sensor.testaIR();
  if(distanciaAtual == 3){
      motor.esquerda(200,200);
  }else{
    motor.para();
  }
}

void Kronezinho::direitaComLinha(){
  if(analogRead(A1)<200){
    motor.direita(200, 200);
  }else{
    motor.para();
  }
}


  
