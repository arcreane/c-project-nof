#pragma once
#include "Projectile.h"
#include "raylib.h"


class Missile : public Projectile
{
private:
	bool isVisible = false;
public:
	// Constructeur
	Missile();
	Missile(int vitesse, Vector2 pos);

	//Fonctions héritées
	//void exploser() override;
	void update() override;
	void virtualize() override;

	// getter + setter
	//bool getIsVisible() { return isVisible; };
	//void setIsVisible(bool param);

	// Fonctions en +
	//void updateMissile(Vector2 pos); // pos correspond aux coordonnées de l'avion qui tire

	// Destructeur
	~Missile();
};

