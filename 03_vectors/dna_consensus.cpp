#include "dna_consensus.h"
#include<iostream>

using std::cout;

string final_consensus(vector<int> a_cons, vector<int> t_cons, vector<int> c_cons, vector<int> g_cons)
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

void build_profile(vector<string> dna_dataset, vector<int>& a_cons, vector<int>& t_cons, vector<int>& c_cons, vector<int>& g_cons)
{
	for (int c = 0; c < dna_dataset.size(); c++) // make these manual loops, not autp
	{
		for (int v = 0; v < dna_dataset[c].size(); v++)
		{
			if (v == 'A' || v == 'a')
			{
				++a_cons[v];
			}
			else if (v == 'T' || v == 't')
			{
				++t_cons[v];
			}
			else if (v == 'C' || v == 'c')
			{
				++c_cons[v];
			}
			else if (v == 'G' || v == 'g')
			{
				++g_cons[v];
			}
		}
	}
}
