#include "die.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	char choice;
	do
	{
		Die game;
		game.roll();
		cout << "Roll Result:  " << game.rolled_value() << "\n";
		cout << "To roll again, press 1. To exit, press any key." << "\n";
		cin >> choice;
	} while (choice == '1');
}