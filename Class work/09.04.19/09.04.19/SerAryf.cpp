#include "SerAryf.h"
#include <iostream>
using namespace std;
void SerAryf(int * arr, int ROW)
{
	int Ser = 0;
	for (int i = 0; i < ROW; i++)
	{
		Ser += arr[i];
	}
	cout << "Ser Aryf = " << Ser / ROW << endl;
}
