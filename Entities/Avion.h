#include <iostream>
#include "Projectile.h"
#include "../Universe/Univers.h"

class Avion : public Univers {
    private:
        int pv; // point de vie

    public:
        Avion(int x, int y);
        void tirer(Projectile p);
        void voler();
        ~Avion();
};
