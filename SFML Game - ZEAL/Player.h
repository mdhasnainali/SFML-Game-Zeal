#pragma once

class Player
{
private:
	RectangleShape player;
	Sprite sprites;
	Texture textures;

	float movementSpeed;

	//Private Functions
	void initShape();
	void initTexture();
	void initSprite();

public:
	Player();
	virtual ~Player();

	//Functions:
	void move(const float dirX, const float dirY);

	void update();
	void render(RenderTarget& target);
};

