//
//  main.cpp
//  MiTiendaDeGorras
//
//  Created by CarlosGutierrez on 5/7/15.
//  Copyright (c) 2015 Carlos. All rights reserved.
//

#include <iostream>
#include "Headwear.h"
#include "Caps.h"
#include "Beanie.h"
#include "Hats.h"
#include "List.h"
#include "Formal.h"
#include "Casual.h"
#include "Berets.h"
#include "Exotic.h"
#include "ShoppingCart.h"
#include "Store.h"
#include "Empty.h"

using namespace std;
int choice;
void userType();
void adminMenu();
void clientMenu();
void supply();
void balance();
void stock();
void addProduct();
void cart();
//Store<Empty*> option;
Headwear operate;
ShoppingCart<Headwear*> shoppin;
List<Headwear*> lista;
Store<Headwear*> tiendita;

void userType()
{
    cout << "Welcome to my super cool store\nAre you: \n";
    cout << "1) Admin \n";
    cout << "2) Client \n";
    cout << "0) Exit  \n";
    
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            adminMenu();
            break;
        case 2:
            clientMenu();
        default:
            break;
    }
}

void adminMenu()
{
    cout << "Operation you'd like to do: \n";
    cout << "1) Supply \n";
    cout << "2) Consult Statement \n";
    cout << "3) Look at inventory \n";
    cout << "0) Exit \n";
    
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            supply();
            break;
        case 2:
            balance();
        case 3:
            stock();
        default:
            userType();
            break;
    }
}

void supply()
{
    cout << "1) Add a product\n0)Exit\n";
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            addProduct();
            break;
        default:
            userType();
            break;
    }
}

void addProduct()
{
    cout << "What product would you like to resupply?\n1)Caps\n2)Beanies\n3)Hats\n4)Berets\n5)Exotic\n";
    cin >> choice;
    int amountToSupply;
    
    switch (choice) {
        case 1:
            cout << "How many caps would you like to add?\n";
            cin >> amountToSupply;
            operate.supply(amountToSupply);
            break;
        case 2:
            cout << "How many beanies would you like to add?\n";
            cin >> amountToSupply;
            operate.supply(amountToSupply);
            break;
        case 3:
            cout << "How many hats would you like to add?\n";
            cin >> amountToSupply;
            operate.supply(amountToSupply);
            break;
        case 4:
            cout << "How many Berets would you like to add?\n";
            cin >> amountToSupply;
            operate.supply(amountToSupply);
            break;
        case 5:
            cout << "How many exotic hats would you like to add?\n";
            cin >> amountToSupply;
            operate.supply(amountToSupply);
            break;
        default:
            break;
    }   
}

void balance()
{
    cout << "What would you like to see?\n1)Actual Balance\n2)Sales by product\n0)Exit\n";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "The current balance of the store is: -1350\n" << operate.balance() << endl;
            break;
        case 2:
            cout << "Choose from: \n1)Caps\n2)Beanies\n3)Hats\n4)Berets\n5)Exotic\n";
            cin >> choice;
            switch (choice) {
                case 1:
                    cout << "Sales:\n";
                    operate.printSales("Caps");
                    break;
                case 2:
                    cout << "Sales\n";
                    operate.printSales("Beanies");
                    break;
                case 3:
                    cout << "Sales\n";
                    operate.printSales("Hats");
                    break;
                case 4:
                    cout << "Sales\n";
                    operate.printSales("Berets");
                    break;
                case 5:
                    cout << "Sales\n";
                    operate.printSales("Exotic Hats");
                    break;
                default:
                    userType();
                    break;
            }
        default:
            break;
    }

}

void clientMenu()
{
    cout << "Operation you'd like to do: \n1)See what's in stock\n2)Buy something\n3)Consult your Shopping Cart\n0)Exit\n";
    cin >> choice;
    
    switch (choice)
    {
        case 1:
            stock();
            break;
        case 2:
            operate.buy(0);
            break;
        case 3:
            cart();
            break;
        default:
            userType();
            break;
    }
}

