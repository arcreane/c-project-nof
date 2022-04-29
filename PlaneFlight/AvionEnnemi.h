#pragma once
#include "Avion.h"
#include "Projectile.h"

class AvionEnnemi : public Avion {
public:
	// constructeur
	AvionEnnemi(Vector2 pos, int pv , int vitProj);

	// Fonctions héritées de Jeu
	void update() override;
	void virtualize() override;
	// Fonction en +
	void tirerProjectile(Projectile* p) override;

	// Destructeur
	~AvionEnnemi();
};