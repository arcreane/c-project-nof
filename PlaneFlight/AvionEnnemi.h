#pragma once
#include "Avion.h"
#include "Projectile.h"

class AvionEnnemi : public Avion {
public:
	// constructeur
	AvionEnnemi(Vector2 pos, int pv);

	// Fonctions héritées de Jeu
	void update() override;
	void virtualize() override;
	// Fonction en +
	//void tirer(Projectile p);

	// Destructeur
	~AvionEnnemi();
};

