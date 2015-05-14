#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Headwear
{
protected:
    string title;
    string color;
    
    double buyPrice;
    double sellPrice;
    
    int dayStocked;
    int monthStocked;
    int yearStocked;
    int sales;
    int availableStock;
    int numStockBought;
    
    int actualDay = 23;
    int actualMonth = 5;
    int actualYear = 2015;
    
public:
    
    bool expired = false;
    int token = 0;
    
    Headwear(){}
    Headwear(string title,
             string color,
             int dayStocked, int monthStocked, int yearStocked,
             double buyPrice,
             double sellPrice,
             int availableStock,
             int numStockBought):title(title), color(color), buyPrice(buyPrice),
            sellPrice(sellPrice), sales(0), availableStock(availableStock),
            yearStocked(yearStocked), numStockBought(availableStock), monthStocked(monthStocked), dayStocked(dayStocked)
    {
        if (yearStocked < actualYear && monthStocked < actualMonth && dayStocked+1 < actualDay)
            expired = true;
    }
    
    virtual ~Headwear(){}
    
    string getTitle(){return title;}
    string getColor(){return color;}
    
    double getBuyPrice(){return buyPrice;}
    double getsellPrice(){return sellPrice;}
    
    int getSales(){return sales;}
    int getAvialableStock(){return availableStock;}
    int getnumStockBought(){return numStockBought;}
    int getDay(){return dayStocked;}
    int getMonth(){return monthStocked;}
    int getYear(){return yearStocked;}
    int getToken(){return token;}
    
    bool getExpired(){return expired;}
    
    void supply(int amount)
    {
        availableStock += amount;
        numStockBought += amount;
        cout << "You have added new stock\n";
    }
    
    void printSales(string title)
    {
        cout << "You have sold " << sales << " " << title << endl;
    }
    
    int balance()
    {
        return (sales*sellPrice)-(numStockBought*buyPrice);
    }
    
    void buy(int amount)
    {
        int totalCost;
        if (amount <= availableStock)
        {
            totalCost = amount*sellPrice;
            availableStock -= amount;
            sales += amount;
            cout << "You have added " << amount << " units for " << totalCost << " in you cart.\n";
        } else {
            cout << "Not enough stock\n";
        }
    }
    
    void print()
    {
        cout << "Information about this product: \nTitle: " << title << "\nColor: " << color << "\nDay, month and year stocked: " << dayStocked << " " << monthStocked << ", " << yearStocked << "\nBuying Price: " << buyPrice << "\nSelling Price: " << sellPrice << "\nAvailable stock right now: " << availableStock << "\nOriginal Stock Bought: " << numStockBought << endl;
    }
    
    
};













