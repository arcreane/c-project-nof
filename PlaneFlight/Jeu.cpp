#include "Jeu.h"
#include "raylib.h"

void Jeu::setMyPos(Vector2 pos1) {
    myPos = pos1;
}


void Jeu::setMyImage(Image image1) {
    myImage = image1;
    UnloadImage(image1);
}

void Jeu::setMyTexture(Texture2D texture1) {
    myTexture = texture1;
    UnloadImage(myImage);
}