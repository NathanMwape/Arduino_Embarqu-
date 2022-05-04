#include <Servo.h>

Servo monServo;

const int trig = 2;
const int echo = 3;
long duree;
int distance;

void setup() {
  //  initialisation du broche du servomoteur support port 9 and 10
  monServo.attach(9);

  //  initialisation de broches du capteur
  pinMode(trig, OUTPUT);//configuration du port trigger  comme SORTIE
  digitalWritQe(trig, LOW);
  pinMode(echo, INPUT);// configuration du port echo comme ENTREE
  Serial.begin(9600);//demarage de la communication serie
  Serial.println("le capteur ultrasonic affichage de la distance");
  
}

void loop() {
    //Emission du signal de duree de 10 secondes 
    digitalWrite(trig, LOW);
    delayMicroseconds(5);
    digitalWrite(trig,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    //ecoute de l'echo
    duree = pulseIn(echo, HIGH);
  
  // Calcul de la distance
    if(distance == duree*0.034/2){
    // on tourne le servomoteur a 90 degre 5 secondes
      monServo.write(100);
    }else{
      monServo.write(0);//positionnement du moteur a 0 degre
      //allumage des LEDS
    }
  
  //affichage de la distance dans le moniteur serie
  Serial.print("distance : ");
  Serial.print(distance);
  Serial.println("cm");
  
}
