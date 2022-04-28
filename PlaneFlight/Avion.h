#pragma once
#include "raylib.h"

class Avion {
protected:
    Vector2 myPos;
    int myPv;
    Image myImage;
    Texture2D myTexture;

public:
    // constructeur
    //Avion();
    Avion(Vector2 pos, int pv); 

    // Fonctions
    virtual void virtualizePlane() = 0;
    virtual void update() = 0;
    //void tirer();

    // getters 
    Vector2 getPosition();
    int getPv();
    Image getImage();   
    Texture2D getTexture();

    // setters
    void setPosition(Vector2 pos1);
    void setPv(int i);
    void setImage(Image image1);
    void setTexture(Texture myTexture1);

    // Destructeur
    ~Avion();
};

