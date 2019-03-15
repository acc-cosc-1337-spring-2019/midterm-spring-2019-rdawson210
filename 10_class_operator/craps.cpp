#include "craps.h"

using std::cout;
using std::cin;

void Craps::play_game()
{
	char a;
	int i = 1;
	Die d1;
	Die d2;
	string indicator;
	for (auto p : shooters)
	{
		do
		{
			cout << "Player #" << i << "! Press any key to roll" << "\n";
			cin >> a;
			Roll& game = p.shoot(d1, d2);
			rolls.push_back(game);
			if (game.result() == "Craps")
			{
				cout << "Result: " << game.value_1() + game.value_2() << ". Craps. Turn over!" << "\n";
				indicator = "Stop";
				break;
			}
			else if (game.result() == "Natural")
			{
				cout << "Result: " << game.value_1() + game.value_2() << ". Natural. Roll again!" << "\n";
				continue;
			}
			else if (game.result() == "Points")
			{
				cout << "Result: " << game.value_1() + game.value_2() << ". Points. Roll again!" << "\n";
				int point = game.value_1() + game.value_2();
				do
				{
					cout << "Try to match your previous roll. Press any key to roll" << "\n";
					cin >> a;
					Roll& game = p.shoot(d1, d2);
					rolls.push_back(game);
					if (game.value_1() + game.value_2() == point)
					{
						cout << "Result: " << game.value_1() + game.value_2() << ". Success. Roll again!" << "\n";
						indicator = "Go";
						continue;
					}
					else
					{
						cout << "Result: " << game.value_1() + game.value_2() << ". Fail. Turn over!" << "\n";
						indicator = "Stop";
						break;
					}
				} while (indicator == "Go");
			}
		} while (indicator != "Stop");
		i++;
	}
}

ostream & operator<<(ostream & out, const Craps & game)
{
	for (auto f : game.rolls)
	{
		out << "Result: " << f.result() << "\n";
	}
	return out;
}

istream & operator>>(istream & in,  Craps & game)
{
	int num;
	in >> num;
	for (int i = 0; i < num; i++)
	{
		Shooter player;
		game.shooters.push_back(player);
	}
	return in;
}
