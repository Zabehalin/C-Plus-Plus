#include <iostream>
#include <ctime>
using namespace std;

/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10(оцінка може бути дробовим числом). 
Знайти підсумкову оцінку кожного учасника, яка обчислюється як середнє арифметичне, але без врахування найкращої та 
найгіршої оцінок. Виконати задачу з розбиттям на функції.*/
void Zap(int **arr, const int ROW, const int COL);
void Vyvid(int **arr, const int ROW, const int COL);
void Predmet(int i);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 3,COL = 4;
	int **parr = new int*[ROW] ;
	for (int i = 0; i < ROW; i++)
		parr[i] = new int[COL];

	Zap(parr, ROW, COL);
	Vyvid(parr, ROW, COL);

	delete[]parr;
	system("pause");
	return 0;
}
void Zap(int **arr, const int ROW, const int COL)
{
	int sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		cout << "User (" << i << ")" << endl;
		for (int j = 0; j < COL; j++)
		{
			Predmet(j);
			cin >> sum;
			if (sum <= 12 && sum >= 0)
			{
				arr[i][j] = sum;
			}
			else
			{
				cout << "EROR"<<endl;
			}
		}
	}
}
void Vyvid(int **arr, const int ROW, const int COL)
{
	system("cls");
	for (int i = 0; i < ROW; i++)
	{
		cout << "User (" << i << ")" << endl;
		for (int j = 0; j < COL; j++)
		{
			Predmet(j);
			cout << arr[i][j] <<endl;
		}
		cout << endl;
	}
}
void Predmet(int i)
{
	if (i == 0)
	{
		cout << "Matem: ";
	}
	else if (i == 1)
	{
		cout << "Ukr mova: ";
	}
	else if (i == 2)
	{
		cout << "Ukr lit: ";
	}
	else if (i == 3)
	{
		cout << "Fizyca: ";
	}
}