#include "Projectile.h"

Projectile::Projectile(int vitesse)
{
    myPVitesse = vitesse;
}

void Projectile::exploser(){}

void Projectile::virtualize()
{
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    UnloadImage(myImage);

    // Initialiser position
    
}

void Projectile::update()
{ 
    // if (IsKeyPressed(KEY_SPACE))
    // si Avion position vers la gauche: alors myImage= Bomb vers la gauche
    // si Avion position vers la droite: alors myImage= Bomb vers la droite
    // ...
    // ...
}

void Projectile::setMyPVitesse(int vitesse) {
	myPVitesse = vitesse;
};