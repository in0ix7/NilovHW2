#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модул€ числа, синуса, косинуса и прочее здесь
#include <cmath>  
#include <string>  // дл€ считывани€ строк

using namespace std; // чтобы запомнить, какие команды и типы работают через std
using std::cout;
using std::cin;
using std::endl;

//«адача 1

int main(){
cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 1 (g) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский €зыка

	srand(time(NULL));

	const int size = 41;
	int arr[size];

	bool athere;

	for (int i = 0; i < size;) 
	{
		athere = false;
		int newValue = (rand() % 41) - 20;

		for (int j = 0; j < i ;j++) 
		{
			if (arr[j]==newValue)
			{
				athere = true;
				break;
			}
		}

		if(!athere)
		{
			arr[i] = newValue;
			i++;
		}

		arr[i] = (rand() % 41) - 20;

	}





	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << endl;



	}

	return 0;
}
