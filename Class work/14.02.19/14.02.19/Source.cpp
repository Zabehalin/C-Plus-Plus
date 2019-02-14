#include <iostream>
#include <ctime>
using namespace std;

/*void PrintA(int a);
void PrintB(int *b);

int main()
{
	int a = 5;
	int b = 30;
	cout << "Main a valve = " << a <<"\t\t";
	cout << "Main b valve = " << b << endl;
	cout << "Main a aPPser = " << &a <<"\t";
	cout << "Main b aPPser = " << &b << endl << endl;
	
	PrintA(a);
	PrintB(&b);
	cout << "Aster a valve = " << a << "\t\t";
	cout << "Main b valve = " << b << endl;
	cout << "Aster a aPPser = " << &a << "\t";
	cout << "Main b aPPser = " << &b << endl << endl;
	
	system("pause");
	return 0;
}
void PrintA(int a)
{
	a++;
	cout << "PrintA a valve = " << a << endl;
	cout << "PrintA a aPPser = " << &a << endl << endl;
}
void PrintB(int *PointerB)
{
	(*PointerB)++;
	cout << "PrintB *PointerB valve = " << *PointerB << endl;
	cout << "PrintB PointerB aPPser = " << PointerB << endl << endl;
}*/


/*1.  Используя указатели и оператор разыменования, определить наибольшее из двух чисел.---*/

/*void SUM(int *PA, int *PB);
int main()
{
	int A = 0, B = 0;
	int *PA = &A, *PB = &B;
	cout << "Enter A = ";
	cin >> *PA;
	cout << "Enter B = ";
	cin >> *PB;
	SUM(PA, PB);
	system("pause");
	return 0;
}
void SUM(int *PA, int *PB)
{
	if (*PA > *PB)
	{
		cout << " A > B " << endl;
	}
	else if (*PB > *PA)
	{
		cout << " B > A " << endl;
	}
	else
	{
		cout << " A = B " << endl;
	}
}*/

/*2. Используя указатели и оператор разыменования, обменять местами значения двух переменных*/
/*void ZMIN(int *PA, int *PB);
void SUM(int *PA, int *PB);

int main()
{
	int A = 0, B = 0;
	int *PA = &A, *PB = &B;
	cout << "Enter A = ";
	cin >> *PA;
	cout << "Enter B = ";
	cin >> *PB;
	ZMIN(PA, PB);
	SUM(PA, PB);
	system("pause");
	return 0;
}
void ZMIN(int *PA, int *PB)
{
	int Z = 0;
	Z = *PA;
	*PA = *PB;
	*PB = Z;
}
void SUM(int *PA, int *PB)
{
	cout << "A = " << *PA << "\nB = " << *PB << endl;
}*/


/*3.  Написать примитивный калькулятор, пользуясь только указателями*/
/*void SUM(int *PA, int *PB, int *Psum);

int main()
{
	int A = 0, B = 0, sum = 0;
	int *PA = &A, *PB = &B, *Psum = &sum;
	cout << "Enter A = ";
	cin >> *PA;
	cout << "Enter B = ";
	cin >> *PB;
	cout << "Enter \n1.(*)\t2.(/)\t3.(+)\t4.(-)" << endl;
	cin >> *Psum;
	SUM(PA, PB, Psum);
	
	
	system("pause");
	return 0;
}
void SUM(int *PA, int *PB, int *Psum)
{
	if (*Psum == 1)
	{
		cout << *PA << " * " << *PB << " = " << (*PA) * (*PB) << endl;
	}
	else if (*Psum == 2)
	{
		cout << *PA << " / " << *PB << " = " << (*PA) / (*PB) << endl;
	}
	else if (*Psum == 3)
	{
		cout << *PA << " + " << *PB << " = " << *PA + *PB << endl;
	}
	else if (*Psum == 4)
	{
		cout << *PA << " - " << *PB << " = " << *PA - *PB << endl;
	}
}*/

/*4. 34.	Сгенерировать десять массивов из случайных чисел. 
Вывести их и сумму их элементов на экран. Найти среди них один с максимальной суммой элементов.
Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.*/

void ZAP(int arr[], const int COL);
int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 10, COL = 10;
	int arr[ROW][COL];
	int arr2[COL];
	int arr3[ROW];
	int Sum = 0, s = 0;
	int max = arr3[0];
	for (int i = 0; i < ROW; i++)
	{
		ZAP(arr2, COL);
		Sum = 0;
		cout << "Masyv (" << i << ")\t";
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = arr2[j];
			Sum += arr[i][j];
			cout << arr[i][j] << "\t";
		}
		arr3[i] = Sum;
		cout <<" = "<< Sum << endl;
		
	}	
	for (int i = 0; i < COL; i++) 
	{
		if (arr3[i] > max)
		{
			max = arr3[i];
			s = i;
		}
	}
		cout <<"Nayb = "<< max << endl;
		cout << "Masyv (" << s << ")\t";
		for (int i = 0; i < COL; i++)
		{
			cout << arr[s][i] << "\t";
		}
		cout <<" = "<<arr3[s]<< endl;

	system("pause");
	return 0;
}
void ZAP(int arr2[], const int COL)
{

	for (int i = 0; i < COL; i++)
	{
		arr2[i] = rand() % 50;

	}

}