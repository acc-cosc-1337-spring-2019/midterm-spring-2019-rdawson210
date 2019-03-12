#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "shooter.h"
/*
TEST_CASE("Testing valid results")
{
	Die d1, d2;
	for (int i = 0; i < 20; i++)
	{
		Shooter game;
		Roll roll = game.shoot(d1, d2);
		if (roll.value_1() + roll.value_2() == 2 ||
			roll.value_1() + roll.value_2() == 3 ||
			roll.value_1() + roll.value_2() == 12)
		{
			REQUIRE(roll.result() == "Craps");
		}
		else if (roll.value_1() + roll.value_2() == 7 ||
			roll.value_1() + roll.value_2() == 11)
		{
			REQUIRE(roll.result() == "Natural");
		}
		else
		{
			REQUIRE(roll.result() == "Points");
		}
	}
}
/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/
