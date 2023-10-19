#include <iostream> 
#include "MerkelMain.h"
#include "OrderBookEntry.h"

using namespace std;

MerkelMain::MerkelMain(){};
void MerkelMain::init()
{
    while (true)
    {
        loadOrderBook();
        printMenu();
        int userOption = getUserOption();
        menuFunctionality(userOption);
    }
};

void MerkelMain::loadOrderBook()
{

    orders.emplace_back(OrderBookEntry{
        1000, 0.02, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid});
    orders.emplace_back(OrderBookEntry{
        2500, 0.12, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::ask});
}
void MerkelMain::printMenu()
{
    cout << "==============================================" << endl;
    cout << "\t\t DashBoard" << endl;
    cout << "==============================================" << endl;
    cout << "1: Help" << endl;
    cout << "2: Market Stats" << endl;
    cout << "3: Make an offer" << endl;
    cout << "4: Make a bid" << endl;
    cout << "5: Wallet Stats" << endl;
    cout << "6: Continue" << endl;
    cout << "7: Exit" << endl;
    cout << "==============================================" << endl;
}

int MerkelMain::getUserOption()
{
    int n;
    cout << "Choose your option : ";
    cin >> n;
    return n;
}

void MerkelMain::help()
{
    cout << "Aim is to make money!" << endl;
}

void MerkelMain::marketStats()
{
    cout << "OrderBook contains : " << orders.size() << " entries" << endl;
}

void MerkelMain::offer()
{
    cout << "Make an offer, no one can deny!" << endl;
}

void MerkelMain::bid()
{
    cout << "Make a bid" << endl;
}

void MerkelMain::wallet()
{
    cout << "Wallet Status" << endl;
}

void MerkelMain::exitProgram()
{
    cout << "Exiting the program..." << endl;
    exit(0);
}

void MerkelMain::menuFunctionality(int userOption)
{
    switch (userOption)
    {
    case 1:
        help();
        break;
    case 2:
        marketStats();
        break;
    case 3:
        offer();
        break;
    case 4:
        bid();
        break;
    case 5:
        wallet();
        break;
    case 6:
        cout << "Going to next time frame" << endl;
        break;
    case 7:
        exitProgram();
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
}
