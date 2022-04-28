#include "AvionEnnemi.h"

void AvionEnnemi::update() {
    if (IsKeyPressed(KEY_B))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion2_droite.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_C)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion2_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }

    else if (IsKeyPressed(KEY_F)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion2_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_V)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion2_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }

};

void AvionEnnemi::virtualizePlane(){
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    UnloadImage(myImage);

    // Initialiser position
    myPos = { 150.0f, 750.0f };
}
