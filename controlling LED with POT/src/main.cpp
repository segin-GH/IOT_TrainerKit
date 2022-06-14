# include <Arduino.h>

int ledPin = 9;
int potPin = A0;
int potVal;
int brightness; //  use value from 0 to 255

void setup()
{
  pinMode(potPin,INPUT);
  pinMode(ledPin,INPUT);
}

void loop()
{
  potVal = analogRead(potVal);
  brightness = map(potVal,0 ,1023 ,0 ,255);
  analogWrite(ledPin,brightness);

}