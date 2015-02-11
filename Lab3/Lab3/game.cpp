#include "game.h"

int game::get_x()
{
	return x;
}

int game::get_y()
{
	return y;
}

void game::get_player(int new_x)
{
	x = new_x;
}