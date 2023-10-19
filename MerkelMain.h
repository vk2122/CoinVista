#pragma once

#include "OrderBookEntry.h"
#include <vector>

class MerkelMain
{
public:
    MerkelMain();
    void init();

private:
    void loadOrderBook();
    void printMenu();
    void help();
    void marketStats();
    void offer();
    void bid();
    void wallet();
    void exitProgram();
    int getUserOption();
    void menuFunctionality(int userOption);
    vector<OrderBookEntry> orders;
};