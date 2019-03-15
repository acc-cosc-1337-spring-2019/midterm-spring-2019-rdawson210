#include "craps.h"
#include <iostream>

using std::cin;
using std::cout;

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
int main() 
{
	
	Craps game;
	cout << "How many players?" << "\n";
	cin >> game;
	game.play_game();
	cout << game;

}