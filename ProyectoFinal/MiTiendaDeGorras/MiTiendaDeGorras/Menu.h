#pragma once
#include <iostream>
#include "Headwear.h"

using namespace std;

class Menu
{
public:
    
    static int readInt(int input)
    {
        while (input != '\n')
        {
            if (input == 0)
                cout << "Goodbye.\n";
            if (input > 4)
                cout << "Please enter a valid option. \n";
        }
        return input;
    }
    
    static int userType()
    {
        cout << "Are you: \n";
        cout << "1) Admin \n";
        cout << "2) Client \n";
        cout << "0) Exit  \n";
        return readInt(getchar());
    }
    
    static int adminMenu()
    {
        cout << "Operation you'd like to do: \n";
        cout << "1) Supply \n";
        cout << "2) Consult Statement \n";
        cout << "3) Look at inventory \n";
        cout << "0) Exit \n";
        return readInt(getchar());
    }
    
    static int clientMenu()
    {
        cout << "Operation you'd like to do: \n";
        cout << "1) Buy \n";
        cout << "0) Exit \n";
        return readInt(getchar());
    }
    
};


















