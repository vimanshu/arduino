int readPin = A3;
float V2 = 0;
float readVal;
int delayTime = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // analog read in v2

  readVal = analogRead(readPin);
  V2 = (5*readVal)/1023;
  Serial.println(V2); // print the V2.
  delay(delayTime);
  

}
