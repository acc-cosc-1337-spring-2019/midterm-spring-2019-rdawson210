#include "shooter.h"

Roll Shooter::shoot(Die & d1, Die & d2)
{
	Roll game(d1, d2);
	game.roll();
	return game;
}
