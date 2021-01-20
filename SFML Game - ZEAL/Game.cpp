#include "stdafx.h"
#include "Game.h"


void Game::initializeVariables()
{
	this->window = nullptr;
}

void Game::initializeWindow()
{
	this->videoMode.width = 1000;
	this->videoMode.height = 600;
	this->window = new RenderWindow(videoMode, "Zeal");
	this->window->setFramerateLimit(60);
}

Game::Game()
{
	this->initializeVariables();
	this->initializeWindow();
}

Game::~Game()
{
	delete this->window;
}

const bool Game::running() const
{
	return this->window->isOpen();
}

const bool Game::getGameEnd() const
{
	return false;
}

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

void Game::update()
{
	this->updatePollEvents();
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

	this->window->clear();

	//Draw game objects


	this->window->display();
}