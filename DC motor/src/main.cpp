#include <Arduino.h>


void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);

}

void loop()
{
  analogWrite(5,255);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  
}