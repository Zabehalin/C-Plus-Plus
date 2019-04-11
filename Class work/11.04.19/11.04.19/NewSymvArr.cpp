#include "NewSymvArr.h"
#include <iostream>
using namespace std;
void NewSymvArr(int * arr, int sizearr)
{
	int v = 0,s = 0;
	cout << "Enter Arr: ";
	cin >> v;
	cout << "Enter new arr: ";
	cin >> s;
	arr[v] = s;
}
