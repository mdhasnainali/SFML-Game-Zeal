#include "stdafx.h"
#include "Menu.h"

void Menu::initTexture()
{
	this->menutextures[0].loadFromFile("Resources/Menu/Menu-0.png");
	this->menutextures[1].loadFromFile("Resources/Menu/Menu-1.png");
	this->menutextures[2].loadFromFile("Resources/Menu/Menu-2.png");
	this->menutextures[3].loadFromFile("Resources/Menu/Menu-3.png");
	this->menutextures[4].loadFromFile("Resources/Menu/Menu-4.png"); 
	this->menutextures[5].loadFromFile("Resources/Menu/Menu-5.png");
	this->menutextures[6].loadFromFile("Resources/Menu/Menu-6.png");
	this->menutextures[7].loadFromFile("Resources/Menu/Menu-7.png");
	this->menutextures[8].loadFromFile("Resources/Menu/Menu-8.png");
	this->menutextures[9].loadFromFile("Resources/Menu/Menu-9.png");
	this->menutextures[10].loadFromFile("Resources/Menu/Menu-10.png");
	this->menutextures[11].loadFromFile("Resources/Menu/Menu-11.png");
	this->menutextures[12].loadFromFile("Resources/Menu/Menu-12.png");
	this->menutextures[13].loadFromFile("Resources/Menu/Menu-13.png");
	
	this->menuMission[0].loadFromFile("Resources/Mission/Mission-0.png");
	this->menuMission[1].loadFromFile("Resources/Mission/Mission-1.png");
	this->menuMission[2].loadFromFile("Resources/Mission/Mission-2.png");
	this->menuMission[3].loadFromFile("Resources/Mission/Mission-3.png");
	this->menuMission[4].loadFromFile("Resources/Mission/Mission-4.png");
	this->menuMission[5].loadFromFile("Resources/Mission/Mission-5.png");
	this->menuMission[6].loadFromFile("Resources/Mission/Mission-6.png");
	this->menuMission[7].loadFromFile("Resources/Mission/Mission-7.png");
	this->menuMission[8].loadFromFile("Resources/Mission/Mission-8.png");
	this->menuMission[9].loadFromFile("Resources/Mission/Locked.png");

	this->menuOption[0].loadFromFile("Resources/Options/Control.png");
	this->menuOption[1].loadFromFile("Resources/Options/Credits.png");
	this->menuOption[2].loadFromFile("Resources/Options/Sound-0.png");
	this->menuOption[3].loadFromFile("Resources/Options/Sound-1.png");
	this->menuOption[4].loadFromFile("Resources/Options/Stats.png");
	this->menuOption[5].loadFromFile("Resources/Options/Story.png");

	this->blank.loadFromFile("Resources/Menu/Blank.png");
}

void Menu::initSprite()
{
	game_status = MENU;
	this->menusprites.setTexture(menutextures[0]);
}

void Menu::initShape()
{
	this->buttons[0].setPosition(530.f, 231.f);
	this->buttons[0].setSize(Vector2f(163.f, 52.f));
	this->buttons[1].setPosition(233.f, 315.f);
	this->buttons[1].setSize(Vector2f(462.f, 57.f));
	this->buttons[2].setPosition(426.f, 403.f);
	this->buttons[2].setSize(Vector2f(268.f, 53.f));
	this->buttons[3].setPosition(529.f, 490.f);
	this->buttons[3].setSize(Vector2f(162.f, 52.f));
	this->buttons[4].setPosition(451.f, 574.f);
	this->buttons[4].setSize(Vector2f(242.f, 57.f));
	this->buttons[5].setPosition(545.f, 662.f);
	this->buttons[5].setSize(Vector2f(151.f, 61.f));


	this->buttonsforMission[0].setPosition(772,304);
	this->buttonsforMission[0].setSize(Vector2f(395,38));
	this->buttonsforMission[1].setPosition(846, 370);
	this->buttonsforMission[1].setSize(Vector2f(255, 37));
	this->buttonsforMission[2].setPosition(826, 434);
	this->buttonsforMission[2].setSize(Vector2f(284, 39));
	this->buttonsforMission[3].setPosition(687, 502);
	this->buttonsforMission[3].setSize(Vector2f(564, 40));
	this->buttonsforMission[4].setPosition(768, 569);
	this->buttonsforMission[4].setSize(Vector2f(401, 38));
	this->buttonsforMission[5].setPosition(820, 634);
	this->buttonsforMission[5].setSize(Vector2f(296, 41));
	this->buttonsforMission[6].setPosition(844, 701);
	this->buttonsforMission[6].setSize(Vector2f(238, 38));
	this->buttonsforMission[7].setPosition(640, 764);
	this->buttonsforMission[7].setSize(Vector2f(656, 43));

	this->buttonsforOptions[0].setPosition(519, 293);;
	this->buttonsforOptions[0].setSize(Vector2f(180, 54));
	this->buttonsforOptions[1].setPosition(463, 380);;
	this->buttonsforOptions[1].setSize(Vector2f(233, 61));
	this->buttonsforOptions[2].setPosition(544, 470);
	this->buttonsforOptions[2].setSize(Vector2f(155, 60));
	this->buttonsforOptions[3].setPosition(1044, 478);;
	this->buttonsforOptions[3].setSize(Vector2f(555, 82));;
}

