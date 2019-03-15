#include "craps.h"

void Craps::play_game()
{
	Shooter player1;
	shooters.push_back(player1);
	Shooter player2;
	shooters.push_back(player2);
	Shooter player3;
	shooters.push_back(player3);
	for (auto p : shooters)
	{
		Die d1;
		Die d2;
		Roll game = p.shoot(d1, d2);
		if (game.result() == "Craps")
		{
			break;
		}
		else if (game.result() == "Natural")
		{
			//win for Pass Line Bets
		}
		else if (game.result() == "Points")
		{
			int point = game.value_1() + game.value_2();
			//second phase = try to roll for point value
		}
	}
}
