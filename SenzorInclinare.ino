

const int senzorInclinare = 4;
const int ledV = 5;
const int ledR = 3;
void setup(){
   pinMode (senzorInclinare,INPUT);
   pinMode (ledV, OUTPUT);
   pinMode (ledR, OUTPUT);
}
void loop(){

   if (digitalRead(senzorInclinare) == HIGH){
      digitalWrite(ledV,HIGH);
      digitalWrite(ledR,LOW);
   }
   else {
    digitalWrite(ledR,HIGH);
    digitalWrite(ledV,LOW);
   }
}
