#pragma once
#include "Bouclier.h"
#include "Avion.h"
#include "raylib.h"


// But: avion qui ne peut pas tirer de missile mais qui 
// peut se protéger en tant que bouclier
class Helicoptere : public Avion, Bouclier
{
public:
	Helicoptere(Vector2 pos, int pv, int state);
	void parrer() override;
	void augmenterPV() override;
};

