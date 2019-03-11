#ifndef CLASS_H
#define CLASS_H

class Die
{
public:
	void roll();
	int const rolled_value();

private:
	int roll_value;
	int sides{ 6 };
};

#endif //CLASS_H