#include "PrintArr.h"
#include <iostream>
#include <ctime>
using namespace std;
void PrintArr(int * arr, int ROW)
{
	cout << "================================================================" << endl;
	cout << "\t\t\tA R R" << endl << endl;
	cout << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << "Arr(" << i << "): " << arr[i] << "\tSsylca: " << &arr[i] << endl;
	}
	cout << endl;
}
