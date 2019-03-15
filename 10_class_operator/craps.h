#ifndef CRAPS_H
#define CRAPS_H
#include<iostream>
#include<vector>
#include "shooter.h"

using std::ostream;
using std::istream;
using std::vector;

class Craps
{
public:
	void play_game();
	friend ostream & operator <<(ostream & out, const Craps & v);
	friend istream & operator >>(istream & in, Craps & game);
private:
	vector<Roll> rolls;
	vector<Shooter> shooters;
};

#endif //CRAPS_H