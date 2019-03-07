#include <iostream>
#include <ctime>
using namespace std;

/* Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику, 
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика).*/
void Zap(int *&matemARR, int *&fizARR, int *&engARR, const int Bal,const int user);
template<typename T>
void Predmet(T Bal);
void SerBal(int *&matemARR, int *&fizARR, int *&engARR, int *&serbalARR, const int Bal, const int user);
void SortPredmet(int *&matemARR, int *&fizARR, int *&engARR, const int Bal, const int user);


int main()
{
	const int Bal = 3,user = 2;
	int *matemARR = new int[Bal];
	int *fizARR = new int[Bal];
	int *engARR = new int[Bal];
	int *serbalARR = new int[Bal];
	Zap(matemARR, fizARR, engARR, Bal,user);
	SerBal(matemARR, fizARR, engARR,serbalARR, Bal, user);
	SortPredmet(matemARR, fizARR, engARR, Bal, user);

	delete[] matemARR;
	delete[] fizARR;
	delete[] engARR;
	delete[] serbalARR;
	system("pause");
	return 0;
}
void Zap(int *&matemARR, int *&fizARR, int *&engARR, const int Bal, const int user)
{
	int S = 0;
	for (int i = 0; i < user; i++)
	{
		cout << "\t\t((Enter USER)) (" << i << ")" << endl;
		for (int j = 0; j < Bal; j++)
		{
			Predmet(j);
			cin >> S;
			if (j == 0)
			{
				matemARR[i] = S;
			}
			else if (j == 1)
			{
				fizARR[i] = S;
			}
			else if (j == 2)
			{
				engARR[i] = S;
			}
		}

	}
}
template<typename T>
void Predmet(T Bal)
{
	if (Bal == 0)
	{
		cout << "Matem = ";
	}
	else if (Bal == 1)
	{
		cout << "Fizyca = ";
	}
	else if (Bal == 2)
	{
		cout << "English = ";
	}
}
void SerBal(int *&matemARR, int *&fizARR, int *&engARR,int *&serbalARR, const int Bal, const int user)
{
	int S = 0;
	for (int i = 0; i < user; i++)
	{
		cout << "\t\tSerBal USER (" << i << ") = ";
		for (int j = 0; j < Bal; j++)
		{
			if (j == 0)
			{
				S += matemARR[i];
			}
			else if (j == 1)
			{
				S += fizARR[i];
			}
			else if (j == 2)
			{
				S += engARR[i];
			}
		}
		serbalARR[i] = S/Bal;
		cout << serbalARR[i] << endl;
		S = 0;
	}

}
void SortPredmet(int *&matemARR, int *&fizARR, int *&engARR, const int Bal, const int user)
{
	int pr = 0;
	cout << "\n\t\t((Enter predmet))\n0. Matema\n1. Fizyca\n2. English " << endl;
	cin >> pr;
	for (int i = 0; i < user; i++)
	{
		cout << "\t\tUSER (" << i << ") ";
		Predmet(pr);
		if (pr == 0)
		{
			cout << matemARR[i] << endl;
		}
		else if (pr == 1)
		{
			cout << fizARR[i] << endl;
		}
		else if (pr == 2)
		{
			cout << engARR[i] << endl;
		}
	}
}
