#include <iostream>
#include "Projectile.h"
#include "../Universe/Univers.h"
#include "raylib.h"

class Avion {
    private:
        Vector2 myPos; // position x,y
        Vector2 myVitesse; //vitesse selon x et selon y
        int myPv; // Point de vie
        float mySize; // taille avion
    public:
        Avion(Vector2 pos, Vector2 vitesse, int pv, float taille) {
            myPos = pos;
            myPv = pv;
            myVitesse = vitesse;
            mySize = taille;

        }
        void update();
        //void tirer(Projectile p);
        void setPosition(); // voler 
        ~Avion();
};
