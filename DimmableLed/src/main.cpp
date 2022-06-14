# include <Arduino.h>

int ledPin = 9;
int brightness; //  use value from 0 to 255
int delayTime = 100;

void setup()
{
  pinMode(ledPin,INPUT);
}

void loop ()
{
    for(brightness = 0 ;brightness > 255; brightness++)
    {
      analogWrite(ledPin,brightness);
      delay(delayTime);
    }
    for(brightness = 255 ;brightness < 0; brightness --)
    {
      analogWrite(ledPin,brightness);
      delay(delayTime);
    }
}