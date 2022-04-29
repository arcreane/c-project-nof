#pragma once
#include "Bouclier.h"
#include "Avion.h"
#include "raylib.h"


// But: avion qui ne peut pas tirer de missile mais qui 
// peut se prot�ger en tant que bouclier
class Helicoptere : public Avion, Bouclier
{
public:
	// Constructeurs
	Helicoptere(Vector2 pos, int pv, int state);

	// Fonction h�rit�es de Bouclier
	void parrer() override;
	void augmenterPV() override;

	// Fonctions h�rit�es de Jeu>Avion
	void update() override;
	void virtualize() override;

	// Destructeurs
	~Helicoptere();

};