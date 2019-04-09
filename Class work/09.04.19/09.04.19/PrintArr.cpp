#include "PrintArr.h"
#include <iostream>
#include <ctime>
using namespace std;

void PrintArr(int * arr, int ROW)
{
	cout << "================================================================" << endl;
	cout << "\t\t\tA R R" << endl<<endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << "(" << i << ")\t";
	}
	cout << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout <<" "<< arr[i] << "\t";
	}
	cout << endl;
}
