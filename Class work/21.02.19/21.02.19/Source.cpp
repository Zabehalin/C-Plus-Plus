#include <iostream>
#include <ctime>
using namespace std;


/*int main()
{
	const int ROW = 10;
	int *p = new int;
	cout << " roz *p = " << *p << "\nne roz p = " << p << endl;


	system("pause");
	return 0;
}*/


/*C++ 
Дано два масива:. Утворити третій масив мінімального можливого розміру, у якому зібрати: 
Елементи обох масивів; 
Спільні элементи обох массивов; 
Елементи масиву A, які не зустрічаються у B; 
Елементи масиву В, які не зустрічаються у А; 
Елементи масивів A і B, які не є спільними для них (тобто об’єднання результатів двох попереднії результатів).*/
/*void Zap(int arr[], const int ROW);
void Mas(int arr[], int arr2[], int arr3[], const int ROW1, const int ROW2, const int COL);
void elA(int arr[], int arr2[], const int ROW1, const int ROW2);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW1 = 5, ROW2 = 4, COL = ROW1 + ROW2;
	int arr[ROW1];
	int arr2[ROW2];
	int arr3[COL];
	cout << "arr (1) = \t";
	Zap(arr, ROW1);
	cout << endl;
	cout << "arr (2) = \t";
	Zap(arr2, ROW2);
	cout << endl;
	cout << "arr (3) = \t";
	Mas(arr, arr2, arr3, ROW1, ROW2, COL);
	elA(arr, arr2, ROW1, ROW2);
																
	system("pause");
	return 0;
}

void Zap(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 30;
		cout << arr[i] << "\t";
	}
}

void Mas(int arr[], int arr2[], int arr3[], const int ROW1, const int ROW2, const int COL)
{
	int a = 0;
	for (int i = 0; i < ROW1; i++)
	{
		arr3[i] = arr[i];
	}
	for (int j = ROW1; j < COL; j++)
	{
	
		arr3[j] = arr2[a];
		a++;
	}
	for (int j = 0; j < COL; j++)
	{
		cout <<arr3[j] << "\t";
	}
	cout << endl;
}
void elA(int arr[], int arr2[], const int ROW1, const int ROW2)
{
	int a = 0;
	cout << "\nElem arr (A) = ";
	for (int i = 0; i < ROW1; i++)
	{
		for (int j = 0; j < ROW2; j++)
		{
			if (arr[i] == arr2[j])
			{
				a++;
			}

		}
		if (a == 0)
		{
			cout << arr[i] << "\t";
		}
		a = 0;
	}
	cout << endl;
	cout << "\nElem arr (B) = ";
	for (int i = 0; i < ROW2; i++)
	{
		for (int j = 0; j < ROW1; j++)
		{
			if (arr2[i] == arr[j])
			{
				a++;
			}

		}
		if (a == 0)
		{
			cout << arr2[i] << "\t";
		}
		a = 0;
	}
	cout << endl;

}*/



/*
C++ 
Створити 3 динамічних змінних різного типу. Заповнити їх деякими значеннями.
Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних 
*/

/*int main()
{
	int *pInt = new int;
	*pInt = 10;
	cout << "pInt value = " << *pInt << " pInt address " << pInt << endl;

	float *pFloat = new float;
	*pFloat = 3.14;
	cout << "pFloat value = " << *pFloat << " pFloat address " << pFloat << endl;

	double *pDouble = new double;
	*pDouble = 8.144345;
	cout << "pDouble value = " << *pDouble << " pDouble address " << pDouble << endl;

	cout << "Result = " << *pInt * *pFloat * *pDouble << endl;

	delete pInt;
	delete pFloat;
	delete pDouble;


	system("pause");
	return 0;

}*/

/*28.	Знайти якесь число в масиві і повернути вказівник на нього. Вивести індекс цьго елементу (элемкнт вводиться з клавіатури)*/



int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 5;
	int a = 0;
	int *parr = new int;
	for (int i = 0; i < ROW; i++)
	{
		parr[i] = rand() % 10;
		cout << parr[i] << "\t";

	}
	cout << endl;
	cout << "Enter Sym = ";
	cin >> a;
	cout << "arr = " << parr[a] << "\nS = " << &parr[a] << endl;
	delete parr;




	system("pause");
	return 0;
}