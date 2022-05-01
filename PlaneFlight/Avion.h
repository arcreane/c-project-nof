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
    bool droite = false;
    bool gauche = false;
    bool bas = false;
    bool haut = false;
    Missile* m1;

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

    bool getDroite();
    bool getGauche();
    bool getHaut();
    bool getBas();

    void setDroite(bool param);
    void setGauche(bool param);
    void setHaut(bool param);
    void setBas(bool param);

    // Destructeur
    ~Avion();
};

