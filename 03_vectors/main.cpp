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
	char choice = '1';
	string input;
	vector<string> dna_dataset;
	while (choice == '1' || choice == '2')
	{
		do
		{
			cout << "Input a DNA string" << "\n";
			cin >> input;
			dna_dataset.push_back(input);
			cout << "To enter another DNA string, press 1. To get results, press 2." << "\n";
			cin >> choice;
		} while (choice == '1');
		int size = input.length();
		vector<int> a_cons = { size, 0 };
		vector<int> t_cons = { size, 0 };
		vector<int> c_cons = { size, 0 };
		vector<int> g_cons = { size, 0 };
	}
}