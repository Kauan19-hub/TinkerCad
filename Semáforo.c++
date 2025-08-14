int button = 2;
int vermelhoC = 13, amareloC = 12, verdeC = 11;
int vermelhoP = 10, verdeP = 9;

void setup()
{
  pinMode(vermelhoC, OUTPUT);
  pinMode(amareloC, OUTPUT);
  pinMode(verdeC, OUTPUT);
  pinMode(button, INPUT);
  pinMode(verdeP, OUTPUT);
  pinMode(vermelhoP, OUTPUT);
}

void loop()
{
  int buttonstart, i,j;
  
   digitalWrite(vermelhoP, HIGH);
   digitalWrite(verdeC, HIGH);
  
  for (j = 0; j <= 800;j++){
    delay(5);
    
    for (i=0;1 <= 5;i++){
      buttonstart = digitalRead(button);
      if (buttonstart == HIGH){
        delay(500);
        
        digitalWrite(verdeC, LOW);
        j = 999;
        
        break;
      }
    }
  }
  
   digitalWrite(verdeC, LOW);
   digitalWrite(amareloC, HIGH);
   delay(2500);
   digitalWrite(amareloC, LOW);
  
   digitalWrite(vermelhoC, HIGH);
   digitalWrite(vermelhoP, LOW);
   digitalWrite(verdeP, HIGH);
   delay(4000);
   digitalWrite(vermelhoC, LOW);
   digitalWrite(verdeP, LOW);
}