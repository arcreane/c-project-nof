#pragma once
#include "raylib.h"
#include "Jeu.h"

// CLASSE ABSTRAITE
// non instanciable
class Projectile : public Jeu
{
protected:
	int myPVitesse;
public:
	// Fonction en +
	virtual void exploser() = 0;

	// getter / setter en +
	int getMyVitesse() { return myPVitesse; };
	void setMyPVitesse(int vitesse);
};

