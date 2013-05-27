// Created by Eric Nunez and Osiel Torres
// Created on 01/22/2013
//Sketch: Laser
const int ButtonPin = 7;
const int LEDPin = 12;
const int LEDPin2 = 11;
const int LEDPin3 = 10;
const int LEDPin4 = 9;
const int LEDPin5 = 8;
int ButtonState = LOW;

void setup ()    {
  pinMode(LEDPin, OUTPUT);
  pinMode(LEDPin2, OUTPUT);
  pinMode(LEDPin3, OUTPUT);
  pinMode(LEDPin4, OUTPUT);
  pinMode(LEDPin5, OUTPUT);
  pinMode(ButtonPin, INPUT);
  
}


void loop()    {
  ButtonState = digitalRead(ButtonPin);
  if (ButtonState == HIGH)  {
    digitalWrite (LEDPin, HIGH);
    delay (100);
    digitalWrite (LEDPin2, HIGH);
    delay (200);
    digitalWrite (LEDPin3, HIGH);
    delay (200);
    digitalWrite (LEDPin4, HIGH);
    delay (200);
    digitalWrite (LEDPin5, HIGH);
  }
else{
   digitalWrite(LEDPin, LOW);
   digitalWrite(LEDPin2, LOW);
   digitalWrite(LEDPin3, LOW);
   digitalWrite(LEDPin4, LOW);
   digitalWrite(LEDPin5, LOW);
}
}
