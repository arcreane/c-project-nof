#pragma once
#include "Jeu.h"

class Bouclier : virtual public Jeu
{
protected:
	int state; // état du bouclier (valeur entre 0 et 10, si = 0 alors le bouclier disparait)
public:
	virtual void parrer() = 0; // Fonction qui annihile une attaque OU la renvoie ?
	virtual void augmenterPV() = 0; // Fonction qui augmente les PV ? 
};

