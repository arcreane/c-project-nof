#include "AvionDeChasse.h"
#include "raylib.h"

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
        droite = true;
        gauche = false;
        haut = false;
        bas = false;
       
    }
    else if (IsKeyPressed(KEY_LEFT)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion1_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        droite = false;
        gauche = true;
        haut = false;
        bas = false;
    }

    else if (IsKeyPressed(KEY_UP)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion1_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        droite = false;
        gauche = false;
        haut = true;
        bas = false;
    }
    else if (IsKeyPressed(KEY_DOWN)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion1_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        droite = false;
        gauche = false;
        haut = false;
        bas = true;
    }
}

void AvionDeChasse::virtualize()
{
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    

}

