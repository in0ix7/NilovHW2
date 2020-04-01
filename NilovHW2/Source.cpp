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

//Задача 1
/*
int main(){
cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 1 (g) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка

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
*/

//Задача 2
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 1 (g) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка

	srand(time(NULL));

	const int size = 41;
	int arr[size];

	bool athere;

	for (int i = 0; i < size;)
	{
		athere = false;
		int newValue = (rand() % 41) - 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newValue)
			{
				athere = true;
				break;
			}
		}

		if (!athere)
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
*/

//Задача 2
int main(){
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 1 (g) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка
	cout << "Заполните массив:" << endl;
	int arr[10];
	int sum = 0;
	// Заполняем массив с 
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] < 5)
		{
			sum += arr[i];
		}
	}

	// И выводим заполненный массив.
	cout << "\nВаш массив: ";

	
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\nСумма чисел меньших 5:" << sum;
	cout << endl;

	return 0;
}