#pragma once
#include <iostream>
#include "raylib.h"

class Jeu
{
protected:
	Vector2 myPos;
	Image myImage;
	Texture2D myTexture;
	/*int temps; // Temps de la partie?*/

public:
	// getter
	Vector2 getMyPos() { return myPos; };
	Image getMyImage() { return myImage; };
	Texture2D getMyTexture() { return myTexture; };

	// setter
	void setMyPos(Vector2 pos);
	void setMyImage(Image image);
	void setMyTexture(Texture2D texture);

	// Fonctions
	virtual void virtualize() = 0;
	virtual void update() = 0;

};