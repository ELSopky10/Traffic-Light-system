// C++ code
//
void setup()
{
  
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  pinMode(12,OUTPUT);
  digitalWrite(12,HIGH);
  pinMode(8,OUTPUT);
  digitalWrite(8,HIGH);
}

void loop()
{
  digitalWrite(13,HIGH);
  delay(1500);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(8,HIGH);
  delay(1500);
  digitalWrite(8,LOW);
  delay(1500);
  
  
  
}