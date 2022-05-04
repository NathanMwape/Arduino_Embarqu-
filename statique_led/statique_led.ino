int ledrouge1 = 2;
int ledvert1 = 3;
int ledorange1 = 4;

int ledrouge2 = 8;
int ledvert2 = 9;
int ledorange2 = 10;

int c1;
int c2;
int c3;
int c4;
int capteur1;
int capteur2;

void setup() {
  pinMode(ledrouge1,OUTPUT);
  pinMode(ledvert1,OUTPUT);
  pinMode(ledorange1,OUTPUT);
  pinMode(ledrouge2,OUTPUT);
  pinMode(ledvert2,OUTPUT);
  pinMode(ledorange2,OUTPUT);

  c1 = 1;
  c2 = 3;
  c3 = 1;
  c4 = 1;
  capteur1 = c1 + c2 ;
  capteur2 = c3 + c4 ;
  
  if(capteur1 > capteur2){

    digitalWrite(ledorange2,HIGH);
    digitalWrite(ledrouge1,HIGH);
    delay(1000);
    digitalWrite(ledvert1,HIGH);
    digitalWrite(ledorange1,LOW);
    digitalWrite(ledrouge1,LOW);
    
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,LOW);
    digitalWrite(ledrouge2,HIGH);
    
  }else{ 
    digitalWrite(ledorange1,HIGH);
    digitalWrite(ledrouge2,HIGH);
    delay(1000);
    digitalWrite(ledvert1,LOW);
    digitalWrite(ledrouge1,HIGH);
    digitalWrite(ledorange1,LOW);
    
    digitalWrite(ledrouge2,LOW);
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,HIGH);
  } 
}

void loop() {

}
