#pragma once
#include "raylib.h"
#include "Jeu.h"


class Projectile : virtual public Jeu
{
protected:
	int myPVitesse;
	bool isVisible = false;
public:
	//Constructeur
	Projectile();
	Projectile(int vitesseP);

	// Fonction en +

	//virtual void exploser() = 0;

	// getter / setter en +
	int getMyVitesse() { return myPVitesse; };
	void setMyPVitesse(int vitesse);

	bool getIsVisible() { return isVisible; };
	void setIsVisible(bool param);

	//Destructeur
	~Projectile();
};

