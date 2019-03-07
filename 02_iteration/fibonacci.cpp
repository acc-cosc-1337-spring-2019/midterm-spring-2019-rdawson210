#include "fibonacci.h"
#include <string>
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

string get_fibonacci(int num)
{
	string seq = "0, 1";
	int t1 = 0, t2 = 1, nt = t1 + t2;
	while (nt <= num)
	{
		seq.append(", ");
		seq += std::to_string(nt);
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
	}
	return seq;
}
