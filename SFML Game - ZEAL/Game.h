#pragma once
#include "Player.h"
#include "Menu.h"

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

	//Self Making Class:
	Player* player;
	Menu* menu;
	 
	//Clock Time
	Clock dtClock;
	float dt;

	//Privet Functions:
	//Initializer
	void initializeVariables();
	void initializeWindow();

	//Self Making Class Functions:
	void initMenu();
	void initializedPlayer();

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

