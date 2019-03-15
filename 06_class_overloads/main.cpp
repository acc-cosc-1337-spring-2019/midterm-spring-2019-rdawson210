#include"roll_ol.h"
#include<vector>
#include<iostream>

using std::vector;
using std::cout;

/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

int main() 
{
	Die d1, d2;
	Roll game;
	vector<Roll> log;
	for (int i = 0; i < 20; i++)
	{
		game.roll(d1, d2);
		cout << "Die 1: " << game.value_1() << "\n" << "Die 2: " << game.value_2() << "\n";
		log.push_back(game);
	}
	int i = 1;
	for (auto c : log)
	{
		cout << "Roll #" << i << " Results: " << c.result() << "\n";
		i++;
	}

}