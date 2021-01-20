#include "stdafx.h"
#include "Game.h"

int main()
{
	//Init game engine
	Game game;

	while (game.running())
	{

		game.update();
		game.render();
	}
	cout << "100" << endl;

	return 0;

}