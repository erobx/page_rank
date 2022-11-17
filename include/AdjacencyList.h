#pragma once
#include <map>
#include <string>
#include <vector>

class AdjacencyList {
    private:
        std::map<std::string, std::vector<std::string>> adjlist;
        std::map<std::string, double> ranks;

    public:
        void insertEdge(std::string src, std::string dst);
        void setRanks();
        std::vector<double> getNewRanks();
        std::map<std::string, double> copyList();
        void pageRank(int p);
        void printRanks();
        std::vector<double> getRanks();
};