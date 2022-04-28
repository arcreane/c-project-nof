#pragma once
#include "Avion.h"

class AvionDeChasse: public Avion {
public:
    void update() override;
    void virtualizePlane() override;
};
