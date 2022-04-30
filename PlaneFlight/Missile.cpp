#include "Missile.h"

Missile::Missile()
{
}

/*void Missile::exploser()
{
}*/

void Missile::update()
{
	myPos.x += getMyVitesse();
}

void Missile::virtualize()
{
	// Initialiser texture/image
	myTexture = LoadTextureFromImage(myImage);
}

Missile::~Missile()
{
}
