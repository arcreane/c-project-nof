#pragma once
#include "raylib.h"
#include "Jeu.h"


class Projectile : virtual public Jeu
{
protected:
	int myPVitesse;
public:
	//Constructeur
	Projectile();
	Projectile(int vitesseP);

	// Fonction en +

	//virtual void exploser() = 0;

	// getter / setter en +
	int getMyVitesse() { return myPVitesse; };
	void setMyPVitesse(int vitesse);

	//Destructeur
	~Projectile();
};