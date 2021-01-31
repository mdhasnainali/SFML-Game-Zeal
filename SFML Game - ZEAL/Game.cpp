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

	/*ifstream ifs("Config/window.ini");
	if (ifs.is_open())
	{
		getline(ifs, title);
		ifs >> this->videoMode.width >> this->videoMode.height;
		ifs >> window_frame_limit;
		ifs >> vertical_sync_enabled;
	}

	ifs.close();*/

	this->window = new RenderWindow(VideoMode(1366,768), title, Style:: Fullscreen);
	this->window->setFramerateLimit(window_frame_limit);
	this->window->setVerticalSyncEnabled(vertical_sync_enabled);
}

void Game::initializedMusic()
{
	if (!this->menuMusic.openFromFile("Resources/Audio/Menu.ogg")) cout << "Problem::Menu Sound" << endl;
	this->menuMusic.play();
	this->menuMusic.setLoop(true);
	if (!this->playMusic.openFromFile("Resources/Audio/Game_Play.wav")) cout << "Problem::Game Sound" << endl;
	this->playMusic.play();
	this->playMusic.setLoop(true);

}


void Game::initMenu()
{
	this->menu = new Menu;
}

void Game::initializedPlayer()
{
	this->player = new Player;
}

void Game::initializePlaying()
{
	this->Playing = new playing;
}


//Public Functions

//Constructors & Destructors
Game::Game()
{
	this->initializeVariables();
	this->initializeWindow();
	this->initializedPlayer();
	this->initMenu();
	this->initializedMusic();
	this->initializePlaying();
}

Game::~Game()
{
	delete this->window;
}


//Accessors

const bool Game::running() const
{
	if (menu_status == QUITS) return false;
	else return this->window->isOpen();
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

	deltatime = dt;
}

void Game::updateMusic()
{
	if (game_status == PLAYING)
	{
		this->playMusic.setVolume(100);
		this->menuMusic.setVolume(0);
	}
	else
	{
		this->playMusic.setVolume(0);
		this->menuMusic.setVolume(100);
	}
}


//Inside Game Loop Components

void Game::update()
{
	/*
		@return void
		Update the game objects:
		Work with contineous change
	*/
	//if (game_status == PLAYING)
	//{
		//this->window->setMouseCursorVisible(false);
		//this->playingGame->Update();
	//}
	//else this->window->setMouseCursorVisible(true);

	this->updatePollEvents();
	this->updateDt();
	this->menu->update();
	this->updateMusic();
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
	
	this->menu->render(*this-> window);

	if (game_status == PLAYING)
	{
		//this->player->render(*this->window);
		//this->playingGame->Render(*this->window);
		this->Playing->all_Render(*this->window);
	}

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
