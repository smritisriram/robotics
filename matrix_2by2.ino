// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void loop()
{
  digitalWrite(2,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(8,LOW);
  delay(1000); 
  digitalWrite(2,LOW);
  digitalWrite(7,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(2,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(3,LOW);
  digitalWrite(8,HIGH);
  delay(1000);
  
}
