//Created by Eric Nunez & Osiel Torres
//Created: 02/01/2013
//Sketch: 7



const int buttonPin = 7;
const int LEDPin1 = 12;
const int LEDPin2 = 11;
const int LEDPin3 = 10;
const int LEDPin4 = 9;

int buttonState = LOW;
int lastbuttonState = LOW; //Store the LAST buttonState
int i = 0;                 //Counter

void setup()  {
  Serial.begin(9600);      //Begin communication with computer
  pinMode(LEDPin1, OUTPUT); //Declare LEDPin as digital OUTPUT
  pinMode(LEDPin2, OUTPUT);
  pinMode (LEDPin3, OUTPUT);
  pinMode (LEDPin4, OUTPUT);
  pinMode(buttonPin, INPUT); //Declare ButtonPin as digital INPUT

}

void loop() {
  buttonState = digitalRead(buttonPin); //Check ButtonPin and stores the value to buttonState
  if (buttonState != lastbuttonState)  {  //If ButtonState is NOT = to last button state
    i++;  //1 increment by 1
  } 
  lastbuttonState = buttonState;
  Serial.println(i); //Print value "1" to Serial Communication
  
  
  //................................................LED1
  if((i % 4 == 0) || (i % 8 ==0)|| (i % 20 ==0)|| (i % 24 ==0)) {    //if i is a multiple of 2
    digitalWrite  (LEDPin1, HIGH); 
  }
  else digitalWrite (LEDPin1, LOW);
 
 
  //................................................LED2
  if(((i % 6 == 0) && (i % 12 != 0) && (i % 18 != 0)|| (i % 24 ==0)) || (i % 8 ==0)|| (i % 14 ==0)|| (i % 22 ==0))  {    //if i is a multiple of 2
    digitalWrite (LEDPin2, HIGH); 
  }
  else digitalWrite (LEDPin2, LOW);
  
  
  //................................................LED3
  if((i % 10 == 0)&& (i % 20 != 0) || (i % 12 ==0)&& (i % 24 != 0) || (i % 16 ==0)|| (i % 14 ==0)){     //if i is a multiple of 2
    digitalWrite (LEDPin3, HIGH); 
  }
  else  digitalWrite (LEDPin3, LOW);
  
   //................................................LED4
  if((i % 18 == 0) || (i % 20 ==0) || (i % 22 ==0)|| (i % 24 ==0)){     //if i is a multiple of 2
    digitalWrite (LEDPin4, HIGH); 
  }
  else  digitalWrite (LEDPin4, LOW);


}







