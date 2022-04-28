#include "AvionDeChasse.h"
#include "raylib.h"


void AvionDeChasse::update() {

    if (IsKeyPressed(KEY_RIGHT))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion1_droite.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_LEFT)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion1_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }

    else if (IsKeyPressed(KEY_UP)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion1_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
    else if (IsKeyPressed(KEY_DOWN)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion1_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        UnloadImage(myImage);
    }
}

void AvionDeChasse::virtualizePlane()
{
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    UnloadImage(myImage);

    // Initialiser position
    myPos = { 350.0f, 350.0f };
}
