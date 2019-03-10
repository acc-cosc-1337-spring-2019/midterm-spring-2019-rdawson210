#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"dna_consensus.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test final_consensus")
{
	vector<int> a_cons = { 5, 1, 0, 0, 5, 5, 0, 0 };
	vector<int> t_cons = { 1, 5, 0, 0, 0, 1, 1, 6 };
	vector<int> c_cons = { 0, 0, 1, 4, 2, 0, 6, 1 };
	vector<int> g_cons = { 1, 1, 6, 3, 0, 1, 0, 0 };
	REQUIRE(final_consensus(a_cons, t_cons, c_cons, g_cons) == "ATGCAACT");

	vector<int> a_cons2 = { 6, 1, 0, 0, 5, 5, 0, 0 };
	vector<int> t_cons2 = { 1, 5, 4, 4, 0, 1, 1, 6 };
	vector<int> c_cons2 = { 6, 0, 1, 4, 2, 0, 1, 1 };
	vector<int> g_cons2 = { 1, 1, 0, 3, 0, 1, 0, 0 };
	REQUIRE(final_consensus(a_cons2, t_cons2, c_cons2, g_cons2) == "CTTCAACT");
}
/*
TEST_CASE("Test build_profile")
{
	vector<string> dna_dataset = { "ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT" };
	vector<int> a_cons3 = { 0, 0, 0, 0, 0, 0, 0, 0 };
	vector<int> t_cons3 = { 0, 0, 0, 0, 0, 0, 0, 0 };
	vector<int> c_cons3 = { 0, 0, 0, 0, 0, 0, 0, 0 };
	vector<int> g_cons3 = { 0, 0, 0, 0, 0, 0, 0, 0 };
	build_profile(dna_dataset, a_cons3, t_cons3, c_cons3, g_cons3);

	REQUIRE(final_consensus(a_cons3, t_cons3, c_cons3, g_cons3) == "ATGCAACT");
}
*/