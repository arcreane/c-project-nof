#pragma once
#include "raylib.h"
#include "Jeu.h"
#include "Projectile.h"
#include <iostream>
#include "Missile.h"

// CLASSE ABSTRAITE
// non instanciable
class Avion :virtual public Jeu {
protected:
    int myPv;
    int myVitProj; // vitesse projectile

public:
    // Constructeur
    Avion();
    //Avion(Vector2 pos, int pv, int vitProj);

    // Fonctions:
    //virtual void const tirerProjectile(Projectile* myProjectiles, int i, Avion a1) = 0;
    //void update() override;
    //void virtualize() override;

    // getter/ setter en +
    int getPv();
    void setPv(int i);

    // Destructeur
    ~Avion();
};

