#include "Helicoptere.h"

Helicoptere::Helicoptere(Vector2 pos, int pv, int state) {
    this->myPos = pos;
    this->myImage = LoadImage("Pictures/avion2_droite.png"); // Changer l'image
    this->myTexture = LoadTextureFromImage(myImage);
    this->myPv = pv;
    this->state = state;
}

Helicoptere::~Helicoptere() {}

void Helicoptere::augmenterPV() {
    if (myPv < 50) {
        while (myPv < myPv + 50)
            myPv += 1;
    }
    else {
        myPv = 100;
    }
};
void Helicoptere::parrer() {};
void Helicoptere::update() {

    if (IsKeyPressed(KEY_RIGHT))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion1_droite.png"); // Changer l'image
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_LEFT)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion1_gauche.png"); // Changer l'image
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }

    else if (IsKeyPressed(KEY_UP)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion1_haut.png"); // Changer l'image
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_DOWN)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion1_bas.png"); // Changer l'image
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
};
void Helicoptere::virtualize() {
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    UnloadImage(myImage);

    // Initialiser position
    myPos = { 350.0f, 350.0f };
};
