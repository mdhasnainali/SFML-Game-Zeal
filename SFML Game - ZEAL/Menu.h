#pragma once
#include "Global.h"

class Menu
{
private:
	Texture menutextures[14];
	Texture menuOption[6];
	Texture menuMission[10];
	Sprite menusprites;
	RectangleShape buttons[6];
	RectangleShape buttonsforMission[8];
	RectangleShape buttonsforOptions[4];
	Texture blank;
	int spriteno = 0;
	int missionno = 0;
	int optionno = 1;

	//Audio
	SoundBuffer buttonSoundBuffer;
	Sound buttonSound;

	//Vector2i mousePositionFullScreen;
	Vector2i mousePositionFull;


	//Functions:
	void initTexture();
	void initSprite();
	void initShape();
	void initAudio();

public:
	Menu();
	virtual ~Menu();

	//Functions:
	void updateBackground(int i);
	void updateMousePosition();
	void updateEscapeButton();
	void updateMenu();
	void updateMission();
	void updateOptions();
	void updatePaused();
	void afterMenu(int i);
	void afterMission(int i);

	//Play Audio:
	void playButtonSound();
	

	void update();
	void render(RenderTarget& target);
};

/*
	
	void updatePlay();
	void updateMissionSelect();
	void updateQuite();
	void updateStats();
	void updateOptions();
*/