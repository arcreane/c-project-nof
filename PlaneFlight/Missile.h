#pragma once
#include "Projectile.h"
#include "raylib.h"

class Missile : public Projectile
{
public:
	// constructeur
	Missile(int vitesse);

	// Fonction
	void exploser() override;
	void virtualize() override;
	void update() override;

	// Destructeur
	~Missile();
};

