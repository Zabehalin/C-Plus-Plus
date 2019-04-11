#include "FillArr.h"
#include <iostream>
#include <ctime>
using namespace std;

void FillArr(int * arr, int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr[i] = rand() % 20;

	}
}
