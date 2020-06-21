#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь
#include <cmath>  
#include <string>  // для считывания строк

using namespace std; // чтобы запомнить, какие команды и типы работают через std
using std::cout;
using std::cin;
using std::endl;

void   main()
{
	fstream f;
	f.open("Z1.txt", ios::out | ios::trunc);

	int const  n = 5;
	int mx[n][n];

	srand(time(NULL));

	int min = 256;
	int str = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mx[i][j] = rand() % (min - 1);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mx[i][j] < min)
			{
				min = mx[i][j];
				str = i;
			}

		}
	}


	for (int i = 0; i < n; i++)
	{
		mx[str][i] = 0;
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			cout << mx[i][j] << " ";
			f << mx[i][j] << " ";
		}
		cout << "\n";
	}
	f << min;
	cout << min;
	f.close();

}


