//
// Matrix and Classes
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
#include <string.h>
#include <time.h>
using namespace std;


class MatrixClass{
private:
  int ** a;
  int row, column, n, k; 

public:
  int getRow(){ return row; }
  int getColumn(){ return column; }
  void setRow(int row){ this->row = row;}
  void setColumn(int column){ this->column = column;}
  void oneByOneMatrix(int n);
  void squareMatrix(int n);
  void Matrix(int row, int column);
  void fillRandom(int row, int column);
  void fillUser(int row, int column);
  /*void upper();
  void lower();*/
  void transpose(int row, int column);
  void matrixPrint(int ** a, int row, int column);



};

void MatrixClass::matrixPrint(int ** a, int row, int column)
{
  for (int i = 0; i < row; ++i)
  {
    for (int j = 0; j < column; ++j) 
      cout << a[i][j] << " ";
    cout << endl;
  }
  cout << endl;
}

void MatrixClass::oneByOneMatrix(int n)
{
  cout << "oneByOneMatrix\n";
  srand (time(NULL));
  int i, j;
  a = new int *[n];
  for (i = 0; i < 2; i++)
    *(a+i) = new int[n];

  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
      a[i][j] =  rand() % 10;

  matrixPrint(a, n, n);
}

void MatrixClass::squareMatrix(int n)
{
  cout << "squareMatrix\n";
  srand (time(NULL));
  int i, j;
  a = new int *[n];
  for (i = 0; i < n; i++)
    *(a+i) = new int[n];

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      a[i][j] = rand() % 10;

  matrixPrint(a, n, n);
}

void MatrixClass::Matrix(int row, int column)
{
  cout << "Matrix\n";
  int i, j;
  srand (time(NULL));

  a = new int *[row];
  for(i = 0; i < row; ++i) 
    *(a+i) = new int[column];

  for (i = 0; i < row; i++)
    for (j = 0; j < column; j++)
      a[i][j] = rand() % 10;

  matrixPrint(a, row, column);
}

void MatrixClass::fillRandom(int row, int column)
{
  cout << "fillRandom\n";
  int i, j;
  srand (time(NULL));

  a = new int *[row];
  for(i = 0; i < row; ++i) 
    *(a+i) = new int[column];

  for (i = 0; i < row; i++)
    for (j = 0; j < column; j++)
      a[i][j] = rand() % 10;

  matrixPrint(a, row, column);
}

void MatrixClass::fillUser(int row, int column)
{
  cout << "fillUser\n";
  int i, j, x;
  srand (time(NULL));

  a = new int *[row];
  for(i = 0; i < row; ++i) 
    *(a+i) = new int[column];

  cout << "Give 5 numbers between 0 and 10, input -1 when finished.\n";

  while(x != -1)
  {
    for (i = 0; i < row; i++)
    {
      for (j = 0; j < column; j++)
      {
          cin >> x;
          a[i][j] = x;
      }    
    }
  }

  matrixPrint(a, row, column);
}

void MatrixClass::transpose(int row, int column)
{
    cout << "transpose\n";
  int i, j;
  srand (time(NULL));

  a = new int *[row];
  for(i = 0; i < column; ++i) 
    *(a+i) = new int[column];

  for (i = 0; i < row; i++)
    for (j = 0; j < column; j++)
      a[i][j] = rand() % 10;

  matrixPrint(a, row, column);

}








