

# include <Arduino.h>

int ledPin = 13;
int delayTime = 1000;

void setup()
{
  pinMode(ledPin,INPUT);
}

void loop ()
{
  digitalWrite(ledPin,HIGH); 
  delay(delayTime);
  digitalWrite(ledPin,LOW);
  delay(delayTime);
}