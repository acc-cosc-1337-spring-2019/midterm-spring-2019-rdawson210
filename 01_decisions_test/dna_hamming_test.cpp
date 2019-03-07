#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "dna_hamming.h"

TEST_CASE("Test configuration setup") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test dna hamming")
{
	REQUIRE(get_dna_hamming_distance("CTAGATGTCCTAAGC", "CTTGAGGCCCTGAGC") == 4);
	REQUIRE(get_dna_hamming_distance("CTAGATGTCCTAAGC", "GATCTACAGGATTCG") == 15);
	REQUIRE(get_dna_hamming_distance("CTAGATGTCCTAAGC", "CTAGATGTCCTAAGC") == 0);
}