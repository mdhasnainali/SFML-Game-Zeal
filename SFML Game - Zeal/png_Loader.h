#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Variables.h"
#include "Menu.h"
using namespace std;
using namespace sf;


//Menu
void loadMenuImage()
{
	for (int i = 0; i < 8; i++)
	{
		menuTexture[i].loadFromFile(Menu_image_location[i]);
	}
}