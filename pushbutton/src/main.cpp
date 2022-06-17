#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);

}

void loop()
{

 int val =  digitalRead(2);
 Serial.println(val);

}
