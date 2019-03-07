#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fibonacci.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test get fibonacci")
{
	REQUIRE(get_fibonacci(10) == "0, 1, 1, 2, 3, 5, 8");
	REQUIRE(get_fibonacci(100) == "0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89");
}
