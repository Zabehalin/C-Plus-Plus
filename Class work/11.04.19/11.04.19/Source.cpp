#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "Function.h"


using namespace std;



//int main()
//{
//	/*int *ptr = (int *) malloc(2*sizeof(int));
//	ptr[0] = 40;
//	ptr[1] = 4;
//	cout << "ptr[0] value: " <<ptr[0]<< endl;
//	cout << "ptr[1] value: " <<ptr[1]<< endl;
//	free(ptr);*/
//	////////////////////////////////////////////
//
//	int *ptr = (int *) calloc(2, sizeof(int));
//	ptr[0] = 40;
//	ptr[1] = 4;
//	cout << "ptr[0] value: " <<ptr[0]<< endl;
//	cout << "ptr[1] value: " <<ptr[1]<< endl;
//	
//	ptr = (int *)realloc(ptr, 4 * sizeof(int));
//	ptr[3] = 6;
//	cout << "ptr[4] value: " << ptr[3] << endl;
//
//	free(ptr);
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}


/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню
malloc calloc alloc free*/



int main()
{
	srand(unsigned(time(NULL)));

	int sizearr = 0;
	int s = 0,v = 0;
	cout << "Enter (size Arr): ";
	cin >> sizearr;
	int *ptr = (int *)calloc(sizearr, sizeof(int));
	FillArr(ptr, sizearr);
	while (true)
	{
		system("cls");
		int v = 0;
		PrintArr(ptr, sizearr);
		Menyu(ptr, sizearr, s);
		if (s == 1)
		{
			sizearr += 1;
			ptr = (int *)realloc(ptr, sizearr * sizeof(int));
			cout << "Enter (+1 arr): ";
			cin >> ptr[sizearr - 1];
			PrintArr(ptr, sizearr);

		}
		else if (s == 2)
		{
			sizearr -= 1;
			PrintArr(ptr, sizearr);

		}

		cout << "1. Menyu\t0. Exit" << endl;
		cin >> v;
		if (v == 0)
		{
			break;
		}
	}


	free(ptr);
	system("pause");
	return 0;
}