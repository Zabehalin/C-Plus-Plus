#include "DeleteArr.h"
#include <iostream>
using namespace std;

void DeleteArr(int *& arr, int ROW)
{
	int VybArr = 0;
	cout << "Enter Arr: ";
	cin >> VybArr;
	arr[VybArr] = NULL;
}
