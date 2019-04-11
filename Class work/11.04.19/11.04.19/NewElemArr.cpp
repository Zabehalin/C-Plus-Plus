#include "NewElemArr.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

void NewElemArr(int * arr, int sizearr)
{
	sizearr += 1;
	arr = (int *)realloc(arr, sizearr * sizeof(int));
	cout << "Enter (+1 arr): ";
	cin >> arr[sizearr-1];

}
