#include <iostream>
#include <ctime>
using namespace std;


/*template<typename T, typename T2>
void Fill(T arr[], T2 size) {
for (int i = 0; i < size; i++) {
arr[i] = rand() % 10;
}
}

template<typename T, typename T2>
void Print(T arr[], T2 size) {
for (int i = 0; i < size; i++) {
cout << "arr [" << i << "]=" << arr[i] << "\t\t";
cout << " Address = " << arr + i << endl;
}
}

int main() {
srand(unsigned(time(NULL)));
//==============Block1===================
int size;
cout << "Enter arr size : " << endl;
cin >> size;

int *arr = new int[size];

Fill(arr, size);
Print(arr, size);

delete [] arr;

//==============Block1===================

system("pause");
return 0;
}*/


/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню */
void Fill(int arr[], int size);
void Print(int arr[], int size);
void Fi(int arr[], int size);
void Mas(int arr[], int size);

int main()
{
	srand(unsigned(time(NULL)));
	int size;
	cout << "Enter arr size : ";
	cin >> size;
	size++;
	int *arr = new int[size];
	Fill(arr, size);
	Print(arr, size-1);
	Fi(arr, size);
	Print(arr, size);
	Mas(arr, size);
	Print(arr, size);
	
	
	delete[] arr;
	system("pause");
	return 0;
}

void Fill(int arr[], int size) 
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand() % 50;
	}
}
void Print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}
void Fi(int arr[], int size)
{
	int s = 0;
	cout << "Enter size element (" << size - 1 << ") = ";
	cin >> s;
	arr[size-1] = s;
}
void Mas(int arr[], int size)
{
	int mas = 0,s = 0;
	cout << "Enter DELETE MAS = ";
	cin >> mas;
	cout << "Enter New Symwol = ";
	cin >> s;
	arr[mas] = s;
}