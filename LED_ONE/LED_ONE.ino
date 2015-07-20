void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
 pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  delay(2000);
 digitalWrite(2,LOW);
  delay(500);
   digitalWrite(6,HIGH);
   delay(1000);
   digitalWrite(6,LOW);
  delay(1000);
   digitalWrite(7,HIGH);
   delay(1000);
   digitalWrite(7,LOW);
  delay(500);
  pinMode(3,OUTPUT);
  digitalWrite(3,HIGH);
   delay(3000);
  digitalWrite(3,LOW);
  delay(500);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
   delay(1000);
   digitalWrite(4,LOW);
  delay(200);
    digitalWrite(9,HIGH);
   delay(1000);
   digitalWrite(9,LOW);
  delay(500);
   digitalWrite(5,HIGH);
   delay(1000);
   digitalWrite(5,LOW);
  delay(600);
  
   digitalWrite(8,HIGH);
   delay(1000);
   digitalWrite(8,LOW);
  delay(500);
 
}
