#pragma once
#include "Jeu.h"

class Nuage: public Jeu
{
public:
	// Constructeur
	Nuage();

	// Fonctions en +
	void afficher();
	void defiler();

	// Destructeur
	~Nuage();
};

