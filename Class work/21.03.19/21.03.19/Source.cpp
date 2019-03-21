#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//string GetDataFromPB();
//string GetDataFromSW();
//string GetDataFromNBU();
//void ShowInfo(string(*func)());
//
//int main()
//{
//
//	ShowInfo(GetDataFromPB);
//
//	system("pause");
//	return 0;
//}
//
//string GetDataFromPB()
//{
//	return "Data From PB";
//
//}
//string GetDataFromNBU()
//{
//	return "Data From NBU";
//
//}
//string GetDataFromSW()
//{
//	return "Data From SW";
//
//}
//void ShowInfo(string (*func)())
//{
//	cout << func() << endl;
//}



/*C++ 
Написати 2 логічні функції: bigger(int, int) – повертає true, якщо перше число більше другого,
інакше повертає false; функція smaller(int, int ) – навпаки, повертає true, якщо перше менше другого. 
Написати функцію sort_arr(int *array, int size, bool(*f)(int, int)) для впорядкування масиву.
Функція отримує масив та вказівник на логічну функцію, яка буде задавати порядок сортування. 
Так, наприклад, при передачі у функцію sort_arr() третім аргументом адреси функції bigger,
масив впорядкується по зростанню, а при передачі адреси функції smaller, масив впорядкується по спаданню.*/

#include <iostream>
#include <ctime>
#include <string>

using namespace std;
void Fill(int *arr, const int SIZE);
void Print(int *arr, const int SIZE);
bool Bigger(int a, int b);
bool Smaller(int a, int b);
void SortArr(int *arr, const int SIZE, bool(*f)(int a, int b));
void SortupperARR(int *arr, const int SIZE);
void SortlowerARR(int *arr, const int SIZE);

int main() 
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE];

	Fill(arr, SIZE);
	Print(arr, SIZE);
	SortArr(arr, SIZE, Bigger);
	//SortArr(arr, SIZE, Smaller);
	Print(arr, SIZE);

	system("pause");
	return 0;
}

void Fill(int *arr, const int SIZE) 
{
	for (int i = 0; i < SIZE; i++) 
	{
		arr[i] = rand() % 10;
	}
}

void Print(int *arr, const int SIZE) 
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Arr [" << i << "] = " << arr[i] << endl;
	}
	cout << endl;
}

bool Bigger(int a, int b) 
{
	if (a > b) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool Smaller(int a, int b)
{
	if (a > b)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void SortArr(int *arr, const int SIZE, bool(*f)(int a, int b)) 
{
	int a = arr[0], b = arr[1];
	if (f(a, b) == 1) 
	{
		SortupperARR(arr, SIZE);
	}
	else 
	{
		SortlowerARR(arr, SIZE);
	}

}
void SortupperARR(int *arr, const int SIZE)
{
	for (int i = SIZE - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}

}
void SortlowerARR(int *arr, const int SIZE)
{
	int temp = 0;
	bool exit = false;

	while (!exit)
	{
		exit = true;
		for (int i = SIZE; i > 0; i--)
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				exit = false;
			}
	}
}