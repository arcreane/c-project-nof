#pragma once
#include "Avion.h"
#include "Projectile.h"

class AvionDeChasse: public Avion {
public:
    // Constructeur
    AvionDeChasse();
    AvionDeChasse(Vector2 pos, int pv);

    // Fonctions héritées de Jeu
    void update() override;
    void virtualize() override;
    void tirerProjectile(Projectile* p) override;

    // Destructeur
    ~AvionDeChasse();
};
