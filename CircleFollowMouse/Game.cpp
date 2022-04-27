#include "Game.h"
#include "raylib.h"
#include "Universe/Univers.h"
#include "Entities/Avion.h"
#include <ctime>
#include <vector>
#include <cmath>


Game::Game()
{
}

Game::~Game()
{
}

bool Game::Initialise()
{
	SetTargetFPS(60);
	InitWindow(800, 800, "Airplane Game");
	SetWindowState(FLAG_VSYNC_HINT);

	return false;
}

void Game::RunLoop()
{
	while (!WindowShouldClose()) {
		ProcessInput();
		UpdateGame();
		GenerateOutput();		
	}
}

void Game::Shutdown()
{
	CloseWindow();
}

void Game::ProcessInput()
{
	_mousePos = GetMousePosition();

}

void Game::UpdateGame()
{
	_ballPos = _mousePos;
}

void Game::GenerateOutput()
{
	/*std::vector<Avion> avions;

	// Creer 2 avions test
	for (int i = 0; i < 1; ++i)
	{
		avions.push_back(Avion(
			{
				(float)GetRandomValue(0, 800),
				(float)GetRandomValue(0, 800),
			}, {
				(float)GetRandomValue(-5, 5),
				(float)GetRandomValue(-5, 5),
			},
			100,
			200.0
			));
	}*/

	BeginDrawing();
	ClearBackground(BLACK);
	
	/*for (Avion& avion : avions) {
		avion.update();
		avion.setPosition();
	}*/

	DrawCircleV(_ballPos, 20.0f, RED);
	float angleH = std::atan2(1, 3);
	float angleL = angleH + 0.3 + PI / 2;
	float angleR = angleH + 0.3 + PI / 2;

	Vector2 head = {
		70 * std::cos(angleH) + 100,
		70 * std::sin(angleH) + 100,
	};

	Vector2 TailL = {
		30 * std::cos(angleL) + 100,
		30 * std::sin(angleL) + 100,
	};

	Vector2 TailR = {
		30 * std::cos(angleR) + 100,
		30 * std::sin(angleR) + 100,
	};

	DrawTriangleLines(head, TailR, { 100 ,100}, WHITE);
	DrawTriangleLines(head, { 100 , 100 }, TailL, WHITE);

	DrawFPS(100, 50); // images / sec
	EndDrawing();
}
