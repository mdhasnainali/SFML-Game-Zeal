#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;


//condition
bool isMenu=true;
bool isPlay;
bool isCredits;
bool isMissionSelect;
bool isStory;

//Menu:
string Menu_image_location[8] = { "Menu\\Menu.png","Menu\\Menu-Play.png","Menu\\Menu-Mission-Select.png","Menu\\Menu-Options.png","Menu\\Menue-Stats.png","Menu\\Menu-Credits.png","Menu\\Menu-Quit.png","Menu\\Menu-Resume-Game.png" };
Texture menuTexture[8];
Sprite finalMenuSprite;



