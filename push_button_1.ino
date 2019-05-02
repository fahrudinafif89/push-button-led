const int PBT = 2;
const int LED = 13;

int PBTstate = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(PBT, INPUT);
  pinMode(LED, OUTPUT);

  digitalWrite(PBT, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  PBTstate = digitalRead(PBT);
  if(digitalRead (PBT) == LOW)
    {     
     digitalWrite(LED, HIGH);   
    }
    
  else{digitalWrite(LED, LOW);}

}
