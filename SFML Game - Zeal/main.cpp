#include <iostream>
#include <SFML/Graphics.hpp>
#include "png_Loader.h"
#include "Menu.h"
#include "Keyboard.h"
#include "Variables.h"
using namespace std;
using namespace sf;
 

int main()
{
    RenderWindow window(VideoMode(1366, 768), "ZEAL!", Style:: Fullscreen);
    //Texture menu;
    //menu.loadFromFile("Menu\\Menu.png");
    //Sprite menuSprite(menu);
    finalMenuSprite.setTexture(menuTexture[0]);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        keyboardforMenu();
        
        window.clear();
        window.draw(finalMenuSprite);
        window.display();
    }

    return 0;
}