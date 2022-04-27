#pragma once
#include <iostream>
#include "Avion.h"
#include <vector>
#include <cmath>

Avion::Avion()
{
}

Avion::~Avion()
{
}

Avion::update() {
	if (myPos.x < 0) myPos.x = 400;
	if (myPos.y < 0) myPos.y = 800;
	if (myPos.x > 800) myPos.x = 400;
	if (myPos.y > 800) myPos.y = 800;

	myPos.x += myVitesse.x;
	myPos.y += myVitesse.y;
};

Avion::setPosition() {
	float angleH = std::atan2(myVitesse.y, myVitesse.x);
	float angleL = angleH + 0.3 + PI / 2;
	float angleR = angleH + 0.3 + PI / 2;

	Vector2 head = {
		70 * std::cos(angleH) + myPos.x,
		70 * std::sin(angleH) + myPos.y,
	};

	Vector2 TailL = {
		30 * std::cos(angleL) + myPos.x,
		30 * std::sin(angleL) + myPos.y,
	};

	Vector2 TailR = {
		30 * std::cos(angleR) + myPos.x,
		30 * std::sin(angleR) + myPos.y,
	};

	DrawTriangleLines(head, TailR, myPos, WHITE);
	DrawTriangleLines(head, myPos, TailL, WHITE);
};


Avion::tirer(){}