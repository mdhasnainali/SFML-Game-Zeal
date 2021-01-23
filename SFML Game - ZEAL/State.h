#pragma once


class State
{
private:
	RenderWindow* window;
	vector <Texture> textures;


public:
	State();
	virtual ~State();

	virtual void endState() = 0;
	virtual void update() = 0;
	virtual void render() = 0;

};

