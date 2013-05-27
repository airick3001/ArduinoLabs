int x;
int randomNumber = 0;
const int buttonPin = 8;
int buttonState = LOW;
int lastbuttonState = LOW;
const int LED = 7;
const int LED2 = 6;

void setup()  {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop()  {
  randomNumber = random(10);
  buttonState = digitalRead(buttonPin); //Check ButtonPin and stores the value to buttonState
  if (buttonState != lastbuttonState)  {  //If ButtonState is NOT = to last button state
    if (buttonState == LOW){
      led();
      delay(700);
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
  digitalWrite(LED2, LOW);
  digitalWrite(LED, HIGH);
  delay(20);
  digitalWrite(LED, LOW);
 digitalWrite(LED2, HIGH);
 delay(50);
 digitalWrite(LED2, LOW);
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
 digitalWrite(LED2, HIGH);
 delay(200);
 digitalWrite(LED, HIGH);
 digitalWrite(LED2, HIGH);
 delay(1200);
 digitalWrite(LED, LOW);
 digitalWrite(LED2, LOW);
}

  

