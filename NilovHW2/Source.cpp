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

long int counterB = 0;
long int counterS = 0;
long int counterI = 0;

//для задания 2
/*
void selectionSort(float data[], int len) {
	int j = 0;
	float tmp = 0;


	for (int i = 0; i < len; i++) {
		// ищем номер наименьшего элемента среди элементов от i-го до конца
		j = i;


		for (int k = i; k < len; k++) {
			if (data[j] > data[k]) {
				j = k;
				counterS++;
			}
		}
		// меняем местами наибольший элемент и текущий
		tmp = data[i];
		data[i] = data[j];
		data[j] = tmp;
		counterS++;
	}
};
void insertionSort(float data[], int len) {
	float key = 0;
	int j = 0;
	// проход по массиву
	for (int i = 1; i < len; i++) {
		key = data[i];  // ключевой/текущий элемент
		j = i - 1;
		// перестановка элемента на нужное место
		while (j >= 0 && data[j] > key) {
			data[j + 1] = data[j];
			j = j - 1;
			data[j + 1] = key;
			counterI++;
		}
	}
}
void bubbleSort(float data[], int len) {
	float tmp = 0;
	// идём по массиву
	for (int i = 0; i < len; i++) {
		// делаем проверки в оставшейся части массива
		for (int j = len - 1; j >= i + 1; j--) {
			if (data[j] < data[j - 1]) {  // сравниваем соседние элементы
				// делаем перестановку
				tmp = data[j];
				data[j] = data[j - 1];
				data[j - 1] = tmp;
				counterB++;
			}
		}
	}
}
void s100();
void s1k();
void s5k();
void s10k();
void s50k();
fstream f;
*/
//для задания 5 
struct Train {

	string brand;
	int NumberOfPassengers;
	float Speed;
};
void bubbleSortNumberOfPassengers(Train Trains[], int Size);
void bubbleSortSpeed(Train Trains[], int Size);
void showTrain(const Train p);
void randString(string& str);
void Cout(Train Trains[], int Size);
void File(Train Trains[], int Size);






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

	const int size = 60;
	int arr[size];

	bool athere;
	
	//генератор случайных чисел 
	
	for (int i = 0; i < size;)
	{
		athere = false;
		int newValue = (rand() % 60) - 30;

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

		arr[i] = (rand() % 60) - 30;

	};

	//вывод массива 
	
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";



	}

	return 0;
}
*/


//Задача 2(все виды сортировки)
/*
int main() {
	
		cout << "+--------------------+" << endl
			<< "|          AiP       |" << endl
			<< "| Homework 21/03/2020|" << endl
			<< "|     Kozevnikov Ilya|" << endl
			<< "|                 #7 |" << endl
			<< "+--------------------+" << endl;

		cout << "Task 2  \n \n";

		setlocale(LC_ALL, "Rus"); // включаем русский языка
	f.open("Zadanie_2_Oll.txt", ios::out | ios::trunc);
	cout << "Начало сортировки!" << endl << endl;
	srand(199951595232545454);
	s100();
	s1k();
	s5k();
	s10k();
	s50k();
	return 0;
	f.close();
}

void s100()
{
	const int n = 100;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);
	cout << "------------------------" << endl;
	cout << "100 elementov" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elementov" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;

}

void s1k()
{
	const int n = 1000;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);

	cout << "------------------------" << endl;
	cout << "1000 elementov" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elementov" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;
}

void s5k() {
	const int n = 5000;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);

	cout << "------------------------" << endl;
	cout << "5000 elementov" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elementov" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;



	counterS = 0;
	counterB = 0;
	counterI = 0;
}

void s10k() {
	const int n = 10000;
	float data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);
	cout << "------------------------" << endl;
	cout << "10000 elementov" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	f << "------------------------" << endl;
	f << "100 elementov" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;
}

void s50k() {
	const int n = 50000;
	float  data[n];

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	insertionSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}
	bubbleSort(data, n);

	for (int i = 0; i < n; i++) {
		data[i] = rand() % 120 - 70;

	}

	selectionSort(data, n);

	f << "------------------------" << endl;
	f << "100 elementov" << endl;
	f << "Selection Sort \t" << counterS << endl;
	f << "Bubble Sort \t" << counterB << endl;
	f << "Insertion Sort \t" << counterI << endl;
	f << "------------------------" << endl << endl;

	cout << "------------------------" << endl;
	cout << "50000 elementov" << endl;
	cout << "Selection Sort \t" << counterS << endl;
	cout << "Bubble Sort \t" << counterB << endl;
	cout << "Insertion Sort \t" << counterI << endl;
	cout << "------------------------" << endl << endl;

	counterS = 0;
	counterB = 0;
	counterI = 0;
}
*/

