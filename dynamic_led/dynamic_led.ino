int ledrouge1 = 2;
int ledvert1 = 3;
int ledorange1 = 4;

int ledrouge2 = 8;
int ledvert2 = 9;
int ledorange2 = 10;

// declaration de capteur 
int c1;
int c2;
int c3;
int c4;
int capteur1;
int capteur2;

void setup() {
  //  initialisation des variables en OUTPUT
pinMode(ledrouge1,OUTPUT);
pinMode(ledvert1,OUTPUT);
pinMode(ledorange1,OUTPUT);
pinMode(ledrouge2,OUTPUT);
pinMode(ledvert2,OUTPUT);
pinMode(ledorange2,OUTPUT);

}

void loop() {
    //vitesse de communication(vitesse de modulation du signal)
    Serial.begin(9600);
    // Utilisation de la fonction RANDOM 
    c1 = random(1,10);
    c2 = random(1,10);
    c3 = random(1,10);
    c4 = random(1,10);
  
    capteur1 =  c1 + c2;
    capteur2 =  c3 + c4;

    //affichage dans le moniteur serie

    Serial.print(c1);
    Serial.print(" + ");
    Serial.print(c2);
    Serial.print(" = ");
    Serial.println(capteur1);
    Serial.print(c3);
    Serial.print(" + ");
    Serial.print(c4);
    Serial.print(" = ");
    Serial.println(capteur2);
  
  if(capteur1 > capteur2){
    
    Serial.println("=============route 1==================");
    digitalWrite(ledvert1,HIGH);
    digitalWrite(ledorange1,LOW);
    digitalWrite(ledrouge1,LOW);
    
    digitalWrite(ledrouge2,HIGH);
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,LOW);
    delay(5000);
    
    digitalWrite(ledorange1,HIGH);
    digitalWrite(ledrouge2,HIGH);
    digitalWrite(ledrouge1,LOW);
    digitalWrite(ledvert1,LOW);
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,LOW);
    delay(1000);
   
    
  }else{ 
  
    Serial.println("=============route 2==================");
    digitalWrite(ledvert1,LOW);
    digitalWrite(ledrouge1,HIGH);
    digitalWrite(ledorange1,LOW);
    
    digitalWrite(ledrouge2,LOW);
    digitalWrite(ledorange2,LOW);
    digitalWrite(ledvert2,HIGH);
    delay(5000);
    digitalWrite(ledorange2,HIGH);
    digitalWrite(ledrouge1,HIGH);
    digitalWrite(ledvert1,LOW);
    digitalWrite(ledvert2,LOW);
    digitalWrite(ledorange1,LOW);
    digitalWrite(ledrouge2,LOW);
    delay(1000);
    
  } 

}
