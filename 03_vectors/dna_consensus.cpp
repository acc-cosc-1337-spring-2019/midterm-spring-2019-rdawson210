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


string build_profile(vector<string>dna_dataset, string& a_cons, string& t_cons, string& c_cons, string& g_cons)
{
	for (int a = 0; a < dna_dataset[0].length(); a++)
	{
		int a_temp = 0;
		int t_temp = 0;
		int c_temp = 0;
		int g_temp = 0;
		for (int b = 0; b< dna_dataset.size(); b++)
		{
			string temp = dna_dataset[b];
			if (temp[a] == 'A' || temp[a] == 'a')
			{
				++a_temp;
			}
			else if (temp[a] == 'T' || temp[a] == 't')
			{
				++t_temp;
			}
			else if (temp[a] == 'C' || temp[a] == 'c')
			{
				++c_temp;
			}
			else if (temp[a] == 'G' || temp[a] == 'g')
			{
				++g_temp;
			}
		}
		a_cons += to_string(a_temp);
		t_cons += to_string(t_temp);
		c_cons += to_string(c_temp);
		g_cons += to_string(g_temp);
	}
	string consensus = final_consensus(a_cons, t_cons, c_cons, g_cons);
	return consensus;
}
