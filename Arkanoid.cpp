#include <SFML/Graphics.hpp>
#include "Game.h"
#include "Ball.h"
#include "Paddle.h"
using namespace std;

const int FIELD_WIDTH = 704;
const int FIELD_HEIGHT = 736;
const int BLOCK_WIDTH = 60;
const int BLOCK_HEIGHT = 28;

int main()
{
	Game *game = new Game();
	game->Run();
	return 0;
}
