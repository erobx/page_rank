#include <iostream>
#include <string>
//#include "../include/AdjacencyList.h"
#include "AdjacencyList.h"

int main() {
    AdjacencyList g;
    int no_of_lines, power_iterations;
    std::string from, to;
    std::cin >> no_of_lines;
    std::cin >> power_iterations;
    for (int i = 0; i < no_of_lines; i++) {
        std::cin >> from;
        std::cin >> to;
        g.insertEdge(from, to);
    }
    g.pageRank(power_iterations);

    return 0;
}