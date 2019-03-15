#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"


//Create a test case that shows that a copy of Die are not the same
//objects in memory
TEST_CASE("Testing copy & reference are different")
{
	Die original;
	Die copy = original; //copy matches original only at this point
	Die & reference = original; //any changes made to original will also be made to reference
	REQUIRE(copy.rolled_value() == original.rolled_value());
	original.roll(); //changing the original
	REQUIRE(copy.rolled_value() != original.rolled_value()); //the copy is unchanged
	REQUIRE(reference.rolled_value() == original.rolled_value()); //however the reference has changed &
																//still matches original
}