//Задача 5
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 5 \n \n";

	int const Size = 15;
	Train Trains[Size];
	cout << "The brand of Train\t" << "Number Of Passengers\t" << "Max speed\n";
	for (int i = 0; i < Size; i++)
	{
		Trains[i].NumberOfPassengers = 80 + rand() % 150;
		Trains[i].Speed = 725 + rand() % 250;
		randString(Trains[i].brand);

		showTrain(Trains[i]);

	}

	Cout(Trains, Size);
	File(Trains, Size);

	return 0;
}

void randString(string& str) {
	static  const char alphabet[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	str = "     ";


	for (int i = 0; i < str.length(); i++) {
		int r = rand() % (sizeof(alphabet) - 1);
		str[i] = alphabet[r];
	}
	str[str.length()] = 0;
}

void showTrain(const Train p) {

	cout << "\t" << p.brand << " \t\t\t"
		<< p.NumberOfPassengers << " \t\t"
		<< "   " << p.Speed << "  \n ";
}

void bubbleSortSpeed(Train Trains[], int Size) {
	int j = 0;
	Train tmp;
	//  èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		//  äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Trains[j].Speed > Trains[i].Speed) {// ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = Trains[i];
				Trains[i] = Trains[j];
				Trains[j] = tmp;
			}
		}
	}
}

void bubbleSortNumberOfPassengers(Train Trains[], int Size) {
	int j = 0;
	Train tmp;
	//  èä¸ì ïî ìàññèâó
	for (int i = 0; i < Size; i++) {
		//  äåëàåì ïðîâåðêè â îñòàâøåéñÿ ÷àñòè ìàññèâà
		for (int j = Size - 1; j >= i + 1; j--) {
			if (Trains[j].NumberOfPassengers > Trains[i].NumberOfPassengers) {// ñðàâíèâàåì ñîñåäíèå ýëåìåíòû
				// äåëàåì ïåðåñòàíîâêó
				tmp = Trains[i];
				Trains[i] = Trains[j];
				Trains[j] = tmp;
			}
		}
	}
}

void Cout(Train Trains[], int Size) {
	cout << endl << " Sorted Max Speed" << endl << endl;
	cout << "The brand of Train\t" << "Number Of Passengers\t" << "Max speed\n";
	bubbleSortSpeed(Trains, Size);

	for (int i = 0; i < Size; i++)
		showTrain(Trains[i]);

	cout << endl << " Sorted Number Of Passengers" << endl << endl;
	cout << "The brand of Train\t" << "Number Of Passengers\t" << "Max speed\n";
	bubbleSortNumberOfPassengers(Trains, Size);

	for (int i = 0; i < Size; i++)
		showTrain(Trains[i]);
}

void File(Train Trains[], int Size) {
	fstream f;
	f.open("data.txt", ios::out | ios::trunc);
	f << endl << "                        Sorted Max Speed" << endl << endl;
	f << "The brand of Train\t" << "Number Of Passengers\t" << "Max speed\n";
	bubbleSortSpeed(Trains, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Trains[i].brand << "\t"
		<< Trains[i].NumberOfPassengers << "\t"
		<< "   " << Trains[i].Speed << endl;

	f << endl << " Sorted Number Of Passengers" << endl << endl;
	f << "The brand of Train\t" << "Number Of Passengers\t" << "Max speed\n";
	bubbleSortNumberOfPassengers(Trains, Size);

	for (int i = 0; i < Size; i++)
		f << "\t" << Trains[i].brand << " \t"
		<< Trains[i].NumberOfPassengers << " \t"
		<< "   " << Trains[i].Speed <<"  \n " ;
	f.close();
}
