//Title: Light Sensor
//Created by: Eric Nunez and Osiel Torres
//created on: 01/25/2013

int lightSense = 5;    //analog pin 5
int LedPin1 = 9;

void setup () {
  Serial.begin(9600);
  pinMode(LedPin1, OUTPUT); // analog OUTPUT
}

void loop() { 
  int val = analogRead (lightSense);
  Serial.println(val);
  val = constrain(val, 400, 750);
 
 int Led1Level =  map(val, 400, 750, 255, 0);//map(v, VStart, VEnd,SStart, SEnd)

  analogWrite(LedPin1, Led1Level);// (0 -255)

}
