#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "png_Loader.h"
#include "Variables.h"
using namespace std;
using namespace sf;


void isFinished(int num, int command);



void keyboardforMenu()
{
    static int num=0;
    if (isMenu == true)
    {
        if (Keyboard::isKeyPressed(Keyboard::Up)) {
            isFinished(num,0);
        }
        if (Keyboard::isKeyPressed(Keyboard::Down)) {
            isFinished(num,1);
        }
    }
}

void isFinished(int num,int command)
{
    if (command == 1 && num < 7)
    {
        num++;
        finalMenuSprite.setTexture(menuTexture[num]);
    }
    else if (command == 0 && num > 0)
    {
        num--;
        finalMenuSprite.setTexture(menuTexture[num]);
    }

}