#include"shooter.h"
#include<vector>
#include<iostream>

using std::cout;
using std::cin;
using std::vector;
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	Die die1;
	Die die2;
	Shooter game;
	char choice = '1';
	vector<Roll> history;
	int i = 0;
	while (choice == '1' && i < 10)
	{
		cout << "To shoot, press 1" << "\n";
		cin >> choice;
		Roll rollgame = game.shoot(die1, die2);
		history.push_back(rollgame);
		i++;
		cout << "User roll #" << i << "\n";
	}
	for (auto v : history)
	{
		cout << "Results:" << v.result() << "\n";
	}
}