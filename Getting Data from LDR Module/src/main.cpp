# include <Arduino.h>

int ldrPin = A0;
int ldrVal;

void setup()
{
  pinMode(ldrPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  ldrVal = analogRead(ldrPin);
  Serial.print("ldrVal = ");
  Serial.println(ldrVal);

}