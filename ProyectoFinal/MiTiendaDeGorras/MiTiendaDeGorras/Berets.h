#pragma once
#include "Casual.h"

class Berets : public Casual
{
public:
    Berets(string title,
           string color,
           string casualEvent,
           int dayStocked, int monthStocked, int yearStocked,
           double buyPrice,
           double sellPrice,
           int availableStock,
           int numStockBought):Casual(title, color, casualEvent,
                                      dayStocked, monthStocked,
                                      yearStocked, buyPrice,
                                      sellPrice, availableStock,
                                      numStockBought){token = 3;}
    ~Berets(){}
};