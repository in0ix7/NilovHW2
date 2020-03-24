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

//Задача 1
/*
int main() {
	cout << "           AiP       " << endl
		<< "  Homework 21/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;



	

	cout << "Task 1 \n \n";


	float num;
	cout << "Enter num: ";
	cin >> num;
	cout << "\n";

		for (int i = 0; i < num; i++) {
			for (int j = 0; j <= i; j++)
				cout << 0;
			cout << endl;
		}

		cout << endl;

		getchar();  // ожидание ввода, чтобы прога
		getchar();  // не закрывалась после выполнения

	return 0;
}
*/

//Задача 2g
/*
int main()
{
cout << "           AiP       " << endl
		<< "  Homework 21/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;

	cout << "Task 2g \n \n";

    float dx, xmin, xmax;
    const float eps = 0.000001;  

    cout << "Enter [xmin, xmax]: ";
    cin >> xmin >> xmax;

    cout << "Enter dx: ";
	cin >> dx;

    cout << "\tx\t\ty" << endl;

    std::cout.precision(5);
    float f;
    float x = xmin; 
    while (x < xmax) {
        if (fabs(x - 2) < eps)
            cout << "\t"
            << x
            << "\t\t Divide on zero"
            << endl;
        else {
			f = -pow((2 + 9 * x), 2) + 6 * x;

            cout << "\t"
                << x
                << "\t\t"
                << f
                << endl;
        }
        x += dx;
    }

    return 0;
}
*/

//Задача 2l
/*
int main()
{

cout << "           AiP       " << endl
		<< "  Homework 21/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;

	cout << "Task 2l \n \n";

    float dx, xmin, xmax;
    const float eps = 0.000001;

    cout << "Enter [xmin, xmax]: ";
    cin >> xmin >> xmax;

    cout << "Enter dx: ";
    cin >> dx;

    cout << "\tx\t\ty" << endl;

    cout.precision(5);
    float f;
    float x = xmin;
    double u, k;
    u = (5 * x) + (4 * x) * (4 * x) * (4 * x);
    k = sqrt(x);

    while (x < xmax) {
        if (fabs(x - 2) < eps)
            std::cout << "\t"
            << x
            << "\t\t Divide on zero"
            << std::endl;
        else {
            f = k+(4*x)+3/sin(9*x+71);

            cout << "\t"
                << x
                << "\t\t"
                << f
                << endl;
        }
        x += dx;
    }

    return 0;
}*/

//Задача 4g
/*
int main()
{
cout << "           AiP       " << endl
		<< "  Homework 21/03/2020" << endl
		<< "      Kozevnikov Ilya" << endl
		<< "                  #7 " << endl
		<< "                     " << endl;

	cout << "Task 4g \n \n";

    setlocale(LC_ALL, "Rus"); // включаем русский язык

    float x, y;

    cout << "Введите число x : "; cin >> x;

    if (x > -8) {
        y = pow((2+x),2)+7;
        cout << "y=(2+x)^2+7 =" << y << endl;
    }
    else {
        if (x == -8) {
            y = 5;
            cout << "y = " << y << endl;
        }
        else {
            y = abs(2*x-1)-1;
            cout << "y = |2x-1|-1 = " << y << endl;
        }
    }
    system("PAUSE");  
    return 0; 

}
*/

//Задача 5 (11)
/*
int main() {
	cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 5 (11) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка
	int x, y, z ;
	cout << "x\ty\tz" << endl<<endl;
	for (int z = 1; z < 9; z++) {
		for (int y = 1; y<(51-z)/4; y++){
				for (int x = 1; x < (54-z-y)/3; x++)
				{
					if (54 == 3 * x + 4 * y + 6 * z) {

						cout << x << "\t" << y << "\t" << z<< endl ;

					}

				}
		}
	}

	cout << endl;

	system("PAUSE");

	return 0;

}
*/

//Задача 3g
/*
int main() {
cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 5 (11) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка

   
    ofstream outFile;
    outFile.open("results1.txt");

    float x, num, y, i;

    cout << "Вводим x:";
    cin >> x;
    cout << "Вводм предел функции:";
    cin >> num;
    i = 1;
    y = 0;

    double sum = 0;

    for (int i = 1; i <= num; i++) {

        if (i % 2 == 0) {
            y = 1 / (x * i);
			sum = sum + y;
        }
        else
        {
			y = 1 / (x * i);
			sum = sum - y;
        }
    }
    cout << sum << " ";

    cout << endl;
    outFile << sum << endl;
    return 0;

    outFile.close();
}
*/

//Задача 3a
/*
int main() {
cout << "+--------------------+" << endl
		<< "|          AiP       |" << endl
		<< "| Homework 21/03/2020|" << endl
		<< "|     Kozevnikov Ilya|" << endl
		<< "|                 #7 |" << endl
		<< "+--------------------+" << endl;

	cout << "Task 5 (11) \n \n";

	setlocale(LC_ALL, "Rus"); // включаем русский языка


	ofstream outFile;
	outFile.open("results1.txt");

	float x, num, y, i;

	cout << "Вводим x:";
	cin >> x;
	cout << "Вводм предел функции:";
	cin >> num;
	i = 1;
	y = 0;

	double sum = 0;

	for (int i = 1; i <= num; i++) {
			y = x * i;
			sum = sum + y;
			
	
	}
	cout << sum << endl;
	outFile << sum << endl;
	return 0;

	outFile.close();
}
*/