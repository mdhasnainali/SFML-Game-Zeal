#pragma once


class State
{
private:
	vector <Texture> textures;


public:
	State(); 
	virtual ~State();

	virtual void update() = 0;
	virtual void render() = 0;

};

