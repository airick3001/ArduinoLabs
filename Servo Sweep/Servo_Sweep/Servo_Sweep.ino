#include <Servo.h>

Servo servo1;

void setup()  {
  servo1.attach(9);
}


void loop()  {
  servo1.write(90);
  delay(100);
  servo1.write(0);

}
