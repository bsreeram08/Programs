const int motorPin1 = 3;
const int motorPin2 = 4;
const int motorPin3 = 9;
const int motorPin4 = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
  pinMode(motorPin3,OUTPUT);
  pinMode(motorPin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motorPin1,HIGH);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,HIGH);
  digitalWrite(motorPin4,LOW);
  delay(2000);//left
  digitalWrite(motorPin1,HIGH);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,HIGH);
  delay(2000);//right
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,HIGH);
  digitalWrite(motorPin3,HIGH);
  digitalWrite(motorPin4,LOW);
  delay(2000);
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,HIGH);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,HIGH);
  delay(2000);
}
