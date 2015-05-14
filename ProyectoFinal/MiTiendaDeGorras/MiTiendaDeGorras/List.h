#pragma once 
#include <iostream>

using namespace std;

template <class Y>
 class List
{
protected:
    Y* container;
    int size;
    int pos;
    int value;
    int numElems;
    
public:
    List();
    List(int sizeParams);
    List(const List& original);
    ~List();
    int getSize();
    Y search();
    
    void add(Y a);
    void print();
    
};

template <class Y>
List<Y>::List()
{
    container = new Y[size];
    size = 10;
    numElems = 0;
}

template <class Y>
List<Y>::List(int sizeParams)
{
    size = sizeParams;
    container = new Y[size];
    numElems = 0;
}

template <class Y>
List<Y>::List(const List& original)
{
    container = new Y[original.getSize()];
    size = original.getSize();
    numElems = 0;
}

template <class Y>
List<Y>::~List()
{
    delete [] container;
}

template <class Y>
int List<Y>::getSize()
{
    return size;
}

template <class Y>
void List<Y>::print()
{
    for(int i = 0; i < size; i++)
    {
        container[i] = container[i];
        container[i]->print();
    }
    
}

template <class Y>
void List<Y>::add(Y a)
{
    if(pos < size)
    {
        *(container + pos) = a;
        pos++;
    }
    else{
        Y *newArray = new Y[size+1];
        for(int i = 0; i < size; i++)
            *(newArray+i) = *(container+i);
        
        delete[] container;
        container = newArray;
        newArray = NULL;
        *(container + pos) = a;
        pos++;
        size++;
    }
}

template <class Y>
Y List<Y>::search()
{
    
}







