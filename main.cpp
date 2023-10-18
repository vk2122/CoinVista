#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printMenu()
{
    cout << "==============================================" << endl;
    cout << "\t\t DashBoard" << endl;
    cout << "==============================================" << endl;
    cout << "1: Help" << endl;
    cout << "2: Exchange stats" << endl;
    cout << "3: Make an offer" << endl;
    cout << "4: Make a bid" << endl;
    cout << "5: Wallet Stats" << endl;
    cout << "6: Continue" << endl;
    cout << "7: Exit" << endl;
    cout << "==============================================" << endl;
}

int getUserOption()
{
    int n;
    cout << "Choose your option : ";
    cin >> n;
    return n;
}

void help()
{
    cout << "Aim is to make money!" << endl;
}

void exchange()
{
    cout << "Market looks good!" << endl;
}

void offer()
{
    cout << "Make an offer, no one can deny!" << endl;
}

void bid()
{
    cout << "Make a bid" << endl;
}

void wallet()
{
    cout << "Wallet Status" << endl;
}

void exitProgram()
{
    cout << "Exiting the program..." << endl;
    exit(0);
}

void menuFunctionality(int userOption)
{
    switch (userOption)
    {
    case 1:
        help();
        break;
    case 2:
        exchange();
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

int main()
{
    enum class OrderBookType
    {
        bid,
        ask
    };

    vector<double> prices;
    vector<double> amounts;
    vector<string> timestamps;
    vector<string> products;
    vector<OrderBookType> orderTypes;

    while (true)
    {
        printMenu();
        int userOption = getUserOption();
        cout << "You selected: " << userOption << endl;
        menuFunctionality(userOption);
    }
    return 0;
}