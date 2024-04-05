#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
}
void reSet()
{
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  digitalWrite(10, 0);
  digitalWrite(11, 0);
}
void loop()
{
  reSet();
  if (Serial.available() > 0)
  {
    int command = Serial.read();
    if (command == 97)
    {
      digitalWrite(8, 1);
      digitalWrite(11, 1);
      delay(120);
    }
    else if (command == 98)
    {
      digitalWrite(9, 1);
      digitalWrite(10, 1);
      delay(90);
    }
    else if (command == 99)
    {
      digitalWrite(9, 1);
      digitalWrite(11, 1);
      delay(40);
    }
    else if (command == 100)
    {
      digitalWrite(10, 1);
      digitalWrite(8, 1);
      delay(40);
    }
  }
}