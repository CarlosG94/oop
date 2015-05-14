#pragma once
#include "Headwear.h"
#include <iostream>

class Casual : public Headwear
{
protected:
    string casualEvent;
    
public:
    string getCasualEvent(){return casualEvent;}
    
    Casual(string title,
           string color,
           string casualEvent,
           int dayStocked, int monthStocked, int yearStocked,
           double buyPrice,
           double sellPrice,
           int availableStock,
           int numStockBought):Headwear(title, color,
                                        monthStocked, dayStocked,
                                        yearStocked, buyPrice,
                                        sellPrice, availableStock,
                                        numStockBought){}
    
    void print()
    {
        cout << "Information about this product: \nTitle: " << title << "\nColor: " << color << "\nEvent: " << casualEvent << "\nDay, month and year stocked: " << dayStocked << " " << monthStocked << ", " << yearStocked << "\nBuying Price: " << buyPrice << "\nSelling Price: " << sellPrice << "\nAvailable stock right now: " << availableStock << "\nOriginal Stock Bought: " << numStockBought << endl;
    }
    
};
