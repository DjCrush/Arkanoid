#include "pch.h"
#include "Game.h"

Game::Game() : ball{ new Ball() }, paddle{ new Paddle() }  // Game init
{
	window.create(sf::VideoMode(1024, 768), "Arkanoid");
	for (int y = 0; y < 6; ++y)
	{
		for (int x = 0; x < 11; ++x)
		{
			if (a[y][x] != color_blocks::EMPTY)
			{
				blocks.push_back(new Block(36 + x * (BLOCK_WIDTH + 4), y * (BLOCK_HEIGHT + 4) + 128, a[y][x]));
			}
		}
	}
}

void Game::Run()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		window.clear(sf::Color::Color(0, 0, 0));
		DrawField();
		ball->update(sf::milliseconds(50));
		ball->draw(window);
		paddle->update(sf::milliseconds(100));
		paddle->draw(window);
		window.display();
	}
}

void Game::DrawField()
{
	sf::RectangleShape shape(sf::Vector2f(768, 768));
	shape.setFillColor(sf::Color::Color(0, 202, 206));
	window.draw(shape);
	shape.setSize(sf::Vector2f(FIELD_WIDTH, FIELD_HEIGHT));
	shape.setFillColor(sf::Color::Color(0, 0, 255));
	shape.setPosition(32, 32);
	window.draw(shape);
	shape.setSize(sf::Vector2f(BLOCK_WIDTH, BLOCK_HEIGHT));
	for (auto& block : blocks)
	{
		switch (block->color)
		{
		case color_blocks::RED:
			shape.setFillColor(sf::Color::Color(255, 0, 0));
			break;
		case color_blocks::GRAY:
			shape.setFillColor(sf::Color::Color(206, 202, 206));
			break;
		case color_blocks::YELLOW:
			shape.setFillColor(sf::Color::Color(255, 251, 0));
			break;
		case color_blocks::PURPLE:
			shape.setFillColor(sf::Color::Color(255, 0, 255));
			break;
		case color_blocks::CYAN:
			shape.setFillColor(sf::Color::Color(0, 251, 255));
			break;
		case color_blocks::GREEN:
			shape.setFillColor(sf::Color::Color(0, 251, 0));
		}
		shape.setPosition(block->x, block->y);
		window.draw(shape);
	}
}


Game::~Game()
{
	blocks.clear();
	delete paddle;
	delete ball;
}
