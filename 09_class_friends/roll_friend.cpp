#include "roll_friend.h"


void Roll::roll()
{
	Die die1;
	Die die2;
	die1.roll();
	die2.roll();
	die1_roll_value = die1.rolled_value();
	die2_roll_value = die2.rolled_value();
	rolled = true;
}

string Roll::result()
{
	if (rolled == true)
	{
		if (craps() == true)
		{
			return "Craps";
		}
		else if (natural() == true)
		{
			return "Natural";
		}
		else
		{
			return "Points";
		}
	}
	else
	{
		return "Must roll first!";
	}
}

bool Roll::craps()
{
	if (die1_roll_value + die2_roll_value == 2 ||
		die1_roll_value + die2_roll_value == 3 ||
		die1_roll_value + die2_roll_value == 12)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Roll::natural()
{
	if (die1_roll_value + die2_roll_value == 7 ||
		die1_roll_value + die2_roll_value == 11)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//class RollFriend implementation

ostream & operator<<(ostream & out, const Roll & b)
{
	out << "Die 1: " << b.die1_roll_value << "\n";
	out << "Die 2: " << b.die2_roll_value << "\n";
	return out;
}
