#include <iostream>
#include <ctime>
using namespace std;


/*int main()
{
	srand(unsigned(time(NULL)));
	int ROW = 0, COL = 0;
	cout << "Enter ROW = ";
	cin >> ROW;
	cout << "Enter COL = ";
	cin >> COL;
	int **arr = new int*[ROW];
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = new int[COL];
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	while (true)
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int j = 0; j < COL; j++)
			{
				cout << arr[i][j] << "   ";
			}
			cout << endl;
		}
	}

	for (int i = 0; i < ROW; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;


	system("pause");
	return 0;

}*/
/*C++ 
Написати функції для роботи з динамічною матрицею: 
▀ Функція створення динамічної матриці розміром row x col, де row та col
▀ Функція заповнення матриці 
▀ Функція виводу матриці 
▀ Функція доповнення матриці новим рядком 
▀ Функція видалення з матриці рядка за вказаним номером 
▀ Функція вставки нового рядка за вказаним номером 
▀ Функція доповнення матриці новим стовпчиком 
▀ Функція видалення з матриці стовпця за вказаним номером 
Функція вставки нового стовпця за вказаним номером */
void Zap(int**&arr, int row, int col);
void Vyvid(int**&arr, int row, int col);
void Push(int**&arr, int &row, int col);
void Del(int**&arr, int &row, int col);
void Pull(int**&arr, int &row, int col);
void PushRow(int**&arr, int &row, int &col);
void DelCol(int**&arr, int &row, int col);
void PullCol(int**&arr, int &row, int col);
int main()
{
	srand(unsigned(time(NULL)));
	int row = 0, col = 0;
	cout << "Enter ROW = ";
	cin >> row;
	cout << "Enter COL = ";
	cin >> col;
	int **arr = new int*[row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[col];

	Zap(arr, row, col);
	Vyvid(arr, row, col);
	Push(arr, row, col);
	Vyvid(arr, row, col);
	Del(arr, row, col);
	Vyvid(arr, row, col);
	Pull(arr, row, col);
	Vyvid(arr, row, col);
	PushRow(arr, row, col);
	Vyvid(arr, row, col);
	DelCol(arr, row, col);
	Vyvid(arr, row, col);
	PullCol(arr, row, col);
	Vyvid(arr, row, col);
	for (int i = 0; i < row; i++)
		delete[] arr[i];

	delete[] arr;
	system("pause");
	return 0;
}
//==================== Заповнення ================
void Zap(int**&arr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}

}
//==================== Вивід ================
void Vyvid(int**&arr, int row, int col)
{
	cout << "\t";
	for (int i = 0; i < col; i++)
	{
		cout << "(" << i << ")\t";
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "(" << i << ")\t";
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}
//==================== Добавлення Рядка ================
void Push(int**&arr, int &row,int col)
{
	row += 1;
	cout << "\t\tDob ROW" << endl;
	int s = 1;
	int **tmpArr = new int*[row];
	for (int i = 0; i < row; i++)
	tmpArr[i] = new int[col];
	
	for (int i = 0; i < col; i++)
	{
		tmpArr[0][i] = rand() % 20;
	}

	for (int i = 0; i < row-1; i++)
	{
		for (int j = 0; j < col; j++)
		{
			tmpArr[s][j] = arr[i][j];
		}
		s++;
	}

	for (int i = 0; i < row-1; i++)
		delete[]arr[i];
	delete[]arr;
		arr = tmpArr;

}
//==================== Видалення Рядка ================
void Del(int**&arr, int &row, int col)
{
	int s = 0;
	cout << "\t\tEnter Delete Row" << endl;
	cout << "ROW : ";
	cin >> s;
	for (int i = 0; i < col; i++)
	{
		arr[s][i] = NULL;
	}
	//delete[]arr[s];
	//row -= 1;
}
//==================== Вставка Рядка ================
void Pull(int**&arr, int &row, int col)
{
	int s = 0;
	cout << "\t\tEnter Pull Row" << endl;
	cout << "ROW : ";
	cin >> s;
	for (int i = 0; i < col; i++)
	{
		arr[s][i] = rand() % 20;
	}
}
//==================== Добавить Стовбчик ================
void PushRow(int**&arr, int &row, int &col)
{
	col += 1;
	cout << "\t\tDob COL" << endl;
	int s = 1;
	int **tmpArr = new int*[row];
	for (int i = 0; i < row; i++)
		tmpArr[i] = new int[col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col-1; j++)
		{
			tmpArr[i][j] = arr[i][j];
		}
		s++;
	}
	for (int i = 0; i < row; i++)
	{
		tmpArr[i][col - 1] = rand() % 20;
	}

	for (int i = 0; i < row; i++)
		delete[]arr[i];
	delete[]arr;
	arr = tmpArr;

}
//==================== Видалить Стовбчик ================
void DelCol(int**&arr, int &row, int col)
{
	int s = 0;
	cout << "\t\tEnter Delete Col" << endl;
	cout << "Col : ";
	cin >> s;
	for (int i = 0; i < col; i++)
	{
		arr[i][s] = NULL;
	}
	
}

//==================== Вставка Рядка ================
void PullCol(int**&arr, int &row, int col)
{
	int s = 0;
	cout << "\t\tEnter Pull Col" << endl;
	cout << "Col : ";
	cin >> s;
	for (int i = 0; i < col; i++)
	{
		arr[i][s] = rand() % 20;
	}
}