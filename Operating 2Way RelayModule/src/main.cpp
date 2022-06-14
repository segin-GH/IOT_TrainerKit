#include <Arduino.h>

int relayOne = 2;
int relaytwo = 3;
int delayTime  = 1000;

void setup()
{
  pinMode(relayOne,INPUT);
  pinMode(relaytwo,INPUT);
}

void loop()
{
  digitalWrite(relayOne,HIGH);
  delay(delayTime);
  digitalWrite(relayOne,LOW);
  delay(delayTime);
  digitalWrite(relaytwo,HIGH);
  delay(delayTime);
  digitalWrite(relaytwo,LOW);
  delay(delayTime);
}