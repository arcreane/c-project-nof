#include "Projectile.h"


Projectile::Projectile(){}

Projectile::Projectile(int vitesse)
{
    myPVitesse = vitesse;
}

/*void Projectile::exploser() {}*/

/*void Projectile::virtualize()
{
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    //UnloadImage(myImage);

    // Initialiser position
    
}

void Projectile::update(int vitesse)
{ 
    // if (IsKeyPressed(KEY_SPACE))
    // si Avion position vers la gauche: alors myImage= Bomb vers la gauche
    // si Avion position vers la droite: alors myImage= Bomb vers la droite
    // ...
    // ...
    /*if (a1.getMyPos().x == getMyPos().x && a1.getMyPos().y == getMyPos().y) { // Si les coordonnées du projectile correspondent à celle de l'avion cible alors exlposion
        exploser();
    }
    
}
*/

void Projectile::setMyPVitesse(int vitesse) {
	myPVitesse = vitesse;
}
Projectile::~Projectile()
{
}

;