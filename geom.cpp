#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");

	//system("color B5");

	//Квадрат
	cout << "Введите длину квадрата:\n";
	int size = 8;
	cin >> size;
	cout << "\n";
	for (int i = 0; i <= size; i++) {
		for (int j = 0; j <= size; j++) {

			if (i == 0 || i == size || j == 0 || j == size) {
				cout << " @";
			}
			else {

				cout << "  ";
			}

		}
		cout << "\n";
	}

	cout << "\n";

	for (int i = 0; i <= size - 1; i++) {
		for (int j = 0; j <= size - 1; j++) {
			cout << " @";
		}
		cout << "\n";
	}

	cout << "\n";



	//Прямоугольник
	cout << "Введите Ширину Прямоугольника:\n";
	int shirina = 10;
	cin >> shirina;
	cout << "Введите Длину Прямоугольника:\n";
	int dlina = 5;
	cin >> dlina;
	cout << "\n";
	for (int i = 0; i <= dlina; i++) {
		for (int j = 0; j <= shirina; j++) {
			if (i == 0 || i == dlina || j == 0 || j == shirina) {
				cout << " #";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	cout << "\n";

	for (int i = 0; i <= dlina - 1; i++) {
		for (int j = 0; j <= shirina - 1; j++) {
			cout << " #";
		}
		cout << "\n";
	}

	cout << "\n"; 
	// Треугольник
	int length = 16;
	cout << "Введите длинну треугольника:\n";
	cin >> length;
	for (int i = 0; i <= length; i++)
	{
		for (int j = 0; j <= length; j++)
		{
			if (i == j || j == 0 || i == length) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for (int i = 0; i <= length; i++)
	{
		for (int j = 0; j <= length; j++)
		{
			if (i > j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\n";

	// Равнобедренный Треугольник

	length = 10;
	cout << "Введите длинну Р.треугольника:\n";
	cin >> length;
	cout << "\n";
	for (int i = 0; i <= length; i++)
	{
		for (int j = 0; j <= length; j++)
		{
			if ((i == j || i + j == length - 1|| i == length - 1) && i>= length/2)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << "\n";

	for (int i = 0; i <= length; i++)
	{
		for (int j = 0; j <= length; j++)
		{
			if (i >= j && i + j >= length) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	
}
