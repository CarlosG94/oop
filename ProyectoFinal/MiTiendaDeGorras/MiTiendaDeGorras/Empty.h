#pragma once
#include "Headwear.h"
#include <iostream>
#include <string.h>

class Empty : public Headwear
{
    
public:
    Empty(string title,
          string color,
          int dayStocked, int monthStocked, int yearStocked,
          double buyPrice,
          double sellPrice,
          int availableStock,
          int numStockBought):Headwear(title, color,
                                        dayStocked, monthStocked,
                                        yearStocked, buyPrice,
                                        sellPrice, availableStock,
                                        numStockBought){}
    Headwear *Nonexistent = new Empty(" "," ",
                                0, 0, 0,
                                0,
                                0,
                                0,
                                0);
    ~Empty(){}
    
};