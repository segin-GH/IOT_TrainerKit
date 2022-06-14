# include <Arduino.h>

int ldrPin = A0;
int relayPin = 2;
int ldrVal;

void setup()
{
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  pinMode(relayPin,OUTPUT);

}

void loop()
{
  ldrVal = analogRead(ldrPin);

  if (ldrVal <= 250)
  {
    digitalWrite(relayPin,LOW);
    Serial.println("Light OFF");
  }
  else if (ldrVal >= 1000 )
  {
    digitalWrite(relayPin,HIGH);
    Serial.println("Light ON");
  }
}