#ifndef ROLL_OL_H
#define ROLL_OL_H
#include "die.h"
#include<string>

using std::string;

class Roll
{
public:
	Roll(); //default constructor
	Roll(Die& d1, Die& d2) : die1(d1), die2(d2) { roll(d1, d2); };
	void roll();
	void roll(Die& d1, Die& d2); //overloaded
	string result();
	int const value_1() { return die1_roll_value; }
	int const value_2() { return die2_roll_value; }

private:
	Die& die1;
	Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();
};

#endif //ROLL_OL_H