//
// Classes, templates, and more
// Carlos Gutiérrez
// A01360231
// 13/02/15
//
/*
                         _
 _._ _..._ .-',     _.._(`))
'-. `     '  /-._.-'    ',/
   )         \            '.
  / _    _    |             \
 |  a    a    /              |
 \   .-.                     ;  
  '-('' ).-'       ,'       ;
     '-;           |      .'
        \           \    /
        | 7  .__  _.-\   \
        | |  |  ``/  /`  /
       /,_|  |   /,_/   /
          /,_/      '`-'
*/
          
#include <iostream>
#pragma once
#include <string>
using namespace std;

template<class T>
class Washer
{
  private:
    T weight;
    T basePrice;
    string color;
    T consumption;
    T charge;
    T finalPrice;  
  public:
    void print();
    void setWeight(T weight);
    T getWeight();
    void setBasePrice(T basePrice);
    T getBasePrice();
    void setColor(string color);
    string getColor();
    void setConsumption(T consumption);
    T getConsumption();
    void setCharge(T charge);
    T getCharge();
    void setFinalPrice(T finalPrice);
    T getFinalPrice();
};

template<class T>
void Washer<T>::setWeight(T weight)
{
  this->weight = weight;
}

template<class T>
T Washer<T>::getWeight()
{
  return this->weight;
}

template<class T>
void Washer<T>::setBasePrice(T basePrice)
{
  if (weight > 0 && weight <= 19) this->basePrice = 10000;
  else if (weight >= 20 && weight <= 49) this->basePrice = 50000;
  else if (weight >= 50 && weight <= 79) this->basePrice = 80000;
  else if (weight >= 80) this->basePrice = 100000;

  cout << basePrice;
}

template<class T>
T Washer<T>::getBasePrice()
{
  return this->basePrice;
}

template<class T>
void Washer<T>::setColor(string color)
{
  this->color = color;
}

template<class T>
string Washer<T>::getColor()
{
  return this->color;
} 

template<class T>
void Washer<T>::setConsumption(T consumption)
{
  this->consumption = consumption;
}

template<class T>
T Washer<T>::getConsumption()
{
  return this->consumption;
}

template<class T>
void Washer<T>::setCharge(T charge)
{
  this->charge = charge;
}

template<class T>
T Washer<T>::getCharge()
{
  return this->charge;
}

template<class T>
void Washer<T>::setFinalPrice(T finalPrice)
{
  this->finalPrice = finalPrice;
}

template<class T>
T Washer<T>::getFinalPrice()
{
  if (this->basePrice < 20000) 
  {
    this->finalPrice = 10000;
    return this->finalPrice;
  } else if (this->basePrice >= 20000 && this->basePrice <= 40000)
  {
    this->finalPrice = this->basePrice;
    this->finalPrice *= 1.3;
    return this->finalPrice;
  } else if (this->basePrice >= 40000 && this->basePrice < 80000)
  {
    this->finalPrice = this->basePrice;
    this->finalPrice *= 1.4;
    return this->finalPrice;
  } else if (this->basePrice >= 80000)
  {
    this->finalPrice = this->basePrice;
    this->finalPrice *= 1.5;
    return this->finalPrice;
  }
}

template<class T>
void Washer<T>::print()
{
  cout << "Weight: " << this->weight << endl;
  cout << "Price + tax: " << this->finalPrice << endl;
  cout << "Color: " << this->color << endl;
  cout << "Consumption: " << this->consumption << endl;
  cout << "Max Charge: " << this->charge << endl;
  cout << endl;
}

