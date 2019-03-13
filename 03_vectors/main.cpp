#include "dna_consensus.h"
#include<iostream>
#include<vector>
#include<string>

using std::cout;
using std::cin;
using std::vector;
using std::string;

int main()
{
	char choice1 = '1';
	char choice2 = '1';
	string input;
	vector<string> dna_dataset;
	do
	{
		do
		{
			cout << "Input a DNA string" << "\n";
			cin >> input;
			dna_dataset.push_back(input);
			cout << "To enter another DNA string, press 1. To get results, press 2." << "\n";
			cin >> choice2;
		} while (choice2 == '1');
		string a_cons, t_cons, c_cons, g_cons;
		string result = build_profile(dna_dataset, a_cons, t_cons, c_cons, g_cons);
		cout << "DNA Consensus: " << result << "\n";
		cout << "To repeat, press 1. To exit, press any key." << "\n";
		cin >> choice1;
	} while (choice1 == '1');
}