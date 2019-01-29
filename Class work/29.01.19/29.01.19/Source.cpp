/*C++ 
Написати функцію, яка приймає три аргументи: години, хвилини, секунди. 
Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах */

/*#include <iostream>
using namespace std;
int Time(int G, int H, int S);
int main()
{
	int G = 0, H = 0, S = 0;
	cout << " Enter Hours = ";
	cin >> G;
	cout << " Enter Minutes = ";
	cin >> H;
	cout << " Enter Seconds = ";
	cin >> S;
	int SECONDS = Time(G, H, S);
	cout << " Seconds = " << SECONDS << endl;
	system("pause");
}
int Time(int G, int H, int S)
{
	return (G * 60 * 60) + (H * 60) + S;
}*/

/*1.  Написать функцию Dohod, которая вычисляет доход по вкладу.
Исходными данными для функции являются: величина вклада, процентная ставка (годовых) и срок вклада (количество дней).*/


/*#include<iostream>
using namespace std;

void Nom(int R, int Pro, int Sum, int Dep, int s, int RIK);
int main()
{
	int Sum = 0, Pro = 17, Dep = 0, R = 0, RIK = 365,s=0;
	cout << " Enter Vclad \n1. Days\n2. Years \n Enter Vybir" << endl;
	cin >> R;
	Nom(R, Pro, Sum, Dep, s, RIK);


	system("pause");
}
void Nom(int R,int Pro,int Sum,int Dep,int s,int RIK)
{
	if (R == 1) 
	{
		cout << " Enter Dey = ";
		cin >> s;
		cout << " Enter Sum = ";
		cin >> Dep;
		Sum = (Pro / RIK)*s*Dep / 100;
		cout << Sum;
	}
}*/


/*Написать функцию frame, которая выводит на экран рамку. В качестве параметров функции должны передаваться размер рамки.*/

/*#include<iostream>
using namespace std;
void frame(int V, int S);
int main()
{
	int V = 0, S = 0;
	cout << " Enter Vysota = ";
	cin >> V;
	cout << " Enter Shyryna = ";
	cin >> S;
	frame(V, S);
	system("pause");
	return 0;
}

void frame(int V, int S)
{
	for (int i = 0; i < S; i++)
	{
		cout << "* ";
	}
	for (int i = 0; i < V; i++)
	{
		cout << "*";
		for (int j = 0; j < S; j++)
		{
			cout << "  ";
		}
		cout << "*" << endl;
	
	}
	for (int i = 0; i < S; i++)
	{
		cout << "* ";
	}

}*/


/*  Написать программу, реализующую игру "21". Действия по выдаче очередной карты игроку и компьютеру реализуйте в виде функции.   */

