#include "SortBulb.h"

void SortBulb(int * arr, int ROW)
{
		for (int i = ROW - 1; i >= 1; i--) {

			for (int j = 0; j < i; j++) {
				if (arr[j] > arr[j + 1]) {
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
}
