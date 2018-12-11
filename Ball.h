#pragma once
#include <SFML/Graphics.hpp>
#include <list>
#include "Block.h"
#include "Paddle.h"
using namespace std;
extern const int FIELD_WIDTH;
extern const int FIELD_HEIGHT;
extern const int BLOCK_WIDTH;
extern const int BLOCK_HEIGHT;


class Ball
{
public:
	Ball();
	void update(sf::Time elapsed);
	void draw(sf::RenderWindow& window);
	~Ball();
private:
	float x, y, dx, dy;
	sf::RectangleShape shape;
};
