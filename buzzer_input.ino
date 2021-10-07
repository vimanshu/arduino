int buzzPin = 12;
int userInput;
String msg = "enter a number b/w 0-10: ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  
  while(Serial.available() == 0){
    // wait for me...
    }
   userInput = Serial.parseInt();
   if(userInput>10){
      digitalWrite(buzzPin,HIGH); //1
      delay(1000);
      digitalWrite(buzzPin,LOW); // 
      delay(1000);
      digitalWrite(buzzPin,HIGH); // 2
      delay(1000);
      digitalWrite(buzzPin,LOW); // 
      delay(1000);
      digitalWrite(buzzPin,HIGH); // 3
      delay(1000);
      digitalWrite(buzzPin,LOW); // 
      delay(1000);
      digitalWrite(buzzPin,HIGH); // 4
      delay(1000);
      digitalWrite(buzzPin,LOW); // 
      delay(1000);
      
    }
    

}
