//
//	Learning to use pointers and how to make a matrix
//	Carlos Gutiérrez
//	A01360231
//	29/01/15
//
//
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
#include <time.h>
#include "matrix.h"

using namespace std;




int main()
{
	srand(time(NULL));
	int randomNumber = rand() % 20;
	cout << randomNumber << endl;

	MatrixClass matrix;

	matrix.oneByOneMatrix(1);
	matrix.squareMatrix(4);
	matrix.Matrix(2, 5);
	matrix.fillRandom(randomNumber, randomNumber);
	//matrix.fillUser(2, 3);
	matrix.transpose(5, 2);

	return 1;
}
 

/*)
void matrix(int ** a, int row, int column);
void matrixPrint(int ** a, int row, int column);
void highFive(int ** a, int row, int column);

int main()
{	
	int row, column;
	int ** a;
	cout << "Number of Rows:\n";
	cin >> row;
	cout << "Number of Columns:\n";
	cin >> column;
	matrix(a, row, column);
	highFive(a, row, column);

	return 1;
}

void matrix(int ** a, int row, int column)
{
	int i, j;
	srand (time(NULL));

	a = new int *[row];
	for(int i = 0; i < row; ++i) 
		*(a+i) = new int[column];

	for (i = 0; i < row; i++)
		for (j = 0; j < column; j++)
			a[i][j] = rand() % 10;

	matrixPrint(a, row, column);
	
} 

void matrixPrint(int ** a, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j) 
			cout << a[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}


void highFive(int ** a, int row, int column)
{

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			if (a[i][j] > a[i+1][j+1])
			{
				cout << "Then, the previous number is bigger than the next one";
			}
		}
	}
}*/

