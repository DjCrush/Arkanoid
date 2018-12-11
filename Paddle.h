#pragma once
#include <SFML/Graphics.hpp>
#include "Ball.h"
extern const int FILL_WIDTH;
extern const int FILL_HEIGHT;
class Paddle
{
public:
	Paddle();
	void update(sf::Time);
	void draw(sf::RenderWindow&);
	float GetX();
	~Paddle();
private:
	float x, y;
	sf::RectangleShape shape;
	sf::Texture paddleTexture;
	sf::Sprite paddleSprite;
};
