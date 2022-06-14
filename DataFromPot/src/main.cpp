# include <Arduino.h>

int potPin = A0;
int potVal;

void setup()
{
  pinMode(potPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potPin);
  Serial.print("PotVal = ");
  Serial.println(potVal);

}