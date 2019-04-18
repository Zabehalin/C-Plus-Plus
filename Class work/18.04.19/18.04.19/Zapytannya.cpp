#include "Zapytannya.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void Zapytannya(int &Vidpovid)
{
	int Vidp = 0;
	string vidp;
	string v;
	int Sym = 0;
	Sym = rand() % 10 + 1;
	if (Sym == 1)
	{
		cout << "2 + 2 = ";
		cin >> Vidp;
		if (Vidp == 4)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (2 + 2 = 4)" << endl;
		}
	}
	else if (Sym == 2)
	{
		cout << "Chicken is it = ";
		cin >> vidp;
		v = "Chicken";
		if (vidp == v)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (Chicken is it = Chicken)" << endl;
		}
	}
	else if (Sym == 3)
	{
		cout << "2 * 5 = ";
		cin >> Vidp;
		if (Vidp == 10)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (2 * 5 = 10)" << endl;
		}
	}
	else if (Sym == 4)
	{
		cout << "The cat is it = ";
		v = "cat";
		cin >> vidp;
		if (vidp == v)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (The cat is it = cat)" << endl;
		}
	}
	else if (Sym == 5)
	{
		cout << "7 * 8 = ";
		cin >> Vidp;
		if (Vidp == 56)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (7 * 8 = 56)" << endl;
		}
	}
	else if (Sym == 6)
	{
		cout << "The dog is it = ";
		v = "dog";
		cin >> vidp;
		if (vidp == v)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (The dog is it = dog)" << endl;
		}
	}
	else if (Sym == 7)
	{
		cout << "5 + 5 + 5 = ";
		cin >> Vidp;
		if (Vidp == 15)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (5 + 5 + 5 = 15)" << endl;
		}
	}
	else if (Sym == 8)
	{
		cout << "Apples grow on = ";
		v = "Apples";
		cin >> vidp;
		if (vidp == v)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (Apples grow on = Apples" << endl;
		}

	}
	else if (Sym == 9)
	{
		cout << "2564 * 0 = ";
		cin >> Vidp;
		if (Vidp == 0)
		{
			cout << "Y E S" << endl;
			Vidpovid++;
		}
		else
		{
			cout << "No (2564 * 0 = 0)" << endl;
		}

	}
}
