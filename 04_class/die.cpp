#include "die.h"
#include<cstdlib>

using std::rand;

void Die::roll()
{
	roll_value = rand() % 6 + 1;
}

int const Die::rolled_value()
{
	return roll_value;
}
