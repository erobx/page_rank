//#include "../include/AdjacencyList.h"
#include "AdjacencyList.h"
#include <iostream>
#include <iomanip>

// NEW
void AdjacencyList::insertEdge(std::string src, std::string dst) {
    auto it = adjlist.find(src);
    auto it2 = adjlist.find(dst);
    // if dst vertex does not exist
    if (it2 == adjlist.end()) {
        // insert dst into adjlist and ranks
        std::vector<std::string> temp = {};
        std::pair<std::string, std::vector<std::string>> into_list (dst, temp);
        std::pair<std::string, double> into_ranks (dst, 0.0);
        adjlist.insert(into_list);
        ranks.insert(into_ranks);
    }
    // if src vertex does not exist
    if (it == adjlist.end()) {
        // insert src into adjlist and ranks
        std::vector<std::string> temp = {dst};
        std::pair<std::string, std::vector<std::string>> into_list (src, temp);
        std::pair<std::string, double> into_ranks (src, 0.0);
        adjlist.insert(into_list);
        ranks.insert(into_ranks);
    } else {
        adjlist.at(src).push_back(dst);
    }
}

// set all vertex ranks = 1/|V|
void AdjacencyList::setRanks() {
    int v = ranks.size();
    for (auto it = ranks.begin(); it != ranks.end(); it++) {
        (*it).second = 1.0/v;
    }
}

// return new ranks based on rank / out_degree
std::vector<double> AdjacencyList::getNewRanks() {
    std::vector<double> result;
    for (auto it = ranks.begin(); it != ranks.end(); it++) {
        double newrank = (*it).second / adjlist.at((*it).first).size();
        result.push_back(newrank);
    }
    return result;
}

// return a copy of ranks with doubles init 0.0
std::map<std::string, double> AdjacencyList::copyList() {
    std::map<std::string, double> copy;
    for (auto it = ranks.begin(); it != ranks.end(); it++) {
        std::pair<std::string, double> pair ((*it).first, 0.0);
        copy.insert(pair);
    }
    return copy;
}

void AdjacencyList::pageRank(int p) {
    // initalalize ranks
    setRanks();
    if (p > 1) {
        for (int i = 1; i < p; i++) {
            std::vector<double> calculatedRanks = getNewRanks(); // ranks from each iteration
            std::map<std::string, double> newRanks = copyList(); // empty map
            int index = 0;
            for (auto it = adjlist.begin(); it != adjlist.end(); it++) {
                for (std::string s : (*it).second) {
                    newRanks.at(s) += calculatedRanks.at(index);
                }
                index++;
            }
            ranks = newRanks;
        }
    }
    printRanks();
}

void AdjacencyList::printRanks() {
    for (auto it = ranks.begin(); it != ranks.end(); it++) {
        std::cout << (*it).first << ' ';
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << (*it).second << std::endl;
    }
}

std::vector<double> AdjacencyList::getRanks() {
    std::vector<double> result;
    for (auto it = ranks.begin(); it != ranks.end(); it++) {
        result.push_back((*it).second);
    }
    return result;
}