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

void TaskOne()
{
	cout << " Task 1 " << endl;
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


void TaskFour() {

	cout <<" Task 4 " << endl;

	const int n = 4;
	const int m = 4;
	int mat[n][m];
	int k = 0;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			mat[i][j] = rand() % 28 - 13;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << mat[i][j] << " \t";
		cout << endl;
	}

	int count = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i + 1; j++) {
			if (mat[i][1] > 0)
				count += mat[i][1];
			if (mat[i][3] > 0)
				count += mat[i][3];
		}

	cout << " " << count << endl;

}


void TaskSeven() {

	cout << "Task 7"<< endl;

	const int n = 4;
	const int m = 4;
	int mat[n][m];
	int thunderone[m];
	int thundertwo[m];
	int k = 0;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			mat[i][j] = rand() % 28;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << mat[i][j] << " \t";
		cout << endl;
	}


	int rain = 0;
	int rainprov = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			for (int j = 0; j < i + 1; j++) {
				if (mat[i][0] > rain) {
					rain = mat[i][0];
					thunderone[j] = mat[i][0];
				}
				if (mat[i][2] > rain) {
					rain = mat[i][2];
					thunderone[j] = mat[i][2];
					thunderone[j] = rainprov;
				}
			}
		}
	}

	int wind = 0;
	int windprov = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			for (int j = 0; j < i + 1; j++) {
				if (mat[i][1] > wind) {
					wind = mat[i][1];
					thundertwo[j] = mat[i][1];
					thundertwo[j] = windprov;
				}
				if (mat[i][3] > wind) {
					wind = mat[i][3];
					thundertwo[j] = mat[i][3];
					thundertwo[j] = windprov;
				}
			}

		}
	}
	cout << "Âåòåð- " << wind << " Îñàäêè- " << rain << endl;
	if (windprov = rainprov) {
		cout << "Øòîðì áûë" << endl;
	}
	else {
		cout << "Øòîðìà íå áûëî" << endl;
	}

}


void TaskNineB() {
	cout << "Task 9 (B)" << endl;

	ifstream in("input.txt");

	if (in.is_open())
	{
		int count = 0;
		int temp;

		while (!in.eof())
		{
			in >> temp;
			count++;
		}

		in.seekg(0, ios::beg);
		in.clear();

		int count_space = 0;
		char symbol;
		while (!in.eof())
		{
			in.get(symbol);
			if (symbol == ' ') count_space++;
			if (symbol == '\n') break;
		}

		in.seekg(0, ios::beg);
		in.clear();

		int n = count / (count_space + 1);
		int m = count_space + 1;
		double** x;
		x = new double* [n];
		for (int i = 0; i < n; i++) x[i] = new double[m];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				in >> x[i][j];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << x[i][j] << "\t";
			cout << "\n";
		}

		for (int i = 0; i < n; i++) delete[] x[i];
		delete[] x;

		in.close();
	}
	else
	{
		cout << endl;
	}
}

int main() {

	setlocale(LC_ALL, "Russian");

	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework   21.05.20|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;
	cout << endl;

	TaskOne();
	cout << endl;
	TaskFour();
	cout << endl;
	TaskSeven();
	cout << endl;
	TaskNineB();

	return 0;
}