#include <iostream>
#include "cipher.h"
using namespace std;

int main()
{
	Encrypt phrase;

	phrase.cipher("himynameiscarlos");
	phrase.decrypt(Encrypt::encrypted);

	return 1;

}







/*	

	char dato[26];
	int count, asciiValue = 97;
	string toEncrypt;
	int randomValue;
	srand((unsigned int)time(NULL));


	for (count = 0; count < 26; count++)
	{
		dato[count] = asciiValue;
		asciiValue++;
		cout << dato[count] << " ";
	}

	cout << endl << "dame esa madre\n";
	cin >> toEncrypt;

	int length = (int)toEncrypt.length();

	for (count = 0; count < length; count++)
	{
		for (int i = 0; i < 26; i++)
		{
			if (toEncrypt[count] == dato[i])
			{
				randomValue = rand() % 10;
				//toEncrypt[count] += rand() % 10;
				toEncrypt[count] += randomValue;
				if (toEncrypt[count] > 122)				
					toEncrypt[count] = 123 - randomValue;//rand()%10;
	
				//cout << "imprime valor en int [ " << (int)toEncrypt[count] << endl;
				//cout << "con el ++ [ " << toEncrypt[count++] << endl;
			}
		}
	}

	cout << "FRASE ENCRIPTADA: [ " << toEncrypt << endl;
}*/
/*
	for (int count = 0; count < length; count++)
	{
		for (int i = 0; i < 26; i++)
		{
			if (toEncrypt[count] == dato[i])
			{
				cout << (int)toEncrypt[count] << endl;

				toEncrypt[count--] = toEncrypt[count];

				cout << toEncrypt[count] << endl;
			}
		}
	}*/







	/*

	string toEncrypt;
	int count;

	cout << "Dame tu frase:\n";
	cin >> toEncrypt;

  int length = (int)toEncrypt.length();

  for (count = 0; count < length; count++)
  {
    if (isalpha(toEncrypt[count])) 
    {
      toEncrypt[count] = tolower(toEncrypt[count]);
      for (int i = 0; i < 13; ++i)
      {
        if (toEncrypt[count] == 'z')
          toEncrypt[count] = 'a';
        else
          toEncrypt[count] += rand() % 10;
      }
    } 
    toEncrypt[count]++;
  }

  cout << "Yo shit messed up: " << toEncrypt << endl;

}*/