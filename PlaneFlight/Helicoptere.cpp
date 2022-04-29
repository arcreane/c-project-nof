#include "Helicoptere.h"

Helicoptere::Helicoptere(Vector2 pos, int pv, int state) {
    this->myPos = pos;
    this->myImage = LoadImage("Pictures/avion2_droite.png");
    this->myTexture = LoadTextureFromImage(myImage);
    this->myPv = pv;
    this->state = state;
};
void Helicoptere::augmenterPV() {};
void Helicoptere::parrer() {};
