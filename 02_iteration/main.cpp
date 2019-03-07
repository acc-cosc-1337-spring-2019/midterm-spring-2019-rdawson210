#include "fibonacci.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	
	int choice, num;
	do
	{
		cout << "Enter a number to get the Fibonacci sequence up to that number" << "\n";
		cin >> num;
		string result = get_fibonacci(num);
		cout << "Result: " << result << "\n" << "Press 1 to try another number. Press 2 to exit." << "\n";
		cin >> choice;
	} while (choice == 1);
}