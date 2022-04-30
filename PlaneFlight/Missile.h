#pragma once
#include "Projectile.h"


class Missile : public Projectile
{
public:
	// Constructeur
	Missile();
	Missile(int vitesse);

	//Fonctions héritées
	//void exploser() override;
	void update() override;
	void virtualize() override;

	// Destructeur
	~Missile();
};

