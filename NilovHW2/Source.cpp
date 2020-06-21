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

const int string_len = 3;

std::string arrmemory[10] = { "100","200", "300", "400", "500", "600", "700", "800", "900" };

struct HDD{
	string name;
	string memory;

};

struct computer
{
	string name;
	int RAM;
	HDD HDD;
};

void randString(string& str, const int len) {
	static const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	// очищаем и заносим данные
	str.clear();
	str.append(len, ' ');

	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;  // последний символ сообщает о том, что строка закончилась
}

void showHDDs(const computer l) {
	cout << l.name << "\t"
		<< l.RAM << "\t"
		<< l.HDD.name << "\t\t"
		<< l.HDD.memory << endl;

}

void showcomputer(const computer HDD[], const int len) {
	cout << "name \t"
		<< "RAM \t"
		<< "HDDName\t"
		<< "HDDmemory " << endl;

	for (int i = 0; i < len; i++) {
		showHDDs(HDD[i]);
	}

	cout << endl;
}

void initcomputer(computer HDDs[], const int len) {
	for (int i = 0; i < len; i++) {
		// computer
		randString(HDDs[i].name, string_len);
		HDDs[i].RAM = rand() % 50;

		// HDD
		randString(HDDs[i].HDD.name, string_len);
		HDDs[i].HDD.memory = arrmemory[rand() % 9];
	}
}

void writeTextFile(const computer HDDs[], const int l) {
	ofstream f;

	f.open("HomeWork_12.05.20.txt");
	for (int i = 0; i < l; i++)  // Все атрибуты struct  в одной строке
		f << HDDs[i].name << " "
		<< HDDs[i].RAM << "  "
		<< HDDs[i].HDD.name << "  "
		<< HDDs[i].HDD.memory << endl;
	f.close();
}

void writeBinFile(computer lib[], const int l) {
	// in-function WRITE code
	fstream f;
	f.open("HomeWork_12.05.20.txt", ios::out | ios::binary);
	f.write((char*)lib, sizeof(computer) * l);
	f.close();
}

void openBinFile(computer lib[], const int l) {
	fstream f;
	f.open("HomeWork_12.05.20.txt", ios::in | ios::binary);
	f.read((char*)lib, sizeof(computer) * l);
	f.close();
}


void openTextFile(computer HDDs[], const int l) {
	ifstream f;

	f.open("HomeWork_12.05.20.txt");
	for (int i = 0; i < l; i++)
		f >> HDDs[i].name
		>> HDDs[i].RAM
		>> HDDs[i].HDD.name
		>> HDDs[i].HDD.memory;
	f.close();
}

int main()
{
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework   12.05.20|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;
	setlocale(LC_ALL, "Russian");
	//Задание 1+
	//Объявить сущности 1 и 2. Описать их свойства. Включить одну сущность в другую. Объявить массив сущностей 1. +
	//Заполнить атрибуты числовыми и текстовыми значениями (диапазон значений определить самостоятельно). +
	//библиотека и книга +
	//Задание 2 +
	//Реализовать чтение и запись данных в текстовый файл +
	const int len = 20;
	const int Showmassive = 5;
	computer arrHDDs[len];

	cout << "First massive computer:\n";
	initcomputer(arrHDDs, len);
	writeTextFile(arrHDDs, len);
	writeBinFile(arrHDDs, len);
	showcomputer(arrHDDs, Showmassive);

	cout << "New massive computer:\n";
	initcomputer(arrHDDs, len);
	showcomputer(arrHDDs, Showmassive);

	cout << "Read massive computer txt:\n";
	openTextFile(arrHDDs, len);
	showcomputer(arrHDDs, Showmassive);

	cout << "Read massive computer bin:\n";
	openBinFile(arrHDDs, len);
	showcomputer(arrHDDs, Showmassive);


	std::getchar();
	std::getchar();
	return 0;
}


	

	

