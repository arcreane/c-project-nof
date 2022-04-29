#pragma once
#include "raylib.h"
#include "Jeu.h"

// CLASSE ABSTRAITE
// non instanciable
class Avion :virtual public Jeu {
protected:
    int myPv;
public:
    // constructeur
    Avion();
    //Avion(Vector2 pos, int pv); 


    // getter/ setter en +
    int getPv();
    void setPv(int i);

    // Destructeur
    ~Avion();
};

