#include "roll.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

int main() 
{
	
	Die die1;
	Die die2;
	vector<Roll> rolls;
	for (int i = 0; i < 20; i++)
	{
		Roll turn(die1, die2);
		turn.roll();
		cout << "Value 1: " << turn.value_1() << "\n" << "Value 2: " << turn.value_2() << "\n";
		rolls.push_back(turn);
	}
	for (auto c : rolls)
	{
		cout << "Results: " << c.result() << "\n";
	}
}