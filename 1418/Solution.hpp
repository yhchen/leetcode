#ifndef __SOLUTION_HPP__
#define __SOLUTION_HPP__

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        map<string, map<int, int>* > mapTableOrders; // <food, <table, number> >
        map<int, int> mapTable;

        for (const auto& order: orders) {
            const auto tableId = atoi(order[1].c_str());
            const auto& foodName = order[2];
            mapTable.try_emplace(tableId, 0);
            auto iter = mapTableOrders.find(foodName);
            if (iter == mapTableOrders.end()) {
                iter = mapTableOrders.emplace(foodName, new std::map<int, int>()).first;
            }
            auto* foodTable = iter->second;
            auto iter2 = foodTable->find(tableId);
            if (iter2 == foodTable->end()) foodTable->emplace(tableId, 1);
            else ++iter2->second;
        }

        // init res
        vector<vector<string>> result;
        result.resize(mapTable.size() + 1);
        const auto foodTableSize = mapTableOrders.size() + 1;
        for (int i = result.size()-1; i > -1; --i) result[i].resize(foodTableSize, "0");
        result[0][0] = "Table";
        // make table index
        {
            int tableIdx = 0;
            for (auto& table: mapTable) {
                result[table.second = ++tableIdx][0] = integer_to_string(table.first);
            }
        }

        // make count
        int foodIdx = 0;
        for (const auto& [food, tableInfos] : mapTableOrders) {
            result[0][++foodIdx] = food;
            for (const auto& [table, count] : *tableInfos) {
                result[mapTable[table]][foodIdx] = integer_to_string(count);
            }
            delete tableInfos;
        }
        mapTableOrders.clear();

        return result;
    }

private:
    inline const char* integer_to_string(int i) const
    {
        static char sTmp[32];
        sprintf(sTmp, "%d", i);
        return sTmp;
    }
};

#endif // __SOLUTION_HPP__