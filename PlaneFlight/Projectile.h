#pragma once
#include "raylib.h"
#include "Jeu.h"
#include "Avion.h"

class Projectile : public virtual Jeu
{
private:
	int myPVitesse;
public:
	//Constructeur
	Projectile();
	Projectile(int vitesseP);

	// Fonction en +
	virtual void exploser() = 0;
	void virtualize() override;
	void update() override;

	// getter / setter en +
	int getMyVitesse() { return myPVitesse; };
	void setMyPVitesse(int vitesse);
};

