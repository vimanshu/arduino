float readValue;
int readPin = A3;
int delayTime = 700;
float volts = 0;

int bluePin = 2; 
void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(bluePin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // analog read in v2
  readValue = analogRead(readPin);
  volts = (5*readValue)/1023 ;
  Serial.println(volts);
  //digitalWrite(bluePin, HIGH);
  if(volts > 4.00){
      digitalWrite(bluePin, HIGH);
      Serial.println("voltage above 4.00, keep it low my nigg."); 
    }
    else{
      digitalWrite(bluePin, LOW);
      }
  delay(delayTime);
  

  
  

}
