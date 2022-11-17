#include "../src/AdjacencyList.cpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <functional>

/*
	To check output (At the not_so_simple_graph directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

// TEST_CASE("Test 1", "[unit]") {
// 	AdjacencyList g;

// 	g.insertEdge("google.com", "gmail.com");
// 	g.insertEdge("google.com", "maps.com");
// 	g.insertEdge("facebook.com", "ufl.edu");
// 	g.insertEdge("ufl.edu", "google.com");
// 	g.insertEdge("ufl.edu", "gmail.com");
// 	g.insertEdge("maps.com", "facebook.com");
// 	g.insertEdge("gmail.com", "maps.com");

// 	g.pageRank(2);
	
// 	std::vector<int> expected_ranks = {20, 20, 10, 30, 20};
// 	std::vector<double> actual_ranks = g.getRanks();
// 	std::vector<int> result;

// 	for (double e : actual_ranks) {
// 		result.push_back(e*100);
// 	}

// 	REQUIRE(expected_ranks == result);
// }

// TEST_CASE("Test 2", "[unit]") {
// 	AdjacencyList g;
// 	g.insertEdge("TeaStori", "TeaBestea");
// 	g.insertEdge("TeaStori", "TeaMoment");
// 	g.insertEdge("TeaMoment", "TeaBestea");
// 	g.insertEdge("TeaBestea", "Tiger_Sugar");
// 	g.insertEdge("TeaMoment", "Tiger_Sugar");

// 	g.pageRank(2);
// 	std::vector<int> expected_ranks = {25, 12, 0, 38};
// 	std::vector<double> actual_ranks = g.getRanks();
// 	std::vector<int> result;
// 	for (double e : actual_ranks) {
// 		result.push_back(round(e*100));
// 	}
// 	REQUIRE(expected_ranks == result);

// 	g.pageRank(3);
// 	expected_ranks = {6, 0, 0, 31};
// 	actual_ranks = g.getRanks();
// 	for (double e : actual_ranks) {
// 		result.push_back(round(e*100));
// 	}
// 	REQUIRE(expected_ranks == result);

// 	g.pageRank(4);
// 	expected_ranks = {0, 0, 0, 6};
// 	actual_ranks = g.getRanks();
// 	for (double e : actual_ranks) {
// 		result.push_back(round(e*100));
// 	}
// 	REQUIRE(expected_ranks == result);

// 	g.pageRank(5);
// 	expected_ranks = {0, 0, 0, 0};
// 	actual_ranks = g.getRanks();
// 	for (double e : actual_ranks) {
// 		result.push_back(round(e*100));
// 	}
// 	REQUIRE(expected_ranks == result);
// }

// TEST_CASE("Test 3", "[unit]") {
// 	AdjacencyList g;

// 	g.insertEdge("4", "0");
// 	g.insertEdge("5", "0");
// 	g.insertEdge("6", "0");
// 	g.insertEdge("7", "0");
// 	g.insertEdge("0", "1");
// 	g.insertEdge("2", "1");
// 	g.insertEdge("5", "1");
// 	g.insertEdge("1", "2");
// 	g.insertEdge("6", "2");
// 	g.insertEdge("0", "3");
// 	g.insertEdge("1", "3");
// 	g.insertEdge("2", "3");
// 	g.insertEdge("3", "4");
// 	g.insertEdge("2", "5");
// 	g.insertEdge("3", "5");
// 	g.insertEdge("3", "6");
// 	g.insertEdge("5", "6");
// 	g.insertEdge("7", "6");
// 	g.insertEdge("1", "7");
// 	g.insertEdge("2", "7");
// 	g.insertEdge("5", "7");

// 	g.pageRank(5);
// }

// TEST_CASE("Test 4", "[unit]") {
// 	AdjacencyList g;

// 	g.insertEdge("0", "1");
// 	g.insertEdge("1", "4");
// 	g.insertEdge("1", "5");
// 	g.insertEdge("2", "4");
// 	g.insertEdge("3", "2");
// 	g.insertEdge("3", "5");
// 	g.insertEdge("4", "3");
// 	g.insertEdge("4", "5");
// 	g.insertEdge("5", "3");


// 	int p = 10000;
// 	g.pageRank(p);
// }

// TEST_CASE("Test 5", "[unit]") {
// 	AdjacencyList g;

// 	g.insertEdge("0", "1");
// 	g.insertEdge("1", "2");
// 	g.insertEdge("2", "3");
// 	g.insertEdge("3", "4");
// 	g.insertEdge("4", "0");

// 	int p = 50;
// 	g.pageRank(p);
// }

// TEST_CASE("Test 6", "[unit]") {
// 	AdjacencyList g;

// 	g.insertEdge("0", "1");
// 	g.insertEdge("1", "2");
// 	g.insertEdge("2", "3");
// 	g.insertEdge("3", "4");
// 	g.insertEdge("4", "0");

// 	int p = 100;
// 	g.pageRank(p);
// }
