int potent_pin = A2; // have to do an analog read se we'll use analog pin(A0...A5)
int buzz_pin = 2;
int dt = 1000;
float potent_read_value;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potent_pin,INPUT);
  pinMode(buzz_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potent_read_value = analogRead(potent_pin);
  Serial.println(potent_read_value);
  if(potent_read_value > 1000){
      digitalWrite(buzz_pin,HIGH);
      delay(dt);
      digitalWrite(buzz_pin,LOW);
      delay(dt);
      digitalWrite(buzz_pin,HIGH);
      delay(dt);
      digitalWrite(buzz_pin,LOW);
      delay(dt);
      digitalWrite(buzz_pin,HIGH);
      delay(dt);
      digitalWrite(buzz_pin,LOW);
      delay(dt);
      digitalWrite(buzz_pin,HIGH);
      delay(dt);
      digitalWrite(buzz_pin,LOW);
      delay(dt);
    }
}
