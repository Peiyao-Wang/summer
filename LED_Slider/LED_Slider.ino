int x=2000;
int y=1000;
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
 x=analogRead(A0);
  y=x/2;
  digitalWrite(2,HIGH);
  delay(x);
  digitalWrite(2,LOW); pinMode(2,OUTPUT);
  digitalWrite(2,HIGH);
  delay(x);
 digitalWrite(2,LOW);
  delay(y);
   digitalWrite(6,HIGH);
   delay(x);
   digitalWrite(6,LOW);
  delay(x);
   digitalWrite(7,HIGH);
   delay(x);
   digitalWrite(7,LOW);
  delay(y);
  pinMode(3,OUTPUT);
  digitalWrite(3,HIGH);
   delay(y);
  digitalWrite(3,LOW);
  delay(y);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
   delay(x);
   digitalWrite(4,LOW);
  delay(y);
    digitalWrite(9,HIGH);
   delay(x);
   digitalWrite(9,LOW);
  delay(y);
   digitalWrite(5,HIGH);
   delay(x);
   digitalWrite(5,LOW);
  delay(x);
  
   digitalWrite(8,HIGH);
   delay(x);
   digitalWrite(8,LOW);
  delay(y);
 
}
// Faya-Nugget Sample Code 
// Date: 2015/1/26
// Module Name: Slide Potentiometer
// Module Number: #ngt-ot-sldvr-1A
// Description: Detect the resistance value of slide potentiometer (0~10K) and show in series monitor.  
//              Note1: the tolerance of the resistrance is ignored.
//              Note2: the resistance is measured between GND and Ouput Terminal (terminal C)

// Wiring: Module Pin ==> Arduino Pin
//                VCC ==> A
//                  B ==> A0
//                GND ==> C




