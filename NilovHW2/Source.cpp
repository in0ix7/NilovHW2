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
/*
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
*/

//������ 2g
/*
int main(){
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 2 (g) \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����
	cout << "��������� ������:" << endl;
	int arr[10];
	int sum = 0;
	// ��������� ������ � 
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] < 5)
		{
			sum += arr[i];
		}
	}

	// � ������� ����������� ������.
	cout << "\n��� ������: ";

	
	for (int i = 0; i < 10; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\n����� ����� ������� 5:" << sum;
	cout << endl;

	return 0;
}
*/

//������ 2a
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 2 (a) \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����
	cout << "��������� ������:" << endl;
	int arr[10];
	int sum = 0;
	// ��������� ������ �
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] > 5)
		{
			sum += arr[i];
		}
	}

	// � ������� ����������� ������.
	cout << "\n��� ������: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\n����� ����� ������� 5: " << sum;
	cout << endl;

	return 0;
}
*/

//������ 4
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 4 \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����


	cout << "��������� ������:" << endl;
	int arr[10];
	int sum1 = 1;
	int sum2 = 1;
	// ��������� ������ � 
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] <=0)
		{
			sum1 *= arr[i];
		}
		else
		{
			sum2 *= arr[i];
		}
	}

	// � ������� ����������� ������.
	cout << "\n��� ������: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\n������������ ������������� ����� :" << sum1;
	cout << endl;

	cout << "\n������������ ������������� ����� :" << sum2;
	cout << endl;

	return 0;
}*/

//������ 5
/*
int main(){
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 5 (3) \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����
	

	cout << "��������� ������:" << endl;
	int arr[10];
	int sum1 = 0;
	int sum2 = 0;
	// ��������� ������ � 
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i]%2)
		{
			sum1 += arr[i];
		}
		else
		{
			sum2 += arr[i];
		}
	}

	// � ������� ����������� ������.
	cout << "\n��� ������: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\n����� ������ ����� :" << sum1;
	cout << endl;

	cout << "\n����� �������� ����� :" << sum2;
	cout << endl;

	return 0;
}
*/

//������ 8
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 8 \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����


	cout << "��������� ������:" << endl;
	int arr[10];
	int sum1 = 0;
	int sum2 = 0;
	// ��������� ������ � 
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] < 0)
		{
			sum1 += 1;
		};
		if (arr[i]> 0)
		{
			sum2 += 1;
		}
	}

	// � ������� ����������� ������.
	cout << "\n��� ������: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\n���-�� ������������� ����� :" << sum1;
	cout << endl;

	cout << "\n���-�� ������������� ����� :" << sum2;
	cout << endl;

	return 0;
}
*/

//������ 10
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 10 \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����

	int stre;
	cout << "������� ����������: ";
		cin >> stre;
	cout << endl;

	cout << "��������� ������:" << endl;
	int arr[10];
	int sum1 = 0;
	int sum2 = 0;
	
	// ��������� ������ �
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] > stre)
		{
			sum1 += 1;
		}
	}

	// � ������� ����������� ������.
	cout << "\n��� ������: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\n���-�� ����� ������ �������� ����������: " << sum1;
	cout << endl;

	return 0;
}
*/

//������ 14

int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 14 \n \n";

	setlocale(LC_ALL, "Rus"); // �������� ������� �����

	const int n = 70;
	int arr[n];


	srand(time(NULL)); // ������������� ���
	

	// ���������� ������� ���������� ������� �� 0 �� 56-1
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 140;


	}

	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ", ";


	std::cout << std::endl;


	int max_number = arr[0];  // ������� ��� ������ ������� ������� - ����� �������
	for (int i = 1; i < n; i++)  // ����� �������� �� ������� ��������
		if (max_number < arr[i]) // ���� ����� ������
		{  
			if (!(arr[i] % 2))
			{
				max_number = arr[i];
			}

		}  // �� �����������


	std::cout << "Maximum of array is " << max_number;


	std::cin.get();
	std::cin.get();


	return 0;
}
