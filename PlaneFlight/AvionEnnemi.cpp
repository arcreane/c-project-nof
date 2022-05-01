#include <iostream>
#include "AvionEnnemi.h"
#include "Projectile.h"
#include "Missile.h"


AvionEnnemi::AvionEnnemi(Vector2 pos, int pv, int vitProj) {
    this->myPos = pos;
    this->myPv = pv;
    this->myImage = LoadImage("Pictures/avion2_droite.png");
    this->myTexture = LoadTextureFromImage(myImage);
    this->myVitProj = vitProj;
    //this->myProjectiles = new Projectile[nbProj];
}

void AvionEnnemi::setMissile(Missile* missile)
{
    this->m1 = missile;
}

Missile* AvionEnnemi::getMissile()
{
    return this->m1;
}

AvionEnnemi::~AvionEnnemi() {
    UnloadImage(myImage);
}

void AvionEnnemi::update() {
    if (IsKeyPressed(KEY_B))
    {
        myPos.x += 10.0f;
        myImage = LoadImage("Pictures/avion2_droite.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);      
        droite = true;
        gauche = false;
        haut = false;
        bas = false;
    }
    else if (IsKeyPressed(KEY_C)) {
        myPos.x -= 10.0f;
        myImage = LoadImage("Pictures/avion2_gauche.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        gauche = true;
        haut = false;
        bas = false;
    }

    else if (IsKeyPressed(KEY_F)) {
        myPos.y -= 10.0f;
        myImage = LoadImage("Pictures/avion2_haut.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        gauche = false;
        haut = true;
        bas = false;
    }
    else if (IsKeyPressed(KEY_V)) {
        myPos.y += 10.0f;
        myImage = LoadImage("Pictures/avion2_bas.png");
        myTexture = LoadTextureFromImage(myImage);
        //UnloadImage(myImage);
        droite = false;
        gauche = false;
        haut = false;
        bas = true;
    }
    BeginDrawing();

    if (IsKeyPressed(KEY_SPACE) && droite == true) {
        Missile* m2 = new Missile(1, myPos);
        m2->setMyImage(LoadImage("Pictures/Bomb_droite.png"));
        m2->setMyTexture(LoadTextureFromImage(m2->getMyImage()));
        //p1->virtualize();
        //m1->setIsVisible(true);
        m2->update();
        DrawTextureV(m2->getMyTexture(), m2->getMyPos(), WHITE);
        //EndDrawing();
        m1 = m2;
        DrawTextureV(m1->getMyTexture(), m1->getMyPos(), WHITE);

    }
    else if (IsKeyPressed(KEY_SPACE) && gauche == true) {
        // Missile* m1 = new Missile(1, myPos);
        m1->setMyImage(LoadImage("Pictures/Bomb_gauche.png"));
        m1->setMyTexture(LoadTextureFromImage(m1->getMyImage()));
        m1->update();
        //m1->setIsVisible(true);
        //DrawTextureV(m1->getMyTexture(), m1->getMyPos(), WHITE);
        //EndDrawing();

    }
    if (IsKeyPressed(KEY_SPACE) && haut == true) {
        // Missile* m1 = new Missile(1, myPos);
        m1->setMyImage(LoadImage("Pictures/Bomb_haut.png"));
        m1->setMyTexture(LoadTextureFromImage(m1->getMyImage()));
        m1->update();
        //->setIsVisible(true);
        //DrawTextureV(m1->getMyTexture(), m1->getMyPos(), WHITE);
        //EndDrawing();

    }

    if (IsKeyPressed(KEY_SPACE) && bas == true) {
        //Missile* m1 = new Missile(1, myPos);
        m1->setMyImage(LoadImage("Pictures/Bomb_bas.png"));
        m1->setMyTexture(LoadTextureFromImage(m1->getMyImage()));
        m1->update();
        //m1->setIsVisible(true);
        //DrawTextureV(m1->getMyTexture(), m1->getMyPos(), WHITE);
        //EndDrawing();

    }


    //DrawTextureV(m1->getMyTexture(), m1->getMyPos(), WHITE);
    /*if (m1->getIsVisible() == true)
    {
        DrawTextureV(m1->getMyTexture(), m1->getMyPos(), WHITE);
    }*/
};

void AvionEnnemi::virtualize(){
    // Initialiser texture/image
    myTexture = LoadTextureFromImage(myImage);
    //UnloadImage(myImage);

}

/*void AvionEnnemi::tirerProjectile(Projectile* p, int i, Avion a1) {


    p->update(a1);
    if (a1.getMyPos().x == p->getMyPos().x && a1.getMyPos().y == p->getMyPos().y) { // Si les coordonnées du projectile correspondent à celle de l'avion cible alors exlposion
        p->exploser(); }
    
    // on set notre projectile sur null dans notre tableau de recharge pour signifier qu'il est utilisé
    myProjectiles[i] = NULL;
}*/