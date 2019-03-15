#include "die.h"

int main() 
{
	Die original;
	Die copy = original; //copy is created and matches original at this point only. When changes are made
						//they will no longer match
	Die & reference = original; //as a reference, any changes made to original will be made to reference as
								//well, and vice versa

}