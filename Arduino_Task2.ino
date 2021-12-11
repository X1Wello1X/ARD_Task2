
int num_persons=0;
int LDR1= A0;
int LDR2= A1;
int Led =12;
int Bazz= 13;
void setup()
{
  pinMode(LDR1,INPUT);
  pinMode(LDR2,INPUT);
  pinMode(Led,OUTPUT);
  pinMode(Bazz,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
 int LDR1_value = analogRead(LDR1);
 int LDR2_value = analogRead(LDR2);
 if(LDR1_value <= 300)
 {
  num_persons ++;
  Serial.println(num_persons);
 }
  delay(1000);
  if(LDR2_value<=300)
 {
  num_persons --;
  Serial.println(num_persons);
 }
  //delay(1000);
   if(num_persons>5)
 {
  tone(Bazz,400);
  digitalWrite(Led,HIGH);
  delay(500);
  digitalWrite(Led,LOW);
 }
 else{
  noTone(Bazz);
  digitalWrite(Led,LOW);
 }
 
 
  
  
}
