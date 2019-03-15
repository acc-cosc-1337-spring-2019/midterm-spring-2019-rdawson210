#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"dna_consensus.h"

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test final_consensus")
{
	string a_cons = "51005500";
	string t_cons = "15000116";
	string c_cons = "00142061";
	string g_cons = "11630100";
	REQUIRE(final_consensus(a_cons, t_cons, c_cons, g_cons) == "ATGCAACT");

	string a_cons2 = "61005500";
	string t_cons2 = "15440116";
	string c_cons2 = "60142011";
	string g_cons2 = "11030100";
	REQUIRE(final_consensus(a_cons2, t_cons2, c_cons2, g_cons2) == "CTTCAACT"); // confirms - when several options are possible, function
																				//prioritizes g, then c, then t, then a.
}

TEST_CASE("Test build_profile")
{
	vector<string> dna_dataset = { "ATCCAGCT", "GGGCAACT", "ATGGATCT", "AAGCAACC", "TTGGAACT", "ATGCCATT", "ATGGCACT" };
	string a_cons3;
	string t_cons3;
	string c_cons3;
	string g_cons3;
	build_profile(dna_dataset, a_cons3, t_cons3, c_cons3, g_cons3);
	string a_cons4 = "51005500";
	string t_cons4 = "15000116";
	string c_cons4 = "00142061";
	string g_cons4 = "11630100";
	REQUIRE(a_cons3 == a_cons4);
	REQUIRE(t_cons3 == t_cons4);
	REQUIRE(c_cons3 == c_cons4);
	REQUIRE(g_cons3 == g_cons4);
}
