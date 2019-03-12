#include "dna_consensus.h"
#include<iostream>

using std::cout;
using std::to_string;

string final_consensus(string a_cons, string t_cons, string c_cons, string g_cons)
{
	string consensus = "";
	int v = 0;
	for (int v = 0; v < a_cons.size(); v++)
	{
		if (a_cons[v] > t_cons[v] && a_cons[v] > c_cons[v] && a_cons[v] > g_cons[v])
		{
			consensus.append("A");
		}
		else if (t_cons[v] > c_cons[v] && t_cons[v] > g_cons[v])
		{
			consensus.append("T");
		}
		else if (c_cons[v] > g_cons[v])
		{
			consensus.append("C");
		}
		else
		{
			consensus.append("G");
		}
	}
	return consensus;
}

/*
void build_profile(vector<string>dna_dataset, string& a_cons, string& t_cons, string& c_cons, string& g_cons)
{
	int a_temp = 0;
	int t_temp = 0;
	int c_temp = 0;
	int g_temp = 0;
	for (int a = 0; a < dna_dataset[a].length(); a++) //THIS LINE CAUSES CRASH
	{
		for (auto b : dna_dataset[a])
		{
			if (b == 'A' || b == 'a')
			{
				++a_temp;
			}
			else if (b == 'T' || b == 't')
			{
				++t_temp;
			}
			else if (b == 'C' || b == 'c')
			{
				++c_temp;
			}
			else
			{
				++g_temp;
			}
		}
		a_cons += to_string(a_temp);
		t_cons += to_string(t_temp);
		c_cons += to_string(c_temp);
		g_cons += to_string(g_temp);
	}
}
*/