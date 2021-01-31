#pragma once
#include "Player.h"
#include "Menu.h"
#include "playing.h"

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
	playing* Playing;

	//Audio
	Music menuMusic, playMusic;
	SoundBuffer buttonSoundBuffer, fireBuffer, bossSoundBuffer;
	Sound buttonSound, fireSound, bossSound;
	 
	//Clock Time
	Clock dtClock;
	float dt;

	//Privet Functions:
	//Initializer
	void initializeVariables();
	void initializeWindow();
	void initializedMusic();

	//Self Making Class Functions:
	void initMenu();
	void initializedPlayer();
	void initializePlaying();

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

	//Audio:
	void updateMusic();

	//Inside Game Loop Components
	void update();
	void render();

	//Game Loop
	void run();
};