void stock()
{
    cout << "The current items that are available in stock right now are: \n";
    lista.print();
    cart();
}

void cart()
{
    string name;
    string cardNumber;
    cout << "Your current cart has 0 items: ";
    cout << "Would you like to proceed to checkout?\n1) Yes\n0) Exit\n";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "1) Debit\n2) Credit\n3) Cash\n";
            cin >> choice;
            switch (choice)
            {
                case 1:
                    cout << "Please enter your card number:\n";
                    cin >> cardNumber;
                    cout << "please enter your name\n";
                    cin >> name;
                    shoppin.PayDebit(name, cardNumber);
                case 2:
                    cout << "Please enter your card number:\n";
                    cin >> cardNumber;
                    cout << "please enter your name\n";
                    cin >> name;
                    shoppin.PayCredit(name, cardNumber);
                    break;
                case 3:
                    shoppin.PayCash();
                default:
                    cart();
                    break;
            }
            break;
            
        default:
            userType();
            break;
    }
}

int main() {
    
    Headwear *BaseballCap = new Caps("Baseball Cap", //TITLE
                                     "Navy Blue",   //COLOR
                                     "Baseball Game", //EVENT
                                     11, 5, 2015,   //DATE STOCKED
                                     20,    //BUYING PRICE
                                     30,    //SELLING PRICE
                                     10,    //IN STOCK
                                     20);   //ORIGINAL STOCK
    Headwear *FootballCap = new Caps("American Football Cap",
                                     "Red",
                                     "Football Game",
                                     20, 5, 2015,
                                     20,
                                     30,
                                     15,
                                     20);
    Headwear *BeanieForMen = new Beanie("Bro Beanie",
                                        "Black",
                                        "Hanging Out",
                                        23, 5, 2015,
                                        10,
                                        15,
                                        12,
                                        30);
    Headwear *TopHat = new Hats("Top Hat",
                                "Navy Blue",
                                "Baseball Game",
                                11, 5, 2015,
                                20,
                                30,
                                10,
                                20);
    Headwear *Sombrero = new Hats("Sombrero",
                                  "Yellowish",
                                  "16 of September",
                                  16, 9, 2014,
                                  25,
                                  50,
                                  10,
                                  20);
    Headwear *ArmyBeret = new Berets("Army Solodier Beret",
                                     "Army Color",
                                     "Taking Guard for the Queen",
                                     20, 5, 2015,
                                     10,
                                     30,
                                     100,
                                     150);
    Headwear *FruitHat = new Exotic("Fruit Hat",
                                    "Various",
                                    "Formal Event",
                                    11, 5, 2015,
                                    200,
                                    450,
                                    5,
                                    7);
    Headwear *CasualBeret = new Berets("Casual Beret",
                                       "Navy Blue",
                                       "Strolling through Europe",
                                       20, 5, 2015,
                                       25,
                                       40,
                                       50,
                                       60);
    Headwear *CowboyHat = new Hats("Cowboy Hats",
                                   "Yellow",
                                   "Taking care of business",
                                   22, 5, 2015,
                                   25,
                                   30,
                                   11,
                                   18);
    Headwear *RobbingMask = new Beanie("Balacalva",
                                       "Gray",
                                       "Robbing a Bank",
                                       23, 5, 2015,
                                       30,
                                       35,
                                       20,
                                       22);
    
    lista.add(BaseballCap);
    lista.add(FootballCap);
    lista.add(BeanieForMen);
    lista.add(TopHat);
    lista.add(Sombrero);
    lista.add(ArmyBeret);
    lista.add(FruitHat);
    lista.add(CasualBeret);
    lista.add(CowboyHat);
    lista.add(RobbingMask);
    
    userType();
    
    return 1;
}


















