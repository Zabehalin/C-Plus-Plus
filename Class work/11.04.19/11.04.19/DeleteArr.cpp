#include "DeleteArr.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void DeleteArr(int *arr, int sizearr)
{
	int v = 0,s = 0;
	int *ptr = (int *)calloc(sizearr-1, sizeof(int));
	cout << "Enter Delete Arr: ";
	cin >> v;
	for (int i = 0; i < sizearr; i++)
	{
		if (i < v || i > v)
		{
			ptr[s] = arr[i];
			s++;
		}
	}
	for (int i = 0; i < sizearr; i++)
	{
		arr[i] = ptr[i];
	}
	free(ptr);
}
