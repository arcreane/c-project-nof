#include <iostream>
#include "../Universe/Univers.h"
#include "raylib.h"



class Projectile : public Univers{
    private:
        Vector2 pVitesse;

    public:
        void exploser();
        void avancer();
        void setVitesse(int vitesse);

};