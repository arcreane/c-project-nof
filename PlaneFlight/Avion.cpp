#include "Avion.h"
#include <iostream>
#include <vector>
#include "raylib.h"
#include "Projectile.h"

/*Avion::Avion(Vector2 pos, int pv, int vitProj) {
    this->myPos = pos;
    this->myPv = pv;
    this->myVitProj = vitProj;

    // initialiser tableau de projectiles
    this->myProjectiles[0] = new Projectile(vitProj);
    this->myProjectiles[1] = new Projectile(vitProj);
    this->myProjectiles[2] = new Projectile(vitProj);
    this->myProjectiles[3] = new Projectile(vitProj);
}*/
Avion::Avion(){}
Avion::~Avion(){}

// getters + setters 

int Avion::getPv(){
    return myPv;
};
void Avion::setPv(int i){
    myPv = i;
}

void Avion::tirerProjectile(Projectile* p)
{
}
