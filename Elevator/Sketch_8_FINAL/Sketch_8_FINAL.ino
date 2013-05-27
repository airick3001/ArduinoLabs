const int floorUpButton = 4;
const int floorDownButton = 3;
const int Buzzer = 11;
const int PinButton = 5;
const int LEDPin1 = 8;
const int LEDPin2 = 10;
const int LEDPin3 = 9;

int GO = 0;
int lastGO = 0; 
int floorNumber = 1;
int floorSelect = 1;
int buttonState = LOW; 
int lastButtonState = LOW; 
int UFButtonState = LOW;
int lastUFButtonState = LOW; 
int DFButtonState = LOW;
int lastDFButtonState = LOW;

void setup()  {
Serial.begin(9600);      
  pinMode(floorUpButton, INPUT);
  pinMode(floorDownButton, INPUT);
  pinMode(PinButton, INPUT);
  pinMode(Buzzer, OUTPUT);  
  pinMode(LEDPin1, OUTPUT); 
  pinMode(LEDPin2, OUTPUT);
  pinMode (LEDPin3, OUTPUT);
}

void loop() {
Serial.print(floorSelect);
Serial.print("\t");
Serial.println(floorNumber);
UpDown();
GoButton();
checkFloor();
}

void checkFloor()  {
  if(GO == 1)  {
  if(floorSelect > floorNumber)  {
    floorNumber++;
   delay(1000); 
  }
   else if(floorSelect < floorNumber)  {
    floorNumber--;
    delay(1000);
  }
   else if(floorSelect == floorNumber)  {
   digitalWrite(Buzzer,HIGH);
   digitalWrite(LEDPin1,HIGH);
   digitalWrite(LEDPin3,LOW);
   digitalWrite(LEDPin2, HIGH);

   delay(500);
 digitalWrite(Buzzer,LOW);
 
   digitalWrite(LEDPin1,LOW);
   digitalWrite(LEDPin3, HIGH);
   digitalWrite(LEDPin2, LOW);
   delay(1000);
   digitalWrite(Buzzer,LOW);
   digitalWrite(LEDPin1,LOW);
   digitalWrite(LEDPin3, LOW);
   digitalWrite(LEDPin2, LOW);
   delay(1000);
 GO = 0;
  
  
}
 }
 }

void  GoButton()  {
  buttonState = digitalRead(PinButton);
  if(buttonState != lastButtonState) {
    if(buttonState != LOW)  {
   GO = 1;
    }
  }
  lastButtonState = buttonState;
}

void UpDown() {
  UFButtonState = digitalRead(floorUpButton);
  if(UFButtonState !=lastUFButtonState)  {
    if (UFButtonState != LOW)  {
      floorSelect++;
    }
  }
  lastUFButtonState = UFButtonState;

  DFButtonState = digitalRead(floorDownButton);
  if(DFButtonState !=lastDFButtonState)  {
    if (DFButtonState != LOW)  {
      floorSelect--;
    }
  }
  lastDFButtonState = DFButtonState;
}
  
