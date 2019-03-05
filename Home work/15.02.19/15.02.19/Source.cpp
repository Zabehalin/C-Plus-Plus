#include <iostream>
#include <ctime>
using namespace std;
/*Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення*/
/*void Funk(int SYM, int S);
int main()
{
	int SYM = 0, S = 0;
	cout << "Enter Symvol = ";
	cin >> SYM;
	Funk(SYM, S);


	system("pause");
	return 0;
}
void Funk(int SYM, int S)
{
	while (SYM)
	{
		SYM = SYM / 2;
		S = SYM % 2;
		cout << S;
	}
	cout << SYM;
	cout << endl;

}*/

/*2.	Написати рекурсивну логічну функцію, яка перевіряє чи переданий у функцію масив впорядкований за зростанням(не спаданням). */
void ZAP(int arr[], const int ROW, int Mas, int s);
void PER(int arr[], int arr2[], const int ROW);
void SortBuble(int arr2[], const int ROW);
void PERE(int arr[], int arr2[], const int ROW);
int main()
{
	const int ROW = 4;
	int arr[ROW];
	int arr2[ROW];
	int Mas = 0, s = 0;
	ZAP(arr, ROW, Mas, s);
	PER(arr, arr2, ROW);
	SortBuble(arr2, ROW);
	PERE(arr, arr2, ROW);



	system("pause");
	return 0;
}
void ZAP(int arr[], const int ROW,int Mas,int s)
{
	cout << "Enter arr (" << s << ") = ";
	cin >> Mas;
	arr[s] = Mas;
	cout << "arr = " << arr[s]<<endl;
	if (s == ROW)
	{
		return;
	}
	s++;
	ZAP(arr, ROW, Mas, s);
}
void PER(int arr[], int arr2[], const int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		arr2[i] = arr[i];
	}
}
void SortBuble(int arr2[], const int ROW) 
{
	for (int i = ROW - 1; i >= 1; i--)
	{

		for (int j = 0; j < i; j++) 
		{
			if (arr2[j] > arr2[j + 1])
			{
				int tmp = arr2[j];
				arr2[j] = arr2[j + 1];
				arr2[j + 1] = tmp;
			}
		}
	}
}
void PERE(int arr[], int arr2[], const int ROW)
{
	int S = 0, NS = 0;
	for (int i = 0; i < ROW; i++)
	{
		if (arr[i] == arr2[i])
		{
			S++;
		}
		else if (arr[i] != arr2[i])
		{
			NS++;
		}
	}
	if (S == ROW)
	{
		cout << "(((((( Virno ))))))" << endl;
	}
	else
	{
		cout << "[[[[[[ Ne Virno ]]]]]]" << endl;
	}
}