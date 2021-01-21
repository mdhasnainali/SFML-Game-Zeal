#pragma once
#include "State.h"

/*
	Class that act as a game engine.
	Wrapper class.
*/


class Game
{
private:
	//Variables
	//Window:
	RenderWindow* window;
	VideoMode videoMode;
	Event ev;

	//Clock Time
	Clock dtClock;
	float dt;

	//Privet Functions:
	//Initializer
	void initializeVariables();
	void initializeWindow();

public:
	//Constructors & Destructors
	Game();
	virtual ~Game();
	
	//Public Functions

	//Accessors
	const bool running() const;
	const bool getGameEnd() const;

	//PollEvents
	void updatePollEvents();

	//Update Related Functions
	void updateDt();

	//Inside Game Loop Components
	void update();
	void render();

	//Game Loop
	void run();
};

