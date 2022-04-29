#pragma once
#include "raylib.h"
#include "Jeu.h"

class Projectile : public Jeu
{
private:
	int myPVitesse;
public:
	//Constructeur
	Projectile(int vitesseP);

	// Fonction en +
	void exploser();
	void virtualize() override;
	void update() override;

	// getter / setter en +
	int getMyVitesse() { return myPVitesse; };
	void setMyPVitesse(int vitesse);
};

