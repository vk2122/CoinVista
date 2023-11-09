#pragma once
#include <vector>
#include <string>
#include "OrderBookEntry.h"

using namespace std;

class CSVReader
{
public:
    CSVReader();
    static vector<OrderBookEntry> readCSV(string csvFile);

private:
    static vector<string> tokenise(string csvLine, char separator);
    static OrderBookEntry stringToOBE(vector<string> strings);
};
