#include "Missile.h"

Missile::Missile()
{
}

Missile::Missile(int vitesse)
{
	myPVitesse = vitesse;
	this->myPos = { 0.0f , 0.0f };
	this->myImage = LoadImage("Pictures/Bomb_droite.png");

}

/*void Missile::exploser()
{
}*/

void Missile::update()
{
	this->myPos.x += getMyVitesse();
	
}

void Missile::virtualize()
{
	// Initialiser texture/image
	myTexture = LoadTextureFromImage(myImage);

}

Missile::~Missile()
{
}
