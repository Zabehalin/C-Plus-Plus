#include <iostream>
#include <ctime>
using namespace std;

/*1.	Дано цілочисельний одновимірний масив. Заповнити його, вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників.*/
/*void Zap(int arr[], const int ROW);
void Vyvid(int arr[], const int ROW);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 10;
	int arr[ROW];
	Zap(arr, ROW);
	Vyvid(arr, ROW);



	system("pause");
	return 0;
}
void Zap(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 20;
	}

}
void Vyvid(int arr[], const int ROW)
{ 
	int sum = 0;
	cout << "============ Pramyi =============" << endl;
	for (int i = 0; i < ROW; i++)
	{
		sum += arr[i];
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << "\n\tSUMA arr = " << sum << endl;
	cout << "============ Zvorot =============" << endl;
	for (int i = ROW-1; i >-1; i--)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}*/


/*2.	Дано одновимірний масив. Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями. Вивести перетворений масив на екран з використанням вказівників.*/

/*void Zap(int arr[], const int ROW);
void Vyvid(int arr[], const int ROW);
void SortBuble(int arr2[], const int ROW);
void Perevirca(int arr[], int arr2[], const int ROW);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 10;
	int arr[ROW];
	int arr2[ROW];
	Zap(arr, ROW);
	Vyvid(arr, ROW);
		for (int i = 0; i < ROW; i++)
		{
				arr2[i] = arr[i];
		}
	SortBuble(arr2, ROW);
	cout << endl;
	Perevirca(arr, arr2, ROW);
	cout << "Zmina MIN >< MAX" << endl;
	Vyvid(arr, ROW);

	system("pause");
	return 0;
}
void Zap(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 20;
	}

}
void Vyvid(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void SortBuble(int arr2[], const int ROW)
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
void Perevirca(int arr[], int arr2[], const int ROW)
{
	int m = 0, b = 0,z = 0;
	for (int i = 0; i < ROW; i++)
	{
		if (arr[i] == arr2[0])
		{
			m = i;
		}
		else if (arr[i] == arr2[ROW-1])
		{
			b = i;
		}
	}
	cout << "Minim = " << arr[m] <<"===="<< m << endl;
	cout << "Max = " << arr[b] <<"===="<< b << endl;
	z = arr[m];
	arr[m] = arr[b];
	arr[b] = z;

}*/

/*3.	Дано одновимірний масив. Поміняти місцями дві його половини(якщо масив має непарну довжину, то центральний елемент залишається на місці з використанням вказівників*/
void Zap(int arr[], const int ROW);
void Vyvid(int arr[], const int ROW);
void Zmina(int arr[], const int ROW);

int main()
{
	const int ROW = 11;
	int arr[ROW];
	Zap(arr, ROW);
	Vyvid(arr, ROW);
	Zmina(arr, ROW);

	system("pause");
	return 0;
}
void Zap(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 20;
	}

}
void Vyvid(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Zmina(int arr[], const int ROW)
{
	int s = 0, z = 0;
	s = ROW / 2;
	for (int i = 0; i < ROW; i++)
	{
		if (s <= ROW -1 )
		{
			cout << arr[s] << "\t";
			s++;
		}
		else if (s >= ROW)
		{
			cout << arr[z] << "\t";
			z++;
		}
		
	}
	cout << endl;
}

