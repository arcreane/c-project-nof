#include "Game.h"
#include "raylib.h"
Game::Game()
{
}

Game::~Game()
{
}

bool Game::Initialise()
{
	SetTargetFPS(60);
	InitWindow(800, 600, "Jeu CPP");
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
	BeginDrawing();
	ClearBackground(BLACK);
	DrawCircleV(_ballPos, 20.0f, PINK);
	EndDrawing();
}
