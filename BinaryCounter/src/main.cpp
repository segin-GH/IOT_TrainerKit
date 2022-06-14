# include <Arduino.h>

int led1 = 10;
int led2 = 11;
int led3 = 12;
int led4 = 13;

int delayTime = 1000;

void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop()
{
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);         // 0
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(delayTime);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);         // 1
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);        // 2
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(delayTime);


  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);        // 3
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(delayTime);


  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);         // 4
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  delay(delayTime);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);         // 5
  digitalWrite(led4,LOW);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);         // 6
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  delay(delayTime);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);         // 7
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);          // 8
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);          // 9 
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);          // 10
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);          // 11
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);           // 12
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);           // 13
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);          //14
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(delayTime);

  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);          //15
  digitalWrite(led4,HIGH);
  delay(delayTime);
}