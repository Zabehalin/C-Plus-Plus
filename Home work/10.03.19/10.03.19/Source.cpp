#include <iostream>
#include <ctime>
using namespace std;


/*1. �������� ������� ��� ������ � ��������� ����������� �������: 
������� ��������� ���������� ������ ��������� ������ � ���� ���������� ����������� �������.
������ ������ 
���������� ������ ����� ��������� � ����� ������. 
���������� ������ ����� ��������� � �������������.    
��������� �������� �� �������� ��������. 
������� ������ �������� � ������� ��������� ������� � ����� 
���� */
void Fill(int arr[], int size);
void Print(int arr[], int size);
//void Fi(int arr[], int size);
void Mas(int *&arr, int size);
void Push(int *&arr, int size);

int main()
{
	srand(unsigned(time(NULL)));
	int size;
	cout << "Enter arr size : ";
	cin >> size;
	//size++;
	int *arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	//Fi(arr, size);
	Push(arr, size + 2);
	Print(arr, size + 2);
	Mas(arr, size + 2);
	Print(arr, size + 2);


	delete[] arr;
	system("pause");
	return 0;
}
//===============���������� ������=================
void Fill(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
//===============��������� ������=================
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}
//===============����� ������� ������=================
/*void Fi(int arr[], int size)
{
	int s = 0;
	cout << "Enter size element (" << size - 1 << ") = ";
	cin >> s;
	arr[size - 1] = s;
}*/
void Push(int *&arr, int size)
{
	int elem = 0, element = 0,s=1;
	cout << "Enter (0) element" << endl;
	cin >> element;
	cout << "Enter ("<<size<<") element " << endl;
	cin >> elem;
	int *tmpArr = new int[size];
	cout << "rmpArr address = " << tmpArr << endl;
	tmpArr[0] = element;
	for (int i = 0; i < size; i++)
	{

		tmpArr[s] = arr[i];
		s++;
	}
	tmpArr[size-1] = elem;

	delete[]arr;
	arr = tmpArr;
}
//===============��������� �� ����� �������� ������=================
void Mas(int *&arr, int size)
{
	int mas = 0, s = 0;
	cout << "Enter DELETE MAS = ";
	cin >> mas;
	cout << "Enter New Symwol = ";
	cin >> s;
	arr[mas] = s;
}