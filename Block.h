#pragma once

extern enum class color_blocks;

enum class color_blocks
{
	EMPTY, RED, GREEN, BLUE, CYAN, YELLOW, PURPLE, GRAY, WHITE
};

color_blocks a[14][11] = {
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY, color_blocks::GRAY},
	{color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED, color_blocks::RED},
	{color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW, color_blocks::YELLOW},
	{color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN, color_blocks::CYAN},
	{color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE, color_blocks::PURPLE },
	{color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN, color_blocks::GREEN},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
	{color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY,color_blocks::EMPTY},
};

class Block
{
public:
	Block(int x, int y, color_blocks color);
	int x, y;
	color_blocks color;
};
