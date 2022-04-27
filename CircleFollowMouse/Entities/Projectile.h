#include <iostream>
#include "../Universe/Univers.h"



class Projectile : public Univers{
    private:
    int vitesse;

    public:
    void exploser();
    void avancer();
    void setVitesse(int vitesse);

};