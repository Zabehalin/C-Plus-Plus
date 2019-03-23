#include <iostream>
#include <ctime>
using namespace std;


/*1. Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями. Примітка! Функція повинна повертати ссилку на відємний елемент 
*/
//void ZAP(int *arr, const int ROW);
//void VyvidARR(int *arr, const int ROW);
//void MSarr(int *arr, const int ROW);
//
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int ROW = 10;
//	int arr[ROW];
//	ZAP(arr, ROW);
//	VyvidARR(arr, ROW);
//	MSarr(arr, ROW);
//	VyvidARR(arr, ROW);
//	system("pause");
//	return 0;
//}
//void ZAP(int *arr, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		arr[i] = rand() % 40 + -20;
//	}
//}
//void VyvidARR(int *arr, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		cout <<"ARR ["<< i <<"] = "<< arr[i] << "\t"<< &arr[i]<<endl;
//	}
//	cout << endl;
//}
//void MSarr(int *arr, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		if (arr[i] < 0)
//		{
//			arr[i] = NULL;
//		}
//	}
//}

/*2. Написать функцію (або шаблон), яка приймає дві ссилки на змінні і виконує обмін значень. За допомогою написаної функції поміняти місцями у матриці перший та другий стовпці. 
*/

//void ZAP(int *&parr, int *&parr2, const int ROW);
//void VyvidARR(int *&parr,int *&parr2, const int ROW);
//void ZAMINA(int *&parr, int *&parr2, const int ROW);
//void ZaminaROW(int *&parr, int *&parr2, const int ROW);
//void ZaminaARR(int *&parr, int *&parr2, const int ROW);
//
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int ROW = 10;
//	int arr[ROW];
//	int arr2[ROW];
//	int *parr = &arr[ROW];
//	int *parr2 = &arr2[ROW];
//	ZAP(parr,parr2, ROW);
//	while (true)
//	{
//		int REST = 0;
//		system("cls");
//		VyvidARR(parr, parr2, ROW);
//		ZAMINA(parr, parr2, ROW);
//		VyvidARR(parr, parr2, ROW);
//		cout << "Enter\n1. Restart\n2. EXIT" << endl;
//		cin >> REST;
//		if (REST == 2)
//		{
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//void ZAP(int *&parr, int *&parr2, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		parr[i] = rand() % 40 + -20;
//		parr2[i] = rand() % 40 + -20;
//	}
//}
//void VyvidARR(int *&parr, int *&parr2, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		cout << "ARR [" << i << "] = " << parr[i] << "\t" << &parr[i] ;
//		cout << "\tARR2 [" << i << "] = " << parr2[i] << "\t" << &parr2[i] << endl;
//	}
//	cout << endl;
//}
//void ZAMINA(int *&parr, int *&parr2, const int ROW)
//{
//	int Vyb = 0;
//	cout << "Enter\n1. Zmina ROW\n2. Zmina ARR" << endl;
//	cin >> Vyb;
//	if (Vyb == 1)
//	{
//		ZaminaROW(parr, parr2, ROW);
//	}
//	else if (Vyb == 2)
//	{
//		ZaminaARR(parr, parr2, ROW);
//	}
//
//}
//void ZaminaROW(int *&parr, int *&parr2, const int ROW)
//{
//	int VybROW = 0, VybROW2 = 0;
//	int Zmina = 0;
//	cout << "\nEnter" << endl;
//	cout << "ARR  ROW = ";
//	cin >> VybROW;
//	cout << "ARR2 ROW = ";
//	cin >> VybROW2;
//	Zmina = parr[VybROW];
//	parr[VybROW] = parr2[VybROW2];
//	parr2[VybROW2] = Zmina;
//
//}
//void ZaminaARR(int *&parr, int *&parr2, const int ROW)
//{
//	int ZminnaArr[10];
//	for (int i = 0; i < ROW; i++)
//	{
//		ZminnaArr[i] = parr[i];
//		parr[i] = parr2[i];
//		parr2[i] = ZminnaArr[i];
//	}
//
//}


/*3. Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву.
За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву*/

void ZAP(int *&parr, const int ROW);
void VyvidARR(int *&parr, const int ROW);
void NaymSynv(int *&parr, int *arr2,int Naym, const int ROW);
void SortBuble(int *arr2, const int ROW);


int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 10;
	int arr[ROW];
	int Naym = 0;
	int arr2[ROW];
	int *parr = &arr[ROW];
	ZAP(parr, ROW);
	VyvidARR(parr, ROW);
	NaymSynv(parr,arr2,Naym, ROW);
	system("pause");
	return 0;
}
void ZAP(int *&parr, const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		parr[i] = rand() % 20;
	}
}
void VyvidARR(int *&parr, const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		cout << "ARR [" << i << "] = " << parr[i] << "\t" << endl;
	}
	cout << endl;
}
void NaymSynv(int *&parr,int *arr2,int Naym, const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr2[i] = parr[i];
	}
	SortBuble(arr2, ROW);
	for (int i = 0; i < ROW; i++)
	{
		if (parr[i] == arr2[0])
		{
			cout << "Min = " << parr[i] << "\tSsylca : " << &parr[i] << endl;
			parr[i] *= 2;
			cout << "Podvo Min = " << parr[i] << "\tSsylca : " << &parr[i] << endl;
			break;
		}
	}
}
void SortBuble(int *arr2, const int ROW)
{
	for (int i = ROW - 1; i >= 1; i--)
	{

		for (int j = 0; j < i; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				int tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
			}
		}
	}
}


