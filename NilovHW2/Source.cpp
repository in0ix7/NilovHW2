#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <ctime>
#include <time.h>
#include <iomanip>  // ����� ������� precision
#include <math.h>  // ������� ������ �����, ������, �������� � ������ �����
#include <cmath>  
#include <string>  // ��� ���������� �����

using namespace std; // ����� ���������, ����� ������� � ���� �������� ����� std
using std::cout;
using std::cin;
using std::endl;

//������ 1

int main(){
cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 1 (g) \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����

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
