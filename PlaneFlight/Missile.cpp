#include "Missile.h"

Missile::Missile()
{
}

Missile::Missile(int vitesse, Vector2 pos)
{
	myPVitesse = vitesse;
	this->myPos = pos;
	this->myImage = LoadImage("Pictures/Bomb_droite.png");

}

/*void Missile::exploser()
{
}*/

void Missile::update()
{
	myPos.x += getMyVitesse();
	
}

/*void Missile::updateMissile(Vector2 pos) {
	this->myPos = pos;
	this->myPos.x += getMyVitesse();

}*/

void Missile::virtualize()
{
	// Initialiser texture/image
	myTexture = LoadTextureFromImage(myImage);

}

/*void Missile::setIsVisible(bool param)
{
	this->isVisible = param;
}*/

Missile::~Missile()
{
}
