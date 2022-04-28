#include "Avion.h"
#include <iostream>
#include <vector>
#include "raylib.h"


//Avion::Avion() {}

Avion::Avion(Vector2 pos, int pv) {
    this->myPos = pos;
    this->myPv = pv;
    this->myImage = LoadImage("Pictures/avion1_gauche.png");
    this->myTexture = LoadTextureFromImage(myImage);
}

Avion::~Avion()
{
}

/*void Avion::virtualizePlane() {

	// Initialiser texture/image
	myTexture = LoadTextureFromImage(myImage) ;
	UnloadImage(myImage); 

	// Initialiser position
	myPos = { 350.0f, 280.0f };

};

void Avion::update() {
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
};*/

//void Avion::tirer() {}

// getters + setters 
Vector2 Avion::getPosition() {
    return myPos;
};
void Avion::setPosition(Vector2 pos1) {
    myPos = pos1;
};

int Avion::getPv(){
    return myPv;
};
void Avion::setPv(int i){
    myPv = i;
};

Image Avion::getImage(){
    return myImage;
};
void Avion::setImage(Image image1){
    myImage = image1;
};

Texture2D Avion::getTexture(){
    return myTexture;
};
void Avion::setTexture(Texture texture1){
    myTexture = texture1;
};