#include "NaymenArr.h"
#include <iostream>
#include "Ariags.h"
using namespace std;
void NaymenArr(int * arr, int ROW)
{
		int *Parr2 = new int[ROW];
		for (int i = 0; i < ROW; i++)
		{
			Parr2[i] = arr[i];
		}
		SortBulb(Parr2, ROW);
		cout << "Naymenche = " << Parr2[0] << endl;
		delete[] Parr2;
}
