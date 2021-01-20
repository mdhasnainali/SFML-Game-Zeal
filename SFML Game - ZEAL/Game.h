#pragma once
class Game
{
private:
	//Window:
	RenderWindow* window;
	VideoMode videoMode;
	Event ev;

	//Privet Functions:
	void initializeVariables();
	void initializeWindow();

public:
	//Constructors & Destructors
	Game();
	virtual ~Game();

	//Accessors
	const bool running() const;
	const bool getGameEnd() const;

	//PollEvents
	void updatePollEvents();

	void update();
	void render();
};

