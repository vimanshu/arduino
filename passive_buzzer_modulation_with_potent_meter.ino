int potent_pin = A2; // have to do an analog read se we'll use analog pin(A0...A5)
int buzz_pin = 2;
int dt;
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
  potent_read_value = (5*potent_read_value)/1023;
  dt = ((potent_read_value*9040)+300)/5;
  Serial.print("dt: ");
  Serial.println(dt);
  Serial.println(potent_read_value);
  digitalWrite(buzz_pin, HIGH);
  delayMicroseconds(dt);
  digitalWrite(buzz_pin, LOW);
  //delayMicroseconds(dt);
  
}