void Menu::initAudio()
{
	if (!this->buttonSoundBuffer.loadFromFile("Resources/Audio/Button.ogg")) cout << "Loading Faild" << endl;
	this->buttonSound.setBuffer(buttonSoundBuffer);
}

Menu::Menu()
{
	this->initTexture();
	this->initSprite();
	this->initShape();
	this->initAudio();

	//global variable;
	game_status = MENU;
	locked = false;
}

Menu::~Menu()
{

}


void Menu::updateBackground(int i)
{
	this->menusprites.setTexture(menutextures[i]);
}


// Detect where is the mosue
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


void Menu::updateEscapeButton()
{
	if (game_status == PLAYING)
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			this->playButtonSound();
			game_status = PAUSED;
			this->spriteno = 7;
			this->menusprites.setTexture(menutextures[7]);
		}
	}
	else if (menu_status == MISSION_SELLECT && locked == true && game_status == MENU_EXTENSION)
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			locked = false;
			this->playButtonSound();
			this->menusprites.setTexture(menuMission[0]);
		}
	}
	else if ((menu_status == MISSION_SELLECT || menu_status == OPTIONS || menu_status == STATS || menu_status == CREDITS) && game_status==MENU_EXTENSION)
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			game_status = MENU;
			this->playButtonSound();
			//this->spriteno = 8;
			this->menusprites.setTexture(menutextures[0]);
		}
	}
	else if ((menu_status == MISSION_SELLECT || menu_status == OPTIONS || menu_status == STATS || menu_status == CREDITS) && game_status == MENU_PAUSED_EXTENSION)
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			game_status = PAUSED;
			this->playButtonSound();
			//this->spriteno = 8;
			this->menusprites.setTexture(menutextures[7]);
		}
	}
}

void Menu::updateMenu()
{
	if ((Keyboard::isKeyPressed(Keyboard::Up) && spriteno >= 2))
	{
		this->spriteno--;
		this->playButtonSound();
		this->updateBackground(this->spriteno);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down) && spriteno <= 5)
	{
		this->spriteno++;
		this->playButtonSound();
		this->updateBackground(this->spriteno);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Enter) && this->spriteno >= 1 && this->spriteno <= 6)
	{
		this->afterMenu(spriteno);
	}


	//Mouse detect
	if (this->buttons[0].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(1);
		this->playButtonSound();
		spriteno = 1;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[1].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(2);
		this->playButtonSound();
		spriteno = 2;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[2].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(3);
		this->playButtonSound();
		spriteno = 3;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[3].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(4);
		this->playButtonSound();
		spriteno = 4;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[4].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(5);
		this->playButtonSound();
		spriteno = 5;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[5].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(6);
		this->playButtonSound();
		spriteno = 6;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
}

