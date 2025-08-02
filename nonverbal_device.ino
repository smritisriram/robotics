void loop() {
 int currentValue = analogRead(sensorPin);
 //Serial.println(currentValue); //prints out the results of sensor

 if(count == 0 && currentValue== 0) {
  Serial.print("count=");
  Serial.println(count);
  t = millis();
  count = 1;
 }else if((millis()-t) < 10000 && count!= 0) {
  Serial.print("xcount=");
  Serial.println(count);
  count ++;
 }
 if(t!= 0 && (millis()-t)>10000) {
  if(count >= 100) {
    Serial.println("emercency");
    digitalWrite(ledPin4, LOW);
    delay(300);
    digitalWrite(ledPin4, HIGH);
    delay(1000);
    digitalWrite(ledPin4, LOW);
    delay(300);
  }
  else if(count >= 75) {
    Serial.println("medicine");
    digitalWrite(ledPin3, LOW);
    delay(300);
    digitalWrite(ledPin3, HIGH);
    delay(1000);
    digitalWrite(ledPin3, LOW);
    delay(300);
  }
  else if(count >= 50) {
    Serial.println("thirsty");
    digitalWrite(ledPin2, LOW);
    delay(300);
    digitalWrite(ledPin2, HIGH);
    delay(1000);
    digitalWrite(ledPin2, LOW);
    delay(300);
  }
  else if(count >= 25 && count > 0) {
    Serial.println("hungry");
    digitalWrite(ledPin1, LOW);
    delay(300);
    digitalWrite(ledPin1, HIGH);
    delay(1000);
    digitalWrite(ledPin1, LOW);
    delay(300);
  }

  t = 0;
  count = 0;
  //delay(1000);

 }
 

 delay(200);
}
