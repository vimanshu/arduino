int photo_pin = A0; // have to do an analog read se we'll use analog pin(A0...A5)
float photo_read_value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(photo_pin,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  photo_read_value = analogRead(photo_pin);
 
  Serial.println((photo_read_value*5)/1023);
  delay(1000);
  
}
