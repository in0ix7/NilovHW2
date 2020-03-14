#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь
#include <cmath>  
#include <string>  // для считывания строк


using namespace std; // чтобы запомнить, какие команды и типы работают через std
using std::cout;
using std::cin;
using std::endl;


int main() {
	cout << "           AiP       " << endl
		<< "  Homework 21/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;



	/*

	cout << "Task 1 \n \n";


	float num;
	cout << "Enter num: ";
	cin >> num;
	cout << "\n";

		for (int i = 0; i < num; i++) {
			for (int j = 0; j <= i; j++)
				std::cout << 0;
			std::cout << std::endl;
		}

		cout << std::endl;

		getchar();  // ожидание ввода, чтобы прога
		getchar();  // не закрывалась после выполнения*/
	

	cout << "Task 1 \n \n";


		float dx;
		std::cout << "Solve function. \nEnter dx: ";
		std::cin >> dx;
		
		

		float precision;
		cout << "Precision :";
			cin >> precision;

		std::cout.precision(precision);
		float x ;
		cout << "Step :";
			cin >> x;
		// заголовок таблицы
		std::cout << "\tx\t\ty" << std::endl;
		
		
		//y = -(2 + 9x)2 + 6x
		while (x < 2) {
			float f = -pow((2+9*x),2) +6*x;
			std::cout << "\t"
				<< x
				<< "\t\t"
				<< f
				<< std::endl;
			x += dx;
		}




	return 0;
}