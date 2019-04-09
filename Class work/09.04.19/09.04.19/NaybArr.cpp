#include "NaybArr.h"
#include <iostream>
#include "Ariags.h"
using namespace std;
void NaybArr(int * arr, int ROW)
{
	int *Parr2 = new int[ROW];
	for (int i = 0; i < ROW; i++)
	{
		Parr2[i] = arr[i];
	}
	SortBulb(Parr2, ROW);
	cout << "Naybilche = " << Parr2[ROW - 1] << endl;
	delete[] Parr2;
}
