#include "stdafx.h"
#include "Menu.h"

void Menu::initTexture()
{
	this->menutextures[0].loadFromFile("Menu/Menu-0.png");
	this->menutextures[1].loadFromFile("Menu/Menu-1.png");
	this->menutextures[2].loadFromFile("Menu/Menu-2.png");
	this->menutextures[3].loadFromFile("Menu/Menu-3.png");
	this->menutextures[4].loadFromFile("Menu/Menu-4.png"); 
	this->menutextures[5].loadFromFile("Menu/Menu-5.png");
	this->menutextures[6].loadFromFile("Menu/Menu-6.png");
	this->menutextures[7].loadFromFile("Menu/Menu-7.png");
}

void Menu::initSprite()
{
	this->menusprites.setTexture(menutextures[0]);
}

void Menu::initShape()
{
	this->buttons[0].setPosition(413.f, 135.f);
	this->buttons[0].setSize(Vector2f(123.f, 42.f));
	this->buttons[1].setPosition(202.f, 197.f);
	this->buttons[1].setSize(Vector2f(331.f, 42.f));
	this->buttons[2].setPosition(343.f, 258.f);
	this->buttons[2].setSize(Vector2f(187.f, 42.f));
	this->buttons[3].setPosition(414.f, 322.f);
	this->buttons[3].setSize(Vector2f(117.f, 42.f));
	this->buttons[4].setPosition(360.f, 384.f);
	this->buttons[4].setSize(Vector2f(170.f, 42.f));
	this->buttons[5].setPosition(429.f, 446.f);
	this->buttons[5].setSize(Vector2f(104.f, 42.f));
}

Menu::Menu()
{
	this->initTexture();
	this->initSprite();
	this->initShape();
}

Menu::~Menu()
{

}

void Menu::updateMousePosition()
{
	/*
		@return void
		Update the Mouse Positions:
		- Mouse positions relative to window
		- Mouse Position relative to Full Screen
	*/

	//this->mousePositionWindow = Mouse::getPosition(*this->window);
	this->mousePositionFull = Mouse::getPosition();
	//this->mousePositionFullinFloat = window->mapPixelToCoords(this->mousePositionWindow);

	//cout << mousePositionFullinFloat.x << endl;
}

void Menu::updateBackground(int i)
{
	this->menusprites.setTexture(menutextures[i]);
}

void Menu::update()
{
	this->updateMousePosition();

	if ((Keyboard::isKeyPressed(Keyboard::Up) && spriteno >= 2))
	{
		this->spriteno--;
		this->updateBackground(this->spriteno);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down) && spriteno <= 5)
	{
		spriteno++;
		this->updateBackground(this->spriteno);
	}

	//Mouse detect
	if (this->buttons[0].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(1);
		if (Keyboard::isKeyPressed(Keyboard::Enter) || Mouse::isButtonPressed(Mouse::Left)) 
			this->menusprites.setTexture(menutextures[7]);
	}
	else if (this->buttons[1].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(2);
		if (Keyboard::isKeyPressed(Keyboard::Enter) || Mouse::isButtonPressed(Mouse::Left))
			this->menusprites.setTexture(menutextures[7]);
	}
	else if (this->buttons[2].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(3);
		if (Keyboard::isKeyPressed(Keyboard::Enter) || Mouse::isButtonPressed(Mouse::Left))
			this->menusprites.setTexture(menutextures[7]);
	}
	else if (this->buttons[3].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(4);
		if (Keyboard::isKeyPressed(Keyboard::Enter) || Mouse::isButtonPressed(Mouse::Left))
			this->menusprites.setTexture(menutextures[7]);
	}
	else if (this->buttons[4].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(5);
		if (Keyboard::isKeyPressed(Keyboard::Enter) || Mouse::isButtonPressed(Mouse::Left))
			this->menusprites.setTexture(menutextures[7]);
	}
	else if (this->buttons[5].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(6);
		if (Keyboard::isKeyPressed(Keyboard::Enter) || Mouse::isButtonPressed(Mouse::Left))
			this->menusprites.setTexture(menutextures[7]);
	}
}

void Menu::render(RenderTarget& target)
{
	target.draw(this->menusprites);
}
