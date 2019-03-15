#ifndef ROLL_FRIEND_H
#define ROLL_FRIEND_H
#include "die.h"
#include<string>
#include<iostream>

using std::ostream;
using std::string;

class Roll
{
public:
	Roll(Die& d1, Die& d2) : die1(d1), die2(d2) {};
	void roll();
	string result();
	int const value_1() { return die1_roll_value; }
	int const value_2() { return die2_roll_value; }
	friend ostream & operator << (ostream & out, const Roll & b);

private:
	Die& die1;
	Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();
};

#endif //ROLL_FRIEND_H