#include "Missile.h"
#include<iostream>

Missile::Missile(int vitesse)
{
	this->setMyPVitesse(vitesse);
	this->myPos = { 0.0f , 0.0f };
	this->myImage = LoadImage("Pictures/Bomb_droite.png");
	this->myTexture = LoadTextureFromImage(myImage);
}

void Missile::exploser()
{
	std::cout << "J'explose";
}

void Missile::virtualize()
{
	// Initialiser texture/image
	myTexture = LoadTextureFromImage(myImage);

}

void Missile::update()
{


	myPos.x += getMyVitesse();
	//myPos.y += getMyVitesse();


}

Missile::~Missile()
{
}
