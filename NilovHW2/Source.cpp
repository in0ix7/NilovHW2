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

//Задача 2g
/*
int main(){
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 2 (g) \n \n";

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
*/

//Задача 2a
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 2 (a) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка
	cout << "Заполните массив:" << endl;
	int arr[10];
	int sum = 0;
	// Заполняем массив с
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] > 5)
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

	cout << "\nСумма чисел меньших 5: " << sum;
	cout << endl;

	return 0;
}
*/

//Задача 4
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 4 \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка


	cout << "Заполните массив:" << endl;
	int arr[10];
	int sum1 = 1;
	int sum2 = 1;
	// Заполняем массив с 
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

	// И выводим заполненный массив.
	cout << "\nВаш массив: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\nПроизведение положительных чисел :" << sum1;
	cout << endl;

	cout << "\nПроизведение отрицательных чисел :" << sum2;
	cout << endl;

	return 0;
}*/

//Задача 5
/*
int main(){
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 5 (3) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка
	

	cout << "Заполните массив:" << endl;
	int arr[10];
	int sum1 = 0;
	int sum2 = 0;
	// Заполняем массив с 
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

	// И выводим заполненный массив.
	cout << "\nВаш массив: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\nСумма четных чисел :" << sum1;
	cout << endl;

	cout << "\nСумма нечетных чисел :" << sum2;
	cout << endl;

	return 0;
}
*/

//Задача 8
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 8 \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка


	cout << "Заполните массив:" << endl;
	int arr[10];
	int sum1 = 0;
	int sum2 = 0;
	// Заполняем массив с 
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

	// И выводим заполненный массив.
	cout << "\nВаш массив: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\nКол-во положительных чисел :" << sum1;
	cout << endl;

	cout << "\nКол-во отрицательных чисел :" << sum2;
	cout << endl;

	return 0;
}
*/

//Задача 10
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 10 \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка

	int stre;
	cout << "Введите переменную: ";
		cin >> stre;
	cout << endl;

	cout << "Заполните массив:" << endl;
	int arr[10];
	int sum1 = 0;
	int sum2 = 0;
	
	// Заполняем массив с
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];

		if (arr[i] > stre)
		{
			sum1 += 1;
		}
	}

	// И выводим заполненный массив.
	cout << "\nВаш массив: ";


	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "\nКол-во чисел больше заданной переменной: " << sum1;
	cout << endl;

	return 0;
}
*/

//Задача 14

int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 14 \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка

	const int n = 70;
	int arr[n];


	srand(time(NULL)); // инициализация ГСЧ
	

	// заполнение массива случайными числами от 0 до 56-1
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 140;


	}

	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ", ";


	std::cout << std::endl;


	int max_number = arr[0];  // считаем что первый элемент массива - самый большой
	for (int i = 1; i < n; i++)  // поиск начинаем со второго элемента
		if (max_number < arr[i]) // если нашли больше
		{  
			if (!(arr[i] % 2))
			{
				max_number = arr[i];
			}

		}  // то обновляемся


	std::cout << "Maximum of array is " << max_number;


	std::cin.get();
	std::cin.get();


	return 0;
}
