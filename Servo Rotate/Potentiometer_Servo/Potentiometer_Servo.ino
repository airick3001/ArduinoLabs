#include <Servo.h>

Servo servo1;

int pot = 0;
int val;

void setup()  {
  servo1.attach(9);
}

void loop()  {
  val = map (analogRead(pot), 0, 1023, 0, 179);
  servo1.write(val);
}
