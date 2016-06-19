
int pin1 = 5;

int pin2 = 6;

int pin3 = 7;

int pin4 = 8;

int pin5 = 9;

int pin6 = 10;

int pin7 = 11;

int pin8 = 12;

void setup() {
  // initialize digital pin 13 as an output.
  //pinMode(13, OUTPUT);

pinMode(pin1,OUTPUT);
pinMode(pin1,OUTPUT);
digitalWrite(pin1,HIGH);

pinMode(pin2,OUTPUT);
digitalWrite(pin2,HIGH);

pinMode(pin3,OUTPUT);
digitalWrite(pin3,HIGH);

pinMode(pin4,OUTPUT);
digitalWrite(pin4,HIGH);

pinMode(pin5,OUTPUT);
digitalWrite(pin5,HIGH);

pinMode(pin6,OUTPUT);
digitalWrite(pin6,HIGH);

pinMode(pin7,OUTPUT);
digitalWrite(pin7,HIGH);

pinMode(pin8,OUTPUT);
digitalWrite(pin8,HIGH);

pinMode(13,OUTPUT);
  Serial.begin(9600);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for a second
  digitalWrite(13, LOW);
  delay(500);
  if(Serial.available()){
  char x = Serial.read();
  if(x == 'a'){
    digitalWrite(pin1,HIGH);
    }
  else if(x == 'b'){
    digitalWrite(pin1,LOW);
    }
  else if(x == 'c'){
    digitalWrite(pin2,HIGH);
    }
  else if(x == 'd'){
    digitalWrite(pin2,LOW);
    }
  else if(x == 'e'){
    digitalWrite(pin3,HIGH);
    }
  else if(x == 'f'){
    digitalWrite(pin3,LOW);
    }
  else if(x == 'g'){
    digitalWrite(pin4,HIGH);
    }
  else if(x == 'h'){
    digitalWrite(pin4,LOW);
    }
  else if(x == 'i'){
    digitalWrite(pin5,HIGH);
    }
  else if(x == 'j'){
    digitalWrite(pin5,LOW);
    }
  else if(x == 'k'){
    digitalWrite(pin6,HIGH);
    }
  else if(x == 'l'){
    digitalWrite(pin6,LOW);
    }
  else if(x == 'm'){
    digitalWrite(pin7,HIGH);
    }
  else if(x == 'n'){
    digitalWrite(pin7,LOW);
    }
  else if(x == 'o'){
    digitalWrite(pin8,HIGH);
    }
  else if(x == 'p'){
    digitalWrite(pin8,LOW);
    }
  }
  }
