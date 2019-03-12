#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll_ol.h"

TEST_CASE("Testing valid results")
{
	Die d1, d2;
	Roll game;
	for (int i = 0; i < 20; i++)
	{
		game.roll(d1, d2);
		if (game.value_1() + game.value_2() == 2 ||
			game.value_1() + game.value_2() == 3 ||
			game.value_1() + game.value_2() == 12)
		{
			REQUIRE(game.result() == "Craps");
		}
		else if (game.value_1() + game.value_2() == 7 ||
			game.value_1() + game.value_2() == 11)
		{
			REQUIRE(game.result() == "Natural");
		}
		else
		{
			REQUIRE(game.result() == "Points");
		}
	}
}
