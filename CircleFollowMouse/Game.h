#pragma once
#include "raylib.h"
class Game
{
public:
	Game();
	~Game();

	bool Initialise();
	void RunLoop();
	void Shutdown();
	Vector2 _ballPos = { 0.0f, 0.0f };
	Vector2 _mousePos = { 0.0f, 0.0f };
private:
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();
	
};

