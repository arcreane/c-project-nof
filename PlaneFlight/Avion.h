#pragma once
#include "raylib.h"
#include "Jeu.h"
#include "Projectile.h"
#include <iostream>

// CLASSE ABSTRAITE
// non instanciable
class Avion :virtual public Jeu {
protected:
    int myPv;
    int myVitProj; // vitesse projectile
    Projectile* myProjectiles[4]; // Tableau de projectile (comme une recharge)
public:
    // Constructeur
    Avion();
    //Avion(Vector2 pos, int pv, int vitProj);

    // Fonctions:
    virtual void tirerProjectile(Projectile* myProjectiles) = 0;

    // getter/ setter en +
    int getPv();
    void setPv(int i);

    // Destructeur
    ~Avion();
};

