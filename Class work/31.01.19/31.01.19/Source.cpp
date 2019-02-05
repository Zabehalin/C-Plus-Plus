/*1. C++ 
Написти перевантажені функції для знаходження добутку трьох трьох переданих чисел. */
/*#include <iostream>
using namespace std;

double Sum(double a, double b, double c);
int Sum(int a, int b, int c);


int main()
{

	double  a, b, c;
	cout << " Enter Symwol 1." << endl;
	cin >> a;
	cout << " Enter Symwol 2." << endl;
	cin >> b;
	cout << " Enter Symwol 3." << endl;
	cin >> c;
	cout << Sum(a, b, c)<<endl;


	system("pause");
	return 0;
}
int Sum(int a, int b, int c)
{
	return a + b + c;
}
double Sum(double a, double b, double c)
{
	return a + b + c;
}*/



/*2. C++ 
Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю. Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7. 
функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-12..20] 
шаблонну функцію Print(), яка виводить елементи масиву на екран. Примітка! Протестувати дану функцію на масивах типу int, double,
функцію, яка повертає кількість відємних елементів масиву 
перевантажені функції:
- для знаходження середнього арифметичного елементів масиву
- для знаходження максимального елемента масиву в проміжку (між двома вказаними індексами) */

/*#include <iostream>
#include <ctime>
using namespace std;
void Fill(int arr[], const int MAS);
void Print(int arr[], const int MAS);
void Vid(int arr[], const int MAS);
int Ser(int arr[], const int MAS);
void SortBuble(int arr[], const int MAS);

int main()
{
	const int MAS = 10;
	int arr[MAS];
	Fill(arr, MAS);
	Print(arr, MAS);
	Vid(arr, MAS);
	cout << "Seredne Aryfme = "<<Ser(arr, MAS) << endl;
	SortBuble(arr, MAS);

	system("pause");
	return 0;
}

void Fill(int arr[], const int MAS)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < MAS; i++)
	{
		arr[i] = rand() % 32 + -12;
	}
}
void Print(int arr[], const int MAS)
{
	for (int i = 0; i < MAS; i++)
	{
		cout << arr[i]<<"\t";
	}
	cout << endl;
}
void Vid(int arr[], const int MAS)
{
	int s = 0;
	for (int i = 0; i < MAS; i++)
	{
		if (arr[i] < 0)
		{
			cout << arr[i]<<"\t";
			s++;
		}
	}
	cout << "\nVidemnyh = " << s << endl;
	
}
int Ser(int arr[], const int MAS)
{
	int seredne = 0 , d = 0;
	for (int i = 0; i < MAS; i++)
	{
		seredne += arr[i];
		d++;
	}
	seredne /= d;
	
	return seredne;
}
void SortBuble(int arr[], const int MAS) {
	int q = 0;
	for (int i = MAS - 1; i >= 1; i--) {

		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		q++;

	}

	cout << "Bilshe = " << arr[q] << endl;
}*/

/*3. C++ 
Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності. Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5. 
шаблонну функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні [1..30] 
функцію Print(), яка виводить елементи масиву на екран в вигляді матриці. 
функцію, яка виводить на екран вказаний рядок */


/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Print(int **arr, int ROW, int COL);
void Fill(int **p, int ROW, int COL);
void Rad(int **arr, int ROW, int COL);
int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 7, COL = 5;
	int** p = new int*[COL];
	for (int i = 0; i < COL; i++)
		p[i] = new int[ROW];
	Fill(p, ROW, COL);
	Print(p, ROW, COL);
	Rad(p, ROW, COL);
	for (int i = 0; i < COL; i++) delete[] p[i];
	delete[] p;
	system("pause");
	return 0;
}

void Fill(int **p, int ROW, int COL)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < COL; i++)
		for (int j = 0; j < ROW; j++) 
		{
			p[i][j] = rand() % 31 + 1;
		}
}
void Print(int **arr, int ROW, int COL)
{

	for (int i = 0; i < COL; i++) 
	{
		for (int j = 0; j < ROW; j++) 
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Rad(int **arr, int ROW, int COL) 
{
	int R = 0;
	cout << " Enter Rad = ";
	cin >> R;
	for (int i = 0; i < ROW; i++) 
	{
	   cout << arr[R-1][i] << "\t";
	}
	cout << endl;
	
}*/

/*4.C++ 
Даний масив чисел. Написати функцію, яка сортує масив по зростанню або по спаданню, в залежності від третього параметра функції. 
Якщо він рівний 0, сортування йде по спаданню, якщо 1, тоді по зростанню. Перші 2 параметра функції - це масив і його розмір, третій параметр по замовчуванню рівний 1. */

/*#include <iostream>
#include <ctime>
using namespace std;
void Fill(int arr[], const int ROW);
void Print(int arr[], const int ROW);
void SortBuble(int arr[], const int ROW);


int main()
{
	const int ROW = 15;
	int arr[ROW];
	Fill(arr, ROW);
	Print(arr, ROW);
	SortBuble(arr, ROW);
	
	
	
	
	system("pause");
	return 0;
}
void Fill(int arr[], const int ROW)
{
	srand(unsigned(time(NULL)));

	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void SortBuble(int arr[], const int ROW) 
{
	if (arr[3] >= 1)
	{
		for (int i = ROW - 1; i >= 1; i--)
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
		for (int t = 0; t < ROW; t++)
		{
			cout << arr[t] << "\t";
		}
		cout << endl;
	}
}*/