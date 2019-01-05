const int motorPin1 = 3;
const int motorPin2 = 4;
const int motorPin3 = 9;
const int motorPin4 = 10;
const int trigPin = 6;
const int echoPin = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin1,OUTPUT);
  pinMode(motorPin2,OUTPUT);
  pinMode(motorPin3,OUTPUT);
  pinMode(motorPin4,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(9600);
}
int i=-1;
long duration;
int distance=100;
int arr[]={1,1,1};
int left=0,right=0;
void foreward()
{
    while(distance>10)
    {
      
      digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,HIGH);
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,HIGH);
    Serial.println("Foreward");
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=duration*0.034/2;
    Serial.println(distance);
    if(distance<10)
    {
      leftf();
    }
    }
    
   
}
void rightf()
{
    if(right==0){
    digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,HIGH);
    digitalWrite(motorPin3,HIGH);
    digitalWrite(motorPin4,LOW);
    Serial.println("RIGHT");
    right=1;
    delay(2000);
    }
     distance=100;
    while(distance>10)
    {
      digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,HIGH);
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,HIGH);
       digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=duration*0.034/2;
    Serial.println(distance);
    if(distance<10)
    {
      backward();
    }
    }
   
}
void leftf()
{
  if(left==0){
  digitalWrite(motorPin1,HIGH);
    digitalWrite(motorPin2,LOW);
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,HIGH);
    Serial.println("LEFT");
    left=1;
    delay(2000);
  }
    distance=100;
    while(distance>10)
    {
      digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,HIGH);
    digitalWrite(motorPin3,LOW);
    digitalWrite(motorPin4,HIGH);
       digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration=pulseIn(echoPin,HIGH);
    distance=duration*0.034/2;
    Serial.println(distance);
    if(distance<10)
    {
      rightf();
    }
    }
    
}
void backward()
{
    while(1){
      digitalWrite(motorPin1,HIGH);
    digitalWrite(motorPin2,LOW);
    digitalWrite(motorPin3,HIGH);
    digitalWrite(motorPin4,LOW);;
    Serial.println("BACKWARD");}
}
void loop() {
  // put your main code here, to run repeatedly:
    foreward();
}
