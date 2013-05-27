const int buzzer = 11;

void setup()  {
  
  
}

void loop()  {
  buzz();  
}

void buzz()  {
  analogWrite(buzzer, 20);
  delay(100);
  analogWrite(buzzer, 0);
  delay(100);
}
