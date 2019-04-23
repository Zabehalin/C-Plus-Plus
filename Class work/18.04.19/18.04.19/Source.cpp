#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include "Zapytannya.h"

using namespace std;

/*Задача на динамическое выделение памяти. Изначально есть указатель на массив с одним элементом. Пользователь вводит число. 
Если оно больше 0 записываем его в массив. Далее пользователь вводит второе число, тут уже,  если оно больше 0, 
надо пере выделять память для 2-х элементов массива и записать в массив второе число.
И так далее…  для 3-х элементов, для 4-х…  пока пользователь не введет отрицательное число.
*/
//void Zap(int *&arr, int &ROW);
//void Vyvid(int *arr, int ROW);
//void NewArr(int *&arr, int &ROW);
//
//
//int main()
//{
//	int ROW = 0;
//	int *parr = new int[ROW];
//		
//	Zap(parr, ROW);
//
//	delete[] parr;
//	system("pause");
//	return 0;
//}
//void Zap(int *&arr, int &ROW)
//{
//	int Narr = 0;
//	while (true)
//	{
//		cout << "Enter Arr: ";
//		cin >> Narr;
//		if (Narr > 0)
//		{
//			NewArr(arr, ROW);
//			system("cls");
//			arr[ROW - 1] = Narr;
//			Vyvid(arr, ROW);
//		}
//		else if (Narr <= 0)
//		{
//			break;
//		}
//	}
//}
//void Vyvid(int *arr, int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		cout << "Arr (" << i << ") = " << arr[i] << endl;
//	}
//}
//void NewArr(int *&arr, int &ROW)
//{
//	ROW++;
//	int *parr = new int[ROW];
//	for (int i = 0; i < ROW-1; i++)
//	{
//		parr[i] = arr[i];
//	}
//	delete[] arr;
//	arr = parr;
//}



/*Составить программу-тест  на экране по очереди появляются вопросы (вопросы выбираются программистом), 
с вариантами ответов. В конце работы программа выдает количество заработанных баллов по результатам ответа.*/


//int main()
//{
//	srand(unsigned(time(NULL)));
//	int Vidpovid = 0, i = 0;
//	while (true)
//	{
//		Zapytannya(Vidpovid);
//		
//		cout << "C L I C (ENTER)" << endl;
//		system("pause");
//		system("cls");
//		if (i == 5)
//		{
//			break;
//		}
//		i++;
//	}
//	cout << "You typed " << Vidpovid << endl;
//
//
//
//	system("pause");
//	return 0;
//}




/*Дан массив размера n, заполнить его случайными числами, Найти все нечётные числа массива.*/
//void Zap(int *arr, const int ROW);
//void Vyvid(int *arr, const int ROW);
//void NeChetni(int *arr, const int ROW);
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int ROW = 10;
//	int arr[ROW];
//	Zap(arr, ROW);
//	Vyvid(arr, ROW);
//	NeChetni(arr, ROW);
//
//	system("pause");
//	return 0;
//}
//void Zap(int *arr, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		arr[i] = rand() % 50;
//	}
//}
//void Vyvid(int *arr, const int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		cout << "(" << i << ")\t";
//	}
//	cout << endl;
//	for (int i = 0; i < ROW; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//void NeChetni(int *arr, const int ROW)
//{
//	cout << "Ne Chotni" << endl;
//	for (int i = 0; i < ROW; i++)
//	{
//		if (arr[i] % 2 == 1)
//		{
//			cout <<"arr ["<<i<<"] = "<< arr[i] << endl;
//		}
//	}
//
//}


/*Дана строка символов, которая обязательно заканчивается символом точки. Удалить из строки первые буквы каждого слова.*/


//int main()
//{
//	string Text;
//	cout << "Enter Text: ";
//	cin >> Text;
//
//
//
//	system("pause");
//	return 0;
//}
//


















