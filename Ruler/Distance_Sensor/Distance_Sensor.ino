//Created by: Eric Nunez, Osiel Torres
//Created on: 03/08/2013
//Sketch: Distance Sensor
const int Sensor = 5;    //Analog pin A5
const int LEDPin = 12;
const int LEDPin2 = 11;
const int LEDPin3 = 10;
const int LEDPin4 = 9;
const int LEDPin5 = 8;
int dist;

void setup()  {
  Serial.begin(9600);
   pinMode(LEDPin, OUTPUT);
  pinMode(LEDPin2, OUTPUT);
  pinMode(LEDPin3, OUTPUT);
  pinMode(LEDPin4, OUTPUT);
  pinMode(LEDPin5, OUTPUT);
}

void loop()  { 
  dist = map(analogRead(Sensor), 12, 243, 6, 267); // 12 = 6"  x = y"
  Serial.println(dist); 
  // Maxbotix Distance = 6" - 254"
  if (dist>=63)  {
    digitalWrite(LEDPin, HIGH);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3,LOW);
    digitalWrite(LEDPin4, LOW);
  }
 else if (dist>=57)  {
    digitalWrite(LEDPin, LOW);
    digitalWrite(LEDPin2, HIGH);
    digitalWrite(LEDPin3, LOW);
    digitalWrite(LEDPin4, LOW);
}
 else if (dist>=31)  {
   digitalWrite(LEDPin, LOW);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3, HIGH);
    digitalWrite(LEDPin4, LOW);
}
else if (dist>=13)  {
   digitalWrite(LEDPin, LOW);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3, LOW);
    digitalWrite(LEDPin4, HIGH);

}
{
void rightfowrard ()
    digitalWrite(LEDPin, LOW);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3, HIGH);
    digitalWrite(LEDPin4, LOW);
}

void leftfowrard
    digitalWrite(LEDPin, HIGH);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3,LOW);
    digitalWrite(LEDPin4, LOW);
  }

void leftbackward
    digitalWrite(LEDPin, HIGH);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3,LOW);
    digitalWrite(LEDPin4, LOW);

void rightreverse
    digitalWrite(LEDPin, LOW);
    digitalWrite(LEDPin2, LOW);
    digitalWrite(LEDPin3, LOW);
    digitalWrite(LEDPin4, HIGH);
