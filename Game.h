// ----------------------------------------------------------------
// From Game Programming in C++ by Sanjay Madhav
// Copyright (C) 2017 Sanjay Madhav. All rights reserved.
// 
// Released under the BSD License
// See LICENSE in root directory for full details.
// ----------------------------------------------------------------

#pragma once
#include "SDL/SDL.h"

struct Vector2
{
	float x;
	float y;
};

// Game class
class Game
{
public:
	Game();

	// Initialize the game
	bool Initialize();

	// Runs the game loop until the game is over
	void RunLoop();

	// Shutdown the game
	void Shutdown();

private:
	// Helper functions for the game loop
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// Window created by SDL
	SDL_Window* mWindow;

	SDL_Renderer* mRenderer;

	// Game should continue to run
	bool mIsRunning;

	Vector2 mPaddlePos;
	Vector2 mBallPos;
};
