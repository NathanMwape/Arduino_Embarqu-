int PhotoresistancePin = A0;  // Déclaration broche photorésistance LDR
int Luminosite = 0; // Variable de la luminosité
int Seuil_Jour = 450; // Variable de luminosité seuil pour le jour
int Seuil_Nuit = 350; // Variable de luminosité seuil pour la nuit
int RelaisPin = 7;  // Déclaration broche relais 5V/230V
boolean mem_lumiere = true;// Déclaration de la mémoire lumière
boolean Detecte_lumiere = false; // Déclaration variable détection lumière
boolean tempoActive = false;  // État d'activation de la tempo
unsigned long tempoDepart = 0;  // Temps à l'activation de la tempo
int Tempo_luminosite = 2000; // Temporisation luminosité 1 secondes = 1000ms

void setup() {
  Serial.begin(9600); 
  pinMode(RelaisPin, OUTPUT);
  }

void loop() {
  Luminosite = analogRead(PhotoresistancePin);
   if (Luminosite >= Seuil_Jour)
    {
      Detecte_lumiere = true;
    }
    if (Luminosite <= Seuil_Nuit)
    {
      Detecte_lumiere = false;
    }
      if (Detecte_lumiere != mem_lumiere) {
      tempoActive = true;
      tempoDepart = millis();
    }

    if (!Detecte_lumiere && tempoActive && ((millis() - tempoDepart) >= Tempo_luminosite))
    {
      digitalWrite(RelaisPin, HIGH);
      tempoActive = false;
      Serial.println("NUIT"); // Affichage sur le moninteur série du texte
    }
    mem_lumiere = Detecte_lumiere;
    if (Detecte_lumiere && tempoActive && ((millis() - tempoDepart) >= Tempo_luminosite))
    {
      digitalWrite(RelaisPin, LOW);
      tempoActive = false;
      Serial.println("JOUR"); // Affichage sur le moninteur série du texte
    }
    mem_lumiere = Detecte_lumiere;
}
