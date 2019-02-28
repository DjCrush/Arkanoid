#pragma once
#include "Ball.h"
extern enum class color_blocks;
extern const int BLOCK_WIDTH;
extern const int BLOCK_HEIGHT;

class Game
{
public:
	Game();
	void Run(); // Game run
private:
	void DrawField();
	sf::RenderWindow window;
	Ball *ball;
	Paddle *paddle;
	sf::Time t1;
	list<Block*> blocks;
};
