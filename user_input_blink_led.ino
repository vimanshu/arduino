int blinks;
String msg = "How many blinks do you want: ";
int bluePin = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // start the serial monitor
  pinMode(bluePin,OUTPUT); // pin selected for output
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg); // ask
  while(Serial.available() == 0){
       // just to halt your program
       // waiting... for response
    }
    blinks = Serial.parseInt();
    for(int i =0 ; i<blinks; i++){
          digitalWrite(bluePin,HIGH);
          delay(200);
          digitalWrite(bluePin,LOW);
          delay(200);
      }
}
