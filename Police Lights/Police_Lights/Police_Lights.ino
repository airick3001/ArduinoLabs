//Created by Eric Nunez Osiel Torres
//Created on 1/16/2013
//Sketch: Police Lights

void setup()   {
 pinMode(12, OUTPUT);//Red LED
 pinMode(11, OUTPUT);//Green LED
}


void loop()    {
  digitalWrite(12, HIGH);//Red LED On
  delay(100);
  digitalWrite(12, LOW);//Red LED off
  digitalWrite(11, HIGH);//Green LED on
  delay(100);
  digitalWrite(11, LOW);//Green LED off

}
