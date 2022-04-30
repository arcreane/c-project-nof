#include "AvionDeChasse.h"
#include "raylib.h"
#include "Missile.h"

AvionDeChasse::AvionDeChasse() {};
AvionDeChasse::AvionDeChasse(Vector2 pos, int pv) {
    this->myPos = pos;
    this->myPv = pv;
    this->myImage = LoadImage("Pictures/avion1_gauche.png");
    this->myTexture = LoadTextureFromImage(myImage);
}
AvionDeChasse::~AvionDeChasse() {}

void AvionDeChasse::update() {

    if (IsKeyPressed(KEY_RIGHT))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion1_droite.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = true;
        haut = false;
        bas = false;
        gauche = false;
    }
    else if (IsKeyPressed(KEY_LEFT)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion1_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        haut = false;
        bas = false;
        gauche = true;
    }

    else if (IsKeyPressed(KEY_UP)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion1_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        haut = true;
        bas = false;
        gauche = false;
    }
    else if (IsKeyPressed(KEY_DOWN)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion1_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        haut = false;
        bas = true;
        gauche = false;
    }
}

void AvionDeChasse::virtualize()
{
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    //UnloadImage(myImage);

}

//void AvionDeChasse::tirerProjectile(Projectile* p, int i) {}
