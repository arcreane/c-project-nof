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

bool Avion::getDroite()
{
    return droite;
}
bool Avion::getGauche()
{
    return gauche;
}
bool Avion::getHaut()
{
    return haut;
}
bool Avion::getBas()
{
    return bas;
}

void Avion::setDroite(bool param) {
    droite = param;
}
void Avion::setGauche(bool param){
    gauche = param;
}
void Avion::setHaut(bool param){
    haut = param;
}
void Avion::setBas(bool param){
    bas = param;
}





/*void Avion::tirerProjectile(Projectile* p, int i, Avion a1)
{
}*/
