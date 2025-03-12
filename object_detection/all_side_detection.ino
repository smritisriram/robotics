int M1a = 12;
int M1b = 13;

int M2a = 3;
int M2b = 2;

int IR_front = 7;
int IR_right = 8;
int IR_left = 9;
int signal_front;
int signal_right;
int signal_left;

void setup() {
  pinMode(M1a,OUTPUT);
  pinMode(M1b,OUTPUT);
  pinMode(M2a,OUTPUT);
  pinMode(M2b,OUTPUT);
  pinMode(IR_front,INPUT);
  pinMode(IR_right,INPUT);
  pinMode(IR_left,INPUT);
  Serial.println(9600);
}

void forward() {
  digitalWrite(M1a,HIGH);
  digitalWrite(M1b,LOW);
  digitalWrite(M2a,HIGH);
  digitalWrite(M2b,LOW); 
}

void right() {
  digitalWrite(M1a,HIGH);
  digitalWrite(M1b,HIGH);
  digitalWrite(M2a,LOW);
  digitalWrite(M2b,LOW); 
}

void left() {
  digitalWrite(M1a,LOW);
  digitalWrite(M1b,LOW);
  digitalWrite(M2a,HIGH);
  digitalWrite(M2b,HIGH); 
}

void backward () {
  digitalWrite(M1a,LOW);
  digitalWrite(M1b,HIGH);
  digitalWrite(M2a,LOW);
  digitalWrite(M2b,HIGH); 
}

void stop() {
  digitalWrite(M1a,LOW);
  digitalWrite(M1b,LOW);
  digitalWrite(M2a,LOW);
  digitalWrite(M2b,LOW);
}

void loop() 
{
  signal_front = digitalRead (IR_front);
  signal_right = digitalRead (IR_right);
  signal_left = digitalRead (IR_left);
  Serial.println (digitalRead(signal_front));
  Serial.println (digitalRead(signal_right));
  Serial.println (digitalRead(signal_left));

  if (signal_front == 1) 
  { 
    if (signal_right == 1) 
    {
      if (signal_left == 1)
      {
        forward();
      }
      else if (signal_left == 0)
      {
          stop();
          delay(1000);
          backward();
          delay(2000);
      }
    
    }
    else if (signal_right == 0)
    {
      if (signal_left == 1)
      {
        stop();
        delay(1000);
        backward();
        delay(2000);
      }
      else if (signal_left == 0)
      {
        stop();
        delay(1000);
        backward();
        delay(2000);
      }
    }
  }

  else if (signal_front ==0)
  {
    if (signal_right == 1)
    {
      if (signal_left == 1)
      {
        stop();
        delay(1000);
        backward();
        delay(2000);
      }
      else if (signal_left == 0)
      {
        stop();
        delay(1000);
        backward();
        delay(1000);
        right();
        delay(2000);
      }
    }
    else if (signal_right == 0)
    {
      if (signal_left == 1)
      {
        stop();
        delay(1000);
        backward();
        delay(1000);
        left();
        delay(2000);
      }
      else if (signal_left == 0)
      {
        stop();
      }
    }
  }
}





//front___right___left
// 0       0       0
// 1       1       1

// 1       0       0
// 0       1       0
// 0       0       1

// 1       1       0
// 1       0       1
// 0       1       1








