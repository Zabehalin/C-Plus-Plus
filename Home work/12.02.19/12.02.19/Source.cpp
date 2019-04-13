#include <iostream>
#include <ctime>
using namespace std;

/*1. Написати шаблони функцій для роботи з двовимірним масивом:
a.	введення(або заповнення випадковими числами) двовимірного масиву
b.	виведення матриці на екран
c.	перевірка чи всі(кожен) рядки матриці впорядковані за зростанням(шаблон функції повертає логічне значення).
d.	перевірка чи заданий стовпець матриці впорядкований за спаданням
*/
void Zap(int ** &arr, int ROW, int COL);
void Vyvid(int ** &arr, int ROW, int COL);
void SortBulb(int ** arr, int ROW, int COL);
void SortBulbN(int ** arr, int ROW, int COL);

int main()
{
	srand(unsigned(time(NULL)));
	int v = 0;
	int ROW = 10, COL = 10;
	int **parr = new int*[COL];
	for (int i = 0; i < COL; i++)
		parr[i] = new int[ROW];
	Zap(parr, ROW, COL);
	Vyvid(parr, ROW, COL);
	cout << "1. sort za zrost\t2. sort za spad " << endl;
	cin >> v;
	if (v == 1)
	{
		SortBulb(parr, ROW, COL);
		Vyvid(parr, ROW, COL);
	} 
	else if (v == 2)
	{
		SortBulbN(parr, ROW, COL);
		Vyvid(parr, ROW, COL);
	}
	for (int i = 0; i < COL; i++)
	{
		delete parr[i];
	}
	delete[]parr;
	system("pause");
	return 0;
}
void Zap(int ** &arr, int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; i < COL; i++)
		{
			arr[i][j] = rand() % 20;
		}
	}
}
void Vyvid(int **& arr, int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; i < COL; i++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void SortBulb(int ** arr, int ROW,int COL)
{
	for (int I = 0; I < ROW; I++)
	{
		for (int i = COL - 1; i >= 1; i--) {

			for (int j = 0; j < i; j++) {
				if (arr[I][j] > arr[I][j + 1]) {
					int tmp = arr[I][j];
					arr[I][j] = arr[I][j + 1];
					arr[I][j + 1] = tmp;
				}
			}
		}
	}
}
void SortBulbN(int ** arr, int ROW, int COL)
{
	for (int I = 0; I < ROW; I++)
	{
		for (int i = COL - 1; i >= 1; i--) {

			for (int j = 0; j < i; j++) {
				if (arr[I][j] < arr[I][j + 1]) {
					int tmp = arr[I][j];
					arr[I][j] = arr[I][j + 1];
					arr[I][j + 1] = tmp;
				}
			}
		}
	}
}
