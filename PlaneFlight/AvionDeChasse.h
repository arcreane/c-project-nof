#pragma once
#include "Avion.h"
#include "Projectile.h"

class AvionDeChasse: public Avion {
public:
    // Constructeur
    AvionDeChasse(Vector2 pos, int pv);

    // Fonctions héritées de Jeu
    void update() override;
    void virtualize() override;
    // Fonction en +
    //void tirer(Projectile p);

    // Destructeur
    ~AvionDeChasse();
};
