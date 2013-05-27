//Created by Eric Nunez and Osiel Torres
//Created on 01/17/2013
//Sketch:The Button 
const int ButtonPin = 7;
const int LEDPin = 12;
int ButtonState = LOW;    //ButtonState stores ButtonPin value

void setup()      {
  pinMode(LEDPin, OUTPUT);// LEDPin
  pinMode(ButtonPin, INPUT); //ButtonPin


}


void loop()       {
  ButtonState = digitalRead(ButtonPin);
  if(ButtonState == HIGH) {        //If statement check to see if it's true
    digitalWrite(LEDPin, HIGH);
  }
else{
  digitalWrite(LEDPin, LOW);
  }
}
