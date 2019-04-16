#include "Menyu.h"
#include <iostream>
#include <ctime>
#include "Function.h"
using namespace std;

void Menyu(int * arr, int sizearr,int &s )
{
	int Vybir = 0;
	cout << "================================================================" << endl;
	cout << "\t\t\tM E N Y U" << endl;
	cout << "================================================================" << endl;
	cout << "1. (+1 arr)\t2. (-1 arr)\t3. New Symvol Arr \n\t\t0. Exit" << endl;
	cin >> Vybir;
	if (Vybir == 1)
	{
		s = Vybir;
	}
	else if (Vybir == 2)
	{
		s = Vybir;
		DeleteArr(arr, sizearr);
	}
	else if (Vybir == 3)
	{
		s = 0;
		NewSymvArr(arr, sizearr);
		PrintArr(arr, sizearr);
	}
}
