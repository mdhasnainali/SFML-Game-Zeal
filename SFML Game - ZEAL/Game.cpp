#include "stdafx.h"
#include "Game.h"


//Privet Functions:

//Initializer
void Game::initializeVariables()
{
	this->window = nullptr;
}

void Game::initializeWindow()
{
	string title;
	unsigned window_frame_limit = 120;
	bool vertical_sync_enabled = false;

	ifstream ifs("Config/window.ini");
	if (ifs.is_open())
	{
		getline(ifs, title);
		ifs >> this->videoMode.width >> this->videoMode.height;
		ifs >> window_frame_limit;
		ifs >> vertical_sync_enabled;
	}

	this->window = new RenderWindow(videoMode, title/*, Style:: Fullscreen*/);
	this->window->setFramerateLimit(window_frame_limit);
	this->window->setVerticalSyncEnabled(vertical_sync_enabled);
}


//Public Functions

//Constructors & Destructors
Game::Game()
{
	this->initializeVariables();
	this->initializeWindow();
}

Game::~Game()
{
	delete this->window;
}


//Accessors

const bool Game::running() const
{
	return this->window->isOpen();
}

const bool Game::getGameEnd() const
{
	return false;
}


//Poll Events

void Game::updatePollEvents()
{
	//Update Events
	while (this->window->pollEvent(this->ev))
	{
		switch (this->ev.type)
		{
		case Event::Closed:
			window->close();
			break;
		}
	}
}

//Update Related Functions

void Game::updateDt()
{
	/*Updates the dt variable with the time it takes to update and render one frame.*/
	
	this->dt = this->dtClock.restart().asSeconds();

	system("cls");
	cout << dt << endl;
}


//Inside Game Loop Components

void Game::update()
{
	/*
		@return void
		Update the game objects:
		Work with contineous change
	*/

	this->updatePollEvents();
	this->updateDt();
}

void Game::render()
{
	/*
		@return void
		Render the game objects:
		- clear old frame
		- render new objects
		- display frame in window
	*/

	//clear old frame
	this->window->clear();

	//Draw or render game objects


	//display frame in window
	this->window->display();
}


//Game Loop

void Game::run()
{
	while (this->running())
	{
		this->update();
		this->render();
	}
}
