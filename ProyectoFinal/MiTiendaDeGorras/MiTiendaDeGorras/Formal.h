#pragma once
#include "Headwear.h"
#include <iostream>

class Formal : public Headwear
{
protected:
    string formalEvent;
public:
    
    string getFormalEvent(){return formalEvent;}
    
    Formal(string title,
           string color,
           string formalEvent,
           int dayStocked, int monthStocked, int yearStocked,
           double buyPrice,
           double sellPrice,
           int availableStock,
           int numStockBought):Headwear(title, color,
                                        monthStocked, dayStocked,
                                        yearStocked, buyPrice,
                                        sellPrice, availableStock,
                                        numStockBought){}
    
    void Print()
    {
    cout << "Information about this product: \nTitle: " << title << "\nColor: "  << color << "\nEvent: " << formalEvent << "\nDay, month and year stocked: " << dayStocked << " " << monthStocked << ", " << yearStocked << "\nBuying Price: " << buyPrice << "\nSelling Price: " << sellPrice << "\nAvailable stock right now: " << availableStock << "\nOriginal Stock Bought: " << numStockBought << endl;
    }
};
