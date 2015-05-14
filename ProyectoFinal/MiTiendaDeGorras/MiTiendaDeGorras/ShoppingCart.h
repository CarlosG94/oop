#pragma once
#include "Headwear.h"

template <class Y>
class ShoppingCart
{
public:
    string* cart;
    
    int length;
    int numElems = 0;
    
    double totalAmount = 0;
    
    double getTotalAmount(){return totalAmount;}
    int getLength(){return length;}
    ~ShoppingCart(){delete [] cart;}
    
    void AddElement(Y element,int amount)
    {
        cart[numElems] = element->getTitle()  ;
        ++numElems;
        totalAmount = element->getSellPrice()*amount;
        element->buy(amount);
    }
    
    ShoppingCart()
    {
        
        cart = new string [length];
    }
    
    void PayCredit(string name,string cardNumber)
    {
        cout << "The purchase has been successful. Credit Card Number: " << cardNumber << ". Total amount: " << totalAmount << endl;
        totalAmount = 0;
    }
    
    void PayDebit(string name,string cardNumber)
    {
        cout << "The purchase has been successful. Debit Card Number: " << cardNumber << ". Total amount: " << totalAmount << endl;
        totalAmount = 0;
    }
    
    void PayCash()
    {
        cout << "Thank you for your purchase.\n";
        totalAmount = 0;
    }

    
};