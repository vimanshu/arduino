int redPin = 2;
int greenPin = 8;
int bluePin = 7;
String msg = " input 1-> red, 2-> green, 3-> blue: ";
String userInput;
void setup() {
  Serial.begin(9600);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  
}

void loop() {
 Serial.println(msg); // ask 
 while(Serial.available() == 0){
  // wait for me boy.
  }

  userInput = Serial.readString();
  //Serial.println(color);

  
  if(userInput == "red"){
     // turn red on
     digitalWrite(redPin,HIGH);
     digitalWrite(greenPin,LOW);
     digitalWrite(bluePin,LOW);
    }
    if(userInput == "green"){
     // turn green on
     digitalWrite(redPin,LOW);
     digitalWrite(greenPin,HIGH);
     digitalWrite(bluePin,LOW);
    }
    if(userInput == "blue"){
     // turn blue on
     digitalWrite(redPin,LOW);
     digitalWrite(greenPin,LOW);
     digitalWrite(bluePin,HIGH);
    }
    
      
}
