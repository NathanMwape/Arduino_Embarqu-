int ledrouge1 = 2;
int ledvert1 = 3;
int ledorange1 = 4;

int ledrouge2 = 5;
int ledvert2 = 6;
int ledorange2 = 8;

int c1;
int c2;
int c3;
int c4;

void setup() {
  // 
pinMode(ledrouge1,OUTPUT);
pinMode(ledvert1,OUTPUT);
pinMode(ledorange1,OUTPUT);
pinMode(ledrouge2,OUTPUT);
pinMode(ledvert2,OUTPUT);
pinMode(ledorange2,OUTPUT);

  c1 = 14;
  c2 = 16;
  c3 = 20;
  c4 = 17;
  
  //affichage dans le moniteur serie
  
  Serial.begin(9600);
  
  Serial.println(c1);
  Serial.println(c2);
  Serial.println(c3);
  Serial.println(c4);
  
  if((c1+c2) > (c3+c4)){

    digitalWrite(ledorange1,HIGH);
    digitalWrite(ledrouge2,HIGH);
    delay(500);
    digitalWrite(ledvert1,HIGH);
    digitalWrite(ledorange1,LOW);
    digitalWrite(ledrouge1,LOW);
    
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,LOW);
    delay(5000);
    
  }else{ 
    digitalWrite(ledorange2,HIGH);
    digitalWrite(ledrouge1,HIGH);
    delay(500);
    digitalWrite(ledvert1,LOW);
    digitalWrite(ledrouge1,HIGH);
    digitalWrite(ledorange1,LOW);
    
    digitalWrite(ledrouge2,LOW);
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,HIGH);
    delay(5000);
  } 
}

void loop() {

}
