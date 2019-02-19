#include <iostream>
#include <ctime>
using namespace std;

/*void Fval(int a);
void FREF(int &a);

int main()
{
	int a = 10;
	cout <<" a = "<< a << endl <<" &a = "<< &a << endl << endl;
	int &RA = a;
	cout << " RA = " << RA << "\n &RA = " << &RA << endl << endl;
	int *P;
	//int &R = *P;
	Fval(a);
	cout << " F a = " << a << endl << " F &a = " << &a << endl << endl;
	FREF(a);
	cout << " FR a = " << a << endl << " FR &a = " << &a << endl << endl;

	system("pause");
	return 0;
}

void Fval(int a)
{
	cout << " Fval a = " << a << endl << " Fval &a = " << &a << endl << endl;
	a += 100;
	cout << " Fval a = " << a << endl << " Fval &a = " << &a << endl << endl;
}

void FREF(int &a)
{
	cout << " FREF a = " << a << endl << " FREF &a = " << &a << endl << endl;
	a += 300;
	cout << " FREF a = " << a << endl << " FREF &a = " << &a << endl << endl;
}*/

/*1 .  Написати функцію, яка приймає вказівник на змінну і записує в неї результат множення на  самоу себе. */

/*void SUM(int *Pa);
int main()
{
	int A = 0;
	int *Pa = &A;
	cout << "Enter A = ";
	cin >> *Pa;
	SUM(Pa);

	system("pause");
	return 0;
}
void SUM(int *Pa)
{
	cout << *Pa << " * " << *Pa << " = " << (*Pa)*(*Pa) << endl;

}*/


/*2. Дано три числа. Оголосити посилання на ці числа. 
Отримати добуток трьох заданих чисел, середє арифметичне,
найменше з них, користуючись непрямим доступом до чисел (через посилання).  */

/*void SUM(int *pA, int *pB, int *pC);
void NAM(int *pA, int *pB, int *pC);
int main()
{
	int A = 5, B = 12, C = 3;
	int *pA = &A, *pB = &B, *pC = &C;
	SUM(pA, pB, pC);
	NAM(pA, pB, pC);


	system("pause");
	return 0;
}
void SUM(int *pA, int *pB, int *pC)
{
	cout << "Dobutoc = " << *pA + *pB + *pC << endl;
	cout << "Ser AR = " << (*pA + *pB + *pC) / 3 << endl;
}
void NAM(int *pA, int *pB, int *pC)
{
	if (*pA < *pB&&*pA < *pC)
	{
		cout << "Naym = " << *pA << endl;
	}
	else if (*pB < *pA&&*pB < *pC)
	{
		cout << "Naym = " << *pB << endl;
	}
	else if (*pC < *pA&&*pC < *pB)
	{
		cout << "Naym = " << *pC << endl;
	}
}*/


/*3. Дано два масиви, впорядковати їх по зростанню.
Сформуйте масив який складається з елементів масивів А і В,
впорядкованих по зростанню і виводить адреси елеиентів масиву*/
/*void Mas(int *Parr, int *Parr2, const int ROW, const int ROW2,int *Parr3);
void SortBuble(int *Parr3, const int ROW, const int ROW2);

int main()
{
	srand(unsigned(time(NULL)));
	const int ROW = 6, ROW2 = 8;
	int arr[ROW];
	int arr2[ROW2];
	int arr3[ROW + ROW2];
	int *Parr = &arr[ROW];
	int *Parr2 = &arr2[ROW2];
	int *Parr3 = &arr3[ROW + ROW2];
	Mas(Parr, Parr2, ROW, ROW2,Parr3);
	SortBuble(Parr3, ROW, ROW2);


	system("pause");
	return 0;
}
void Mas(int *Parr, int *Parr2, const int ROW, const int ROW2,int *Parr3)
{
	int s = 0;
	for (int i = 0; i < ROW; i++)
	{
		
		Parr[i] = rand() % 100;
		cout << "arr 1 = " << Parr[i] << " ( " << &Parr[i] << " )" << endl;
		Parr3[s] = Parr[i];
		s++;
	}
	for (int i = 0; i < ROW2; i++)
	{
		Parr2[i] = rand() % 50;
		cout << "arr 2 = " << Parr2[i] << " ( " << &Parr2[i] << " )" << endl;
		Parr3[s] = Parr2[i];
		s++;
	}
	for (int i = 0; i < ROW+ROW2; i++)
	{
		cout << "arr 3 = " << Parr3[i] << " ( " << &Parr3[i] << " )" << endl;
	}
	
}
void SortBuble(int *Parr3, const int ROW, const int ROW2) 
{
	for (int i = ROW+ROW2 - 1; i >= 1; i--) 
	{

		for (int j = 0; j < i; j++)
		{
			if (Parr3[j] > Parr3[j + 1]) 
			{
				int tmp = Parr3[j];
				Parr3[j] = Parr3[j + 1];
				Parr3[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < ROW+ROW2; i++)
	{
		cout << "arr 3 SORT = " << Parr3[i] << " ( " << &Parr3[i] << " )" << endl;
	}
}*/






/*4. Написати функцію (ашаблонї), яка приймає два вказівника. За допомогою функції: 
Вивести на екран менше з двох введених чисел  (з клавіатури)
Збільшити на 10 менше число. */

/*void SUM(int *PA, int *PB);

int main()
{
	int A = 0, B = 0;
	int *PA = &A, *PB = &B;
	cout << "Enter sum A = ";
	cin >> *PA;
	cout << "Enter sum A = ";
	cin >> *PB;
	SUM(PA, PB);


	system("pause");
	return 0;
}
void SUM(int *PA, int *PB)
{
	if (*PA > *PB)
	{
		cout << "A > B ( " << *PA << " > " << *PB << " )" << endl;
			cout << " B + 10 =" << *PB + 10 << endl;
	}
	else if (*PB > *PA)
	{
		cout << "B > A ( " << *PB << " > " << *PA << " )" << endl;
	
		cout << " A + 10 =" << *PA + 10 << endl;
	}
	else
	{
		cout << "A = B ( " << *PA << " = " << *PB << " )" << endl;
	}
}*/