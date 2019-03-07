#include "dna_hamming.h"
#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	string dna1, dna2;
	int choice;
	do
	{
		cout << "Please enter the first DNA string: ";
		cin >> dna1;
		cout << "Please enter the second DNA string: ";
		cin >> dna2;
		int result = get_dna_hamming_distance(dna1, dna2);
		cout << "Hamming Distance: " << result << "\n" << "To enter more DNA strings, press 1. To exit, 2." << "\n";
		cin >> choice;
	} while (choice == 1);
}