#include "pch.h"
#include "Paddle.h"

Paddle::Paddle() :x{ 256 }, y{ 704 }, shape(sf::Vector2f(96, 32))
{
	shape.setFillColor(sf::Color::Color(0, 251, 255));
}
void Paddle::update(sf::Time elapsed)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		if (x > 36)
		{
			x -= 4 * elapsed.asSeconds();
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		if (x < 640)
		{
			x += 4 * elapsed.asSeconds();
		}
	}
}

float Paddle::GetX()
{
	return x;
}
void Paddle::draw(sf::RenderWindow& window)
{
	shape.setPosition(x, y);
	window.draw(shape);
}

Paddle::~Paddle()
{
}
