// Created by Eric Nunez and Osiel Torres
// Created on 01/29/2013
//Sketch: Lab 5

int lightSense = 5;
int LEDPin1 = 11;
int LEDPin2 = 10;
int LEDPin3 = 9;
int LEDPin4 = 6;


void setup ()    {
  Serial.begin(9600);
  pinMode(LEDPin1, OUTPUT);
  pinMode(LEDPin2, OUTPUT);
  pinMode(LEDPin3, OUTPUT);
  pinMode(LEDPin4, OUTPUT);

  
}

void loop()    {
  int light = analogRead(lightSense);
  Serial.println(light);
  
  if (light > 900) {
  digitalWrite(LEDPin1, LOW);  
  digitalWrite(LEDPin2, LOW);
  digitalWrite(LEDPin3, LOW);
  digitalWrite(LEDPin4, LOW);
  
  }
  if (light < 800) {
  digitalWrite(LEDPin1, HIGH);  
  digitalWrite(LEDPin2, LOW);
  digitalWrite(LEDPin3, LOW);
  digitalWrite(LEDPin4, LOW);
  
  }
  
  if (light < 700) {
  digitalWrite(LEDPin1, HIGH);  
  digitalWrite(LEDPin2, HIGH);
  digitalWrite(LEDPin3, LOW);
  digitalWrite(LEDPin4, LOW);
  
}
 if (light < 600) {
  digitalWrite(LEDPin1, HIGH);  
  digitalWrite(LEDPin2, HIGH);
  digitalWrite(LEDPin3, HIGH);
  digitalWrite(LEDPin4, LOW);
  
 }
 if (light < 500) {
  digitalWrite(LEDPin1, HIGH);  
  digitalWrite(LEDPin2, HIGH);
  digitalWrite(LEDPin3, HIGH);
  digitalWrite(LEDPin4, HIGH); 
 }

if (light < 475) {
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  delay(100);
  
 
}
}
