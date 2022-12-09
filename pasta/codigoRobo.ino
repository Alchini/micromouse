
#include "KroneBot.h"
#include <SoftwareSerial.h>

#define rxPin 11
#define txPin 12
SoftwareSerial bluetooth(rxPin,txPin);

Kronezinho roboKrone;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bluetooth.begin(9600);
  roboKrone.ativaSensores();
}

void loop() {
  // put your main code here, to run repeatedly:
//  roboKrone.testaQTR();
  Serial.println(roboKrone.testaIR());
//  roboKrone.testaMotor(200,200);
//  roboKrone.direitaComLinha();
  roboKrone.esquerdaComBarreira();
}
