#include <iostream>
#include <ctime>
using namespace std;


/*int main()
{
	int *p = new int;
	*p = 10;
	cout << " *p = " << *p <<" P = "<<p<< endl;
	delete p;
	cout << p << endl;




	system("pause");
	return 0;
}*/


/*- Перевірити роботу функції для того, щоб обернути масив.
  37.	Написати функції:
- Заповнення масиву; 
- Виводу одновимірного масиву на екран (функція отримує вказівник на перший елемент масиву); 
- Виводу елементів масиву, які стоять на парних місцях, на екран (функція отримує вказівник на третій!!! елемент масиву);*/
/*void ZAP(int arr[], const int ROW);
void VYV(int arr[], const int ROW);
void PARN(int arr[], const int ROW);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 10;
	int arr[ROW];
	ZAP(arr, ROW);
	VYV(arr, ROW);
	PARN(arr, ROW);


	system("pause");
	return 0;
}

void ZAP(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 20;
	}

}
void VYV(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		cout <<"("<< i << ")\t";
	}
	cout << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}
void PARN(int arr[], const int ROW)
{
	cout << "         \t";
	for (int i = 0; i < ROW; i++)
	{
		if (i % 2 == 0 && i > 1)
		{
			cout << "(" << i << ")\t";
		}
	}
	cout << endl;
	cout << "Na parnyh\t";
	for (int i = 0; i < ROW; i++)
	{
		if (i % 2 == 0 && i > 1)
		{
			cout << arr[i] << "\t";
		}
	}
	cout << endl;

}*/


/*35.	Написати функцію, яка виводит на екран 10 випадкових чисел у діапазоні від 0 до 17 і підраховує їх суму та добуток. Сума та добуток повинні вивестись в мейні*/

/*void ZAP(int arr[], const int ROW);
int SUM(int arr[], const int ROW);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 10;
	int arr[ROW];
	ZAP(arr, ROW);
	int SUMM = SUM(arr, ROW);
	cout << "SUM = " << SUMM << "\nDOB = " << SUMM / ROW << endl;


	system("pause");
	return 0;
}
void ZAP(int arr[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 17;
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int SUM(int arr[], const int ROW)
{
	int sum = 0;
	for (int i = 0; i < ROW; i++)
	{
		sum += arr[i];
	}
	return sum;
}*/


/*1.	Написати шаблонні функції для роботи з двовимірними масивами різних типів.
-	Заповнення масиву   (з використанням  &)
-	Вивід масиву на екран   (з використанням  &)   
-	Вивід всіх елементів на головній діагоналі на екран  
-	Знаходження найбільшого елемента масиву
-	Перестановка рядків масиву
-	Очищення масиву  (Заповненя нулями)
Задачу робити з Меню. Вихід з меню по 0*/
void ZAP(int **p, int ROW, int COL);
void VYVID(int **p, int ROW, int COL);
int NAYB(int **p, int ROW, int COL);

int main()
{
	const int ROW = 5, COL = 5;
	int** p = new int*[COL];
	for (int i = 0; i < COL; i++)
	{
		p[i] = new int[ROW];
	}
	ZAP(p, COL, ROW);
	VYVID(p, COL, ROW);
	int sum = NAYB(p, COL, ROW);
	cout << sum << endl;

	**p = NULL;
	for (int i = 0; i < ROW; i++) delete[] p[i];
	delete[] p;
	system("pause");
	return 0;
}
void ZAP(int **p, int ROW, int COL) 
{
	cout << "\t";
	for (int i = 0; i < ROW; i++)
	{
		cout << "(" << i << ")\t";
	}
	cout << endl;
	for (int i = 0; i < COL; i++)
	{
		cout << "(" << i << ")\t";
		for (int j = 0; j < ROW; j++)
		{
			p[i][j] = rand() % 20;
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
}
void VYVID(int **p, int ROW, int COL)
{
	cout << "Vyvid po golovn \t";
	for (int i = 0; i < COL; i++)
	{
		cout << p[0][i] << "\t";
	}
	cout << endl;
}
int NAYB(int **p, int ROW, int COL)
{
	int A = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			for (int t = 0; t < ROW; t++)
			{
				for (int l = 0; l < COL; l++)
				{
					if (p[i][j] > p[t][l])
					{
						A++;
					}
				}
			}
			if (A = 0)
			{
				return p[i][j];
			}
		}
	}



}
