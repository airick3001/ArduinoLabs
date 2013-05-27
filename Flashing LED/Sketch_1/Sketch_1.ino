// Created by: Eric Nunez and Osiel Torres
// Date 1/15/2013
// Sketch: Sketch 1

void setup() {      // setup routine is run ONCE at the begining 
  pinMode(13, OUTPUT);
}

void loop() {       // loop routine repeats forever
  digitalWrite(13, HIGH); //High = on
  delay(500);                //Pauses the Arduino
  digitalWrite(13, LOW); //Low = off
  delay(600);
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
}
