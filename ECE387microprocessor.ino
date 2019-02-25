//Haixu Dong
//ECE 387 Prerequesite Microprocessor.
//Description: uses a microprocessor (Arduino) and blinks an external LED to SOS.
//Video Demonstration: https://www.youtube.com/watch?v=vJ8TJMWekT8


int led = 7;

void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  S(); O(); S();
  delay(1000);  
}

void S()
{
  for (int i=0; i <= 2; i++){
    digitalWrite(led,HIGH);
    delay(250);
    digitalWrite(led,LOW);
    delay(250);
  }
  delay(500);
}

void O()
{
  for (int i=0; i <= 2; i++){
    digitalWrite(led,HIGH);
    delay(400);
    digitalWrite(led,LOW);
    delay(400);
  }
  delay(500);
}
