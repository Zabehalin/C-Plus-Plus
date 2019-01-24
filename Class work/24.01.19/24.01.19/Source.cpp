/*1. Написати програму, яка виконує реверс елементів одновимірного масиву,
розміщених між крайніми від’ємними числами у масиві. Для розв’язку задачі визначити та використати функції:
- заповнення масиву
- вивід масиву
- пошук лівого від’ємного
- пошук правого від’ємного у масиві
- обертання частини масиву*/

#include <iostream>
#include <ctime>
using namespace std;

void Sum(int arr[], const int SIZE);

void Print(int arr[], const int SIZE);

int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	Sum(arr, SIZE);
	Print(arr, SIZE);

	system("pause");
	return 0;
}

void Sum(int arr[], const int SIZE)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % - 21 + 40;
		
	}
}
void Print(int arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr [" << i << "] = " << arr[i] << endl;
	}
}