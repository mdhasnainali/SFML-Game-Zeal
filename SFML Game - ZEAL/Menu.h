#pragma once

class Menu
{
private:
	Texture menutextures[8];
	Sprite menusprites;
	RectangleShape buttons[6];
	int spriteno = 0;

	//Vector2i mousePositionFullScreen;
	Vector2i mousePositionFull;


	//Functions:
	void initTexture();
	void initSprite();
	void initShape();

public:
	Menu();
	virtual ~Menu();

	//Functions:
	void updateMousePosition();
	void updateBackground(int i);

	void update();
	void render(RenderTarget& target);
};

