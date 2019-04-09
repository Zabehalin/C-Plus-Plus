#include <iostream>
#include <ctime>
#include "Ariags.h"



using namespace std;


//int main()
//{
//
//	cout << "Dodaw = " << Sum(25, 6) << endl;
//	cout << "Mno = " << Mno(2, 6) << endl;
//	cout << "==========================================================" << endl;
//
//	Person Bill;
//	Bill.name = "Bill";
//	Bill.surname = "Gates";
//	Bill.age = 26;
//	Bill.ShowPerson();
//
//
//	system("pause");
//	return 0;
//}


/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню 

розбити проект на файл основної програми (.cpp), файл реалізації функцій (.cpp) та заголовочний файл (.h)) */


int main()
{
	srand(unsigned(time(NULL)));
	int ROW = 0;
	cout << "Enter Arr: ";
	cin >> ROW;
	int *Parr = new int[ROW];
	FillArr(Parr, ROW);
	while (true)
	{
		int v = 0;
		system("cls");
		PrintArr(Parr, ROW);
		Menyu(Parr, ROW);
		cout << "1. Menyu\t0. Exit" << endl;
		cin >> v;
		if (v == 0)
		{
			break;
		}
	}


	delete[] Parr;
	system("pause");
	return 0;
}









