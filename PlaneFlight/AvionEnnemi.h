#pragma once
#include "Avion.h"

class AvionEnnemi : public Avion {
public:
	void update() override;
	void virtualizePlane() override;
	// ~AvionEnnemi();
};

