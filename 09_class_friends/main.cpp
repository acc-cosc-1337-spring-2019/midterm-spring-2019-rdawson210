#include "roll_friend.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

int main()
{

	Die die1;
	Die die2;
	Roll turn(die1, die2);
	turn.roll();
	cout << turn;
}