int x;
int randomNumber = 0;
const int buttonPin = 8;
int buttonState = LOW;
int lastbuttonState = LOW;
const int LED = 7;
const int LED2 = 6;
const int LED3, = 5;

void setup()  {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop()  {
  randomNumber = random(10);
  buttonState = digitalRead(buttonPin); //Check ButtonPin and stores the value to buttonState
  if (buttonState != lastbuttonState)  {  //If ButtonState is NOT = to last button state
    if (buttonState == LOW){
      led();
      delay(500);
    Response();
  } 
  
  lastbuttonState = buttonState;
  
   
}
}
void Response ()  {
  
  if (randomNumber == 1){
 Serial.println ("Yes");
  }
 if (randomNumber == 2){
 Serial.println ("No");
}
 if (randomNumber == 3)
 Serial.println ("Possibly");{
 }
 if (randomNumber == 4)
 Serial.println ("Ask again later");{
 }
 if (randomNumber == 5)
 Serial.println ("You may rely on it");{
 }
 if (randomNumber == 6)
 Serial.println ("Outlook not so good");{
 }
 if (randomNumber == 7)
 Serial.println ("Don't count on it");{
 }
 if (randomNumber == 8)
 Serial.println ("As I see it, yes");{
 }
 if (randomNumber == 9)
 Serial.println ("Better not tell you now");{
 }
 if (randomNumber == 10)
 Serial.println ("Cannot predict now");{
 }
}

void led ()  {
  digitalWrite(LED,HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  delay(75);
  digitalWrite(LED, LOW):
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3, LOW);
  delay(60);
  digitalWrite(LED2, LOW);
  digitalWrite(LED, LOW);
  digitalWrite(LED3, HIGH
  delay(20);
  digitalWrite(LED, LOW);
 digitalWrite(LED2, HIGH);
 digitalWrite(LED3, LOW);
 delay(50);
 digitalWrite(LED2, HIGH);
  digitalWrite(LED, LOW);
  digitalWrite(LED3, LOW);
  delay(100);
  digitalWrite(LED, HIGH;
 digitalWrite(LED2, HIGH);
 digitalWrite (LED3, HIGH);
 delay(100);
 digitalWrite(LED, LOW);
 digitalWrite(LED2, LOW);
 digitalWrite(LED3, LOW);
 delay(100);
 digitalWrite(LED, HIGH);
 digitalWrite(LED2, HIGH);
 digitalWrite(LED3, HIGH);
 
}

  

