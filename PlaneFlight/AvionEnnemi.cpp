#include <iostream>
#include "AvionEnnemi.h"
#include "Projectile.h"


AvionEnnemi::AvionEnnemi(Vector2 pos, int pv, int vitProj) {
    this->myPos = pos;
    this->myPv = pv;
    this->myImage = LoadImage("Pictures/avion2_droite.png");
    this->myTexture = LoadTextureFromImage(myImage);
    this->myVitProj = vitProj;
    //this->myProjectiles = new Projectile[nbProj];
}

AvionEnnemi::~AvionEnnemi() {}

void AvionEnnemi::update() {
    if (IsKeyPressed(KEY_D))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion2_droite.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_Q)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion2_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }

    else if (IsKeyPressed(KEY_Z)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion2_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_S)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion2_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }

};

void AvionEnnemi::virtualize(){
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    UnloadImage(myImage);

    // Initialiser position
    myPos = { 150.0f, 750.0f };
}

void AvionEnnemi::tirerProjectile(Projectile* p){}