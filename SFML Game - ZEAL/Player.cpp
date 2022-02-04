#include "stdafx.h"
#include "Player.h"

void Player::initShape()
{
	player.setSize(Vector2f(50.f, 50.f));
}

void Player::initTexture()
{
	this->textures.loadFromFile("abc.png");
}

void Player::initSprite()
{
	this->sprites.setTexture(this->textures);
	//this->player.setTexture(this->textures);
	this->sprites.setScale(.5f, .5f);
}

Player::Player()
{
	this->movementSpeed = 10.f;
	
	this->initTexture();
	this->initSprite();
}

Player::~Player()
{
	
}


void Player::move(const float dirX, const float dirY)
{
	//this->sprites.move()
}

void Player::update()
{
	//player.setTexture(textures);
	
}

void Player::render(RenderTarget& target)
{
	target.draw(this->sprites);
	//target.draw(this->player);
}
