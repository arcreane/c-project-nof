#pragma once
#include "Jeu.h"

class Ciel : public Jeu
{
public:
	// Constructeur
	Ciel();

	// Fonction en +
	void afficher();

	// Fonctions h�rit�es de Jeu
	void virtualize() override;
	void update() override;

	// Destructeur
	~Ciel();
};

