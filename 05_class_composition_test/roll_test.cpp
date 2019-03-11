#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "roll.h"


/*
Write a test case to assert that retrieving the result from a roll before
calling the roll function returns the string:

Must roll first!
*/
TEST_CASE("Testing empty string result")
{
	Die d1, d2;
	Roll game(d1, d2);
	REQUIRE(game.result() == "");
}

/*
TEST_CASE("Testing valid results")
{
	Die d1, d2;
	Roll game(d1, d2);
	for (int i = 0; i < 20; i++)
	{
		game.roll();
		REQUIRE(game.result() == );
	}
}
*/


/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/
