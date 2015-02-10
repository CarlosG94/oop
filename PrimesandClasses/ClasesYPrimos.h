//
// Find and Add Prime Numbers
// Carlos Gutiérrez
// A01360231
// 20/01/15
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
using namespace std;

class Primes
{
public:
  void isPrime();
  void getENesimPrime();
  void sumPrimesBelow();
};

void Primes::isPrime()
{
  int isTheNumberPrime;
  cout << "Enter the number that you'd like to know if it is a prime or not: ";
  cin >> isTheNumberPrime;

  bool isThatPrime = true;

  for (int i = 2; i < isTheNumberPrime; i++)
    if (isTheNumberPrime % i == 0) 
      isThatPrime = false;

  if (isThatPrime == true)
  {
    cout << "It is Prime.\n";
  } else {
    cout << "Sorry, that is no prime.\n";
  }
}

void Primes::getENesimPrime() 
{
  int nthNumberPrime;
  cout << "Which prime number would you like to see?: ";
  cin >> nthNumberPrime;

  bool isThatPrime = true;
  int count = 1, lastPrime = 2, num = 2;

    while(count <= nthNumberPrime)
    {
      for (int i = 2; i < num; i++)
      {
        if (num % i == 0) 
        {
          isThatPrime = false;
        }
      }
      if (isThatPrime)
      {
        count++;
        lastPrime = num;
      }
      num++;
      isThatPrime=true;
    }
  cout << lastPrime << endl;
}

void Primes::sumPrimesBelow()
{
  int n;
  cout << "Enter the number of primes you'd like to see added: ";
  cin >> n;

  int counter = 0;
  int i = 2;
  bool isThatPrime = true;
  int sum = 0;

  while(counter < n)
  {
    for(int j = 2; j < i; j++)
    {
     if (i % j == 0)
      {
       isThatPrime = false;
       break;
      }
    }
    if (isThatPrime)
    {
     sum += i;
     counter++;
    }
    isThatPrime = true;
    i++;
  }
  
  cout << sum << endl;
}