void Menu::updateMission()
{
	if ((Keyboard::isKeyPressed(Keyboard::Up) && missionno >= 2))
	{
		this->playButtonSound();
		this->missionno--;
		this->menusprites.setTexture(menuMission[this->missionno]);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down) && missionno <= 7)
	{
		this->playButtonSound();
		this->missionno++;
		this->menusprites.setTexture(menuMission[this->missionno]);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Enter) && this->missionno >= 2 && this->missionno <= 8)
	{
		this->afterMission(missionno);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Enter) && this->missionno == 1)
	{
		game_status = PLAYING;
	}


	//Mouse detect
	if (this->buttonsforMission[0].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 1;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			game_status = PLAYING;
	}
	if (this->buttonsforMission[1].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 2;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
	if (this->buttonsforMission[2].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 3;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
	if (this->buttonsforMission[3].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 4;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
	if (this->buttonsforMission[4].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 5;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
	if (this->buttonsforMission[5].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 6;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
	if (this->buttonsforMission[6].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 7;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
	if (this->buttonsforMission[7].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		missionno = 8;
		this->playButtonSound();
		this->menusprites.setTexture(menuMission[this->missionno]);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMission(spriteno);
	}
}

void Menu::updateOptions()
{
	if ((Keyboard::isKeyPressed(Keyboard::Down) && optionno == 1))
	{
		this->optionno++;
		this->playButtonSound();
		this->menusprites.setTexture(menuOption[0]);
		
	}
	else if (Keyboard::isKeyPressed(Keyboard::Up) && optionno == 2)
	{
		this->optionno--;
		this->playButtonSound();
		this->menusprites.setTexture(menuOption[2]);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down) && optionno == 2)
	{
		this->optionno++;
		this->playButtonSound();
		this->menusprites.setTexture(menuOption[5]);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Up) && optionno == 3)
	{
		this->optionno--;
		this->playButtonSound();
		this->menusprites.setTexture(menuOption[0]);
	}
	

	//Mouse detect
	if (this->buttonsforOptions[0].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->menusprites.setTexture(menuOption[2]);
		this->playButtonSound();
		optionno = 1;
	}
	if (this->buttonsforOptions[1].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->menusprites.setTexture(menuOption[0]);
		this->playButtonSound();
		optionno = 2;
	}
	if (this->buttonsforOptions[2].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->menusprites.setTexture(menuOption[5]);
		this->playButtonSound();
		optionno = 3;
	}
	if (this->buttonsforOptions[3].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->playButtonSound();
		if (Mouse::isButtonPressed(Mouse::Left))
			game_status = ANIMATION;
	}
}

void Menu::updatePaused()
{
	if ((Keyboard::isKeyPressed(Keyboard::Up) && spriteno >= 9))
	{
		this->spriteno--;
		this->updateBackground(this->spriteno);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Down) && spriteno <= 12)
	{
		this->spriteno++;
		this->updateBackground(this->spriteno);
	}
	else if (Keyboard::isKeyPressed(Keyboard::Enter) && this->spriteno >= 8 && this->spriteno <= 13)
	{
		this->afterMenu(spriteno);
	}


	//Mouse detect
	if (this->buttons[0].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		spriteno = 8;
		this->updateBackground(8);
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[1].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(9);
		spriteno = 9;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[2].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(10);
		spriteno = 10;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[3].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(11);
		spriteno = 11;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[4].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(12);
		spriteno = 12;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
	if (this->buttons[5].getGlobalBounds().contains(Vector2f(this->mousePositionFull.x, this->mousePositionFull.y)))
	{
		this->updateBackground(13);
		spriteno = 13;
		if (Mouse::isButtonPressed(Mouse::Left))
			this->afterMenu(spriteno);
	}
}

void Menu::afterMenu(int i)
{
	this->playButtonSound();
	if (i == 1)
	{
		menusprites.setTexture(blank);
		game_status = PLAYING;
	}
	else if (i == 2)
	{
		menu_status = MISSION_SELLECT;
		game_status = MENU_EXTENSION;
		menusprites.setTexture(menuMission[0]);
	}
	else if (i == 3)
	{
		game_status = MENU_EXTENSION;
		menu_status = OPTIONS;
		menusprites.setTexture(menuOption[2]);
	}
	else if (i == 4)
	{
		game_status = MENU_EXTENSION;
		menu_status = STATS;
		menusprites.setTexture(menuOption[4]);
	}
	else if (i == 5)
	{
		game_status = MENU_EXTENSION;
		menu_status = CREDITS;
		menusprites.setTexture(menuOption[1]);
	}
	else if (i == 6 || i ==13)
	{
		menu_status = QUITS;
	}
	else if (i == 8)
	{
		menusprites.setTexture(blank);
		game_status = PLAYING;
	}
	else if (i == 9)
	{
		menu_status = MISSION_SELLECT;
		game_status = MENU_PAUSED_EXTENSION;
		menusprites.setTexture(menuMission[0]);
	}
	else if (i == 10)
	{
		game_status = MENU_PAUSED_EXTENSION;
		menu_status = OPTIONS;
		menusprites.setTexture(menuOption[2]);
	}
	else if (i == 11)
	{
		game_status = MENU_PAUSED_EXTENSION;
		menu_status = STATS;
		menusprites.setTexture(menuOption[4]);
	}
	else if (i == 12)
	{
		game_status = MENU_PAUSED_EXTENSION;
		menu_status = CREDITS;
		menusprites.setTexture(menuOption[1]);
	}
}

void Menu::afterMission(int i)
{
	this->playButtonSound();
	if (i == 1)
	{
		game_status = PLAYING;
	}
	if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7)
	{
		this->menusprites.setTexture(menuMission[9]);
		locked = true;
	}
}

void Menu::playButtonSound()
{
	this->buttonSound.play();
}


void Menu::update()
{
	this->updateMousePosition();
	this->updateEscapeButton();


	if (game_status == MENU)
	{
		this->updateMenu();
	}
	else if (game_status == PAUSED)
	{ 
		this->updatePaused();
	}  
	else if ((game_status == MENU_EXTENSION || game_status == MENU_PAUSED_EXTENSION) && menu_status == MISSION_SELLECT && locked == false)
	{
		this->updateMission();
	}
	else if ((game_status == MENU_EXTENSION || game_status == MENU_PAUSED_EXTENSION) && menu_status == OPTIONS)
	{
		this->updateOptions();
	}

	cout << game_status << endl;
}

void Menu::render(RenderTarget& target)
{
	target.draw(this->menusprites);
}


	