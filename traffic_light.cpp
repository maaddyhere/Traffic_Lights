int Redled=8;     /*initialize the led pins*/
int Yellowled=9;
int Greenled=13;


void setup() {
  pinMode(Redled,OUTPUT);    /*set the pins as output*/
  pinMode(Yellowled,OUTPUT);
  pinMode(Greenled,OUTPUT);
}

void loop() {
  digitalWrite(Redled,HIGH);
  delay(1000);
  digitalWrite(Redled,LOW);

  digitalWrite(Yellowled,HIGH);
  delay(1000);
  digitalWrite(Yellowled,LOW);
  

  digitalWrite(Greenled,HIGH);
  delay(1000);
  digitalWrite(Greenled,LOW); 

}