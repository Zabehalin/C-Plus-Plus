#include <iostream>
#include <ctime>
using namespace std;

/*void Fil(int *arr, int size);
int main()
{
	srand(unsigned(time(NULL)));
	int size = 0;
	cout << "Enter arr size: ";
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << "Arr [" << i << "] = " << arr[i] << "\t" << "Adress = " << arr + i << endl;

	}
	delete[] arr;
	int size = 0;
	cout << "Enter arr size: ";
	cin >> size;
	int *arr = new int[size];
	Fil(arr, size);
	delete[] arr;



	system("pause");
	return 0;
}
void Fil(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << "Arr [" << i << "] = " << arr[i] << "\t" << "Adress = " << arr + i << endl;

	}
}*/


/*# include <iostream>
# include <ctime>

using namespace std;

void Fill(int *const arr, int const size) {
for (int i = 0; i < size; i++) {
arr[i] = rand() % 10;
}
}

void Print(int *const arr, int const size) {
cout << " arr address " << arr << endl;
for (int i = 0; i < size; i++) {
cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
}
}

void Push(int *&arr, int size) {
int elem = 0;
cout << "Enter new element " << endl;
cin >> elem;
int *tmpArr = new int[size + 1];
cout << "rmpArr address = " << tmpArr << endl;
for (int i = 0; i < size; i++) {
tmpArr[i] = arr[i];
}
tmpArr[size] = elem;

delete[]arr;
arr = tmpArr;
}

int main() {
srand(unsigned(time(NULL)));
//===============Block1====================>
/*int size = 0;
cout << "Enter arr size: " << endl;
cin >> size;
int *arr = new int[size];
for (int i = 0; i < size; i++) {
arr[i] = rand() % 10;
cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
}
delete[] arr;*/
//===============Block1====================>
//===============Block2====================>
/*int size = 0;
cout << "Enter arr size: " << endl;
cin >> size;
int *arr = new int[size];
cout << " arr address " << arr << endl;
Fill(arr, size);
Print(arr, size);
delete[]arr;*/
//===============Block2====================>
//===============Block3====================>
/*int size = 5;
int *arr1 = new int[size];
int *arr2 = new int[size];

Fill(arr1, size);
Fill(arr2, size);
cout << "=========Arr1=============" << endl;
Print(arr1, size);
cout << "=========Arr2=============" << endl;
Print(arr2, size);

delete[] arr1;
arr1 = new int[size];

for (int i = 0; i < size; i++) {
arr1[i] = arr2[i];
}

cout << "=========Arr1====After=========" << endl;
Print(arr1, size);
cout << "=========Arr2====After=========" << endl;
Print(arr2, size);

delete[] arr1;
delete[] arr2;*/
//===============Block3====================>
//===============Block4====================>
/*int size = 0;
cout << "Enter arr size: " << endl;
cin >> size;
int *arr = new int[size];
Fill(arr, size);
Print(arr, size);*/



/*
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
Виводу масиву 
Доповнення масиву одним елементом в кінець масиву. 
Доповнення масиву одним елементом в початокмасиву.    
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню */

/*void Fill(int arr[], int size);
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
	Push(arr, size+2);
	Print(arr, size+2);
	Mas(arr, size+2);
	Print(arr, size+2);


	delete[] arr;
	system("pause");
	return 0;
}
//===============Заповнення МАСИВА=================
void Fill(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
	}
}
//===============Виведення МАСИВА=================
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}
//===============Новий елемент МАСИВА=================
/*void Fi(int arr[], int size)
{
	int s = 0;
	cout << "Enter size element (" << size - 1 << ") = ";
	cin >> s;
	arr[size - 1] = s;
}*/
/*void Push(int *&arr, int size)
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
//===============Видалення та заміна елемента МАСИВА=================
void Mas(int *&arr, int size)
{
	int mas = 0, s = 0;
	cout << "Enter DELETE MAS = ";
	cin >> mas;
	cout << "Enter New Symwol = ";
	cin >> s;
	arr[mas] = s;
}*/