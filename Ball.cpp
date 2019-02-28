#include "pch.h"
#include "Ball.h"

Ball::Ball() : x{ 100 }, y{ 100 }, dx{ 4 }, dy{ 4 }, shape(sf::Vector2f(20, 20))
{
	shape.setFillColor(sf::Color::White);
}

void Ball::update(sf::Time elapsed)
{
	x += dx * elapsed.asSeconds();
	y += dy * elapsed.asSeconds();
	for (auto it = blocks.begin(); it != blocks.end(); )
	{
		if (x > (*it)->x && x < (*it)->x + BLOCK_WIDTH && y > (*it)->y && y < (*it)->y + BLOCK_HEIGHT)
		{
			it = blocks.erase(it);
		}
		else
		{
			++it;
		}
	}
	if (x > FILL_WIDTH + 12|| x < 32)
	{
		dx = -dx;
	}
	if (y < 32 || y > FILL_HEIGHT)
	{
		dy = -dy;
	}
}

void Ball::draw(sf::RenderWindow& window)
{
	shape.setPosition(x, y);
	window.draw(shape);
}
