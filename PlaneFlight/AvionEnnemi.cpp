#include <iostream>
#include "AvionEnnemi.h"
#include "Projectile.h"
#include "Missile.h"


AvionEnnemi::AvionEnnemi(Vector2 pos, int pv, int vitProj) {
    this->myPos = pos;
    this->myPv = pv;
    this->myImage = LoadImage("Pictures/avion2_droite.png");
    this->myTexture = LoadTextureFromImage(myImage);
    this->myVitProj = vitProj;
    //this->myProjectiles = new Projectile[nbProj];
}

AvionEnnemi::~AvionEnnemi() {
    UnloadImage(myImage);
}

void AvionEnnemi::update() {
    if (IsKeyPressed(KEY_B))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion2_droite.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = true;
        haut = false;
        bas = false;
        gauche = false;

       
    }
    else if (IsKeyPressed(KEY_C)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion2_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        haut = false;
        bas = false;
        gauche = true;
    }

    else if (IsKeyPressed(KEY_F)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion2_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        haut = true;
        bas = false;
        gauche = false;
    }
    else if (IsKeyPressed(KEY_V)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion2_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        haut = false;
        bas = true;
        gauche = false;
    }

    /*if (IsKeyPressed(KEY_SPACE) && droite == true) {
        Missile* p1 = new Missile(1);
        p1->setMyPos({ myPos.x+1,myPos.y });
        p1->setMyImage(LoadImage("Pictures/Bomb_droite.png"));
        p1->setMyTexture(LoadTextureFromImage(p1->getMyImage()));
        p1->setMyPVitesse(1);
        p1->virtualize();
        DrawTextureV(p1->getMyTexture(), p1->getMyPos(), WHITE);

    }*/

   /* else if (IsKeyPressed(KEY_SPACE)) {
        for (int i = 0; i< 5; i++) {
            if (myProjectiles[i] == NULL) {
                continue;
            } else{
               tirerProjectile(myProjectiles[i]); // implémenter exploser dans tirerProjectile()
        }

        }
    }

    /* Rajouter un if isKeyPressed(KEY_SPACEBAR) {
            (1) virtualization 1er Projectile du tab myProjectiles}
            (2)update image {
                    si position AvionEnnemi = PositionProjectile : alors Explosion
            }
    
    */
};

void AvionEnnemi::virtualize(){
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    //UnloadImage(myImage);

}

/*void AvionEnnemi::tirerProjectile(Projectile* p, int i, Avion a1) {


    p->update(a1);
    if (a1.getMyPos().x == p->getMyPos().x && a1.getMyPos().y == p->getMyPos().y) { // Si les coordonnées du projectile correspondent à celle de l'avion cible alors exlposion
        p->exploser(); }
    
    // on set notre projectile sur null dans notre tableau de recharge pour signifier qu'il est utilisé
    myProjectiles[i] = NULL;
}*/