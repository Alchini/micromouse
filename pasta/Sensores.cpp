#include "Sensores.h"

#define THRESHOLD 700;

SharpIR sensoresIV(SharpIR::GP2Y0A41SK0F, A2);
QTRSensors qtrA;

//--------------------------------------------------------------------------------------

void Sensores::ativaSensores(){
  const uint8_t quantosSensores = 2;                                               
  uint16_t vetorDeSensores[]{A0,A1};
  qtrA.setTypeAnalog();
  qtrA.setSensorPins((const uint8_t[]){A0, A1}, quantosSensores);
}

void Sensores::testaQTR(){
  Serial.print("SenE: ");
  Serial.print(analogRead(A0));
  Serial.print(" | ");
  Serial.print("SenD: ");
  Serial.println(analogRead(A1));
}

int Sensores::testaIR(){
  return sensoresIV.getDistance();
}
