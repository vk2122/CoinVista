#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(double _price,
                               double _amount,
                               string _timestamp,
                               string _product,
                               OrderBookType _orderType) : price(_price), amount(_amount), timestamp(_timestamp), product(_product), orderType(_orderType)
{
}

OrderBookType OrderBookEntry::stringToOrderBookType(string s)
{
    if (s == "ask")
    {
        return OrderBookType::ask;
    }
    if (s == "bid")
    {
        return OrderBookType::bid;
    }
    return OrderBookType::unknown;
}