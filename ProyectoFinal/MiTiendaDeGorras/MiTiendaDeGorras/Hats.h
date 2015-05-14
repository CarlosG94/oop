#pragma once
#include "Formal.h"

class Hats : public Formal
{
public:
    Hats(string title,
         string color,
         string formalEvent,
         int dayStocked, int monthStocked, int yearStocked,
         double buyPrice,
         double sellPrice,
         int availableStock,
         int numStockBought):Formal(title, color, formalEvent,
                                    dayStocked, monthStocked,
                                    yearStocked, buyPrice,
                                    sellPrice, availableStock,
                                    numStockBought){token = 1;}
    
    ~Hats(){}

};