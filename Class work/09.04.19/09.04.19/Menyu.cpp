#include "Menyu.h"
#include <iostream>
#include "Ariags.h"
using namespace std;

void Menyu(int * arr, int ROW)
{
	int Vybir = 0;
	cout << "================================================================" << endl;
	cout << "\t\t\tM E N Y U" << endl;
	cout << "================================================================" << endl;
	cout << "1. Delete 1 Arr \t3. Sort Arr\t\t5. Naybilche Arr\n2. Zamina 1 Arr \t4. Naymenche Arr\t6. Ser aryfme\n\t\t\t0. Exit" << endl;
	cin >> Vybir;
	if (Vybir == 1)
	{
		DeleteArr(arr, ROW);
		PrintArr(arr, ROW);
	}
	else if (Vybir == 2)
	{
		ZminaArr(arr, ROW);
		PrintArr(arr, ROW);
	}
	else if (Vybir == 3)
	{
		SortBulb(arr, ROW);
		PrintArr(arr, ROW);
	}
	else if (Vybir == 4)
	{
		NaymenArr(arr, ROW);
	}
	else if (Vybir == 5)
	{
		NaybArr(arr, ROW);
	}
	else if (Vybir == 6)
	{
		SerAryf(arr, ROW);
	}
}
