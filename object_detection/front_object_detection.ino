int M1a = 13;
int M1b = 12;

int M2a = 3;
int M2b = 2;

int IR = 7;
int signal;

void setup() {
  pinMode(M1a,OUTPUT);
  pinMode(M1b,OUTPUT);
  pinMode(M2a,OUTPUT);
  pinMode(M2b,OUTPUT);
  pinMode(IR,INPUT);
}

void forward() {
  digitalWrite(M1a,HIGH);
  digitalWrite(M1b,LOW);
  digitalWrite(M2a,HIGH);
  digitalWrite(M2b,LOW); 
}

void stop() {
  digitalWrite(M1a,LOW);
  digitalWrite(M1b,LOW);
  digitalWrite(M2a,LOW);
  digitalWrite(M2b,LOW);
}

void loop()
{
  signal = digitalRead (IR);
  if (signal==1);
  {
    forward();
  }
  else (signal==0);
  {
    stop();
  }
}
