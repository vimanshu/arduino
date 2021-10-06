float readValue;
int readPin = A3;
int bluePin = 3; 

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  readValue = analogRead(readPin);
  
  float brightness = (255*readValue)/1023;
  analogWrite(bluePin,brightness);

   delay(100);
 }

