#include <iostream>
#include <ctime>
#include <string>
//#define WEEK 7
//#define SPACE "\t"
//#define SUM(a,b)((a)+(b))
//#define DEBUG
//#define PROD 1
using namespace std;

//union Test
//{
//	short a;
//	int b;
//	double c;
//
//};
//
//
//
//int main()
//{
//	Test un;
//	un.a = 49;
//	un.b = 200;
//	un.c = 404;
//
//
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	cout << WEEK <<SPACE<<"Enter"<< endl;
//	cout << SUM(5, 15)<<endl;
//
//#ifdef DEBUG
//	cout << "start lup"<<endl;
//#endif // DEBUG
//	for (int i = 0; i < 5; i++)
//	{
//		cout << i << "\t";
//	}
//	cout << endl;
//#ifdef DEBUG
//	//cout << "\nfin lup" << endl;
////#endif // DEBUG
//
//#else
//cout << "\nLoop not start" << endl;
//#endif
//
//#if PROD == 1
//cout << "Stable" << endl;
//#elif PROD == 2
//cout << "Test" << endl;
//#else
//cout << "Else" << endl;
//#endif
//
//
//
//
//
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}

/*C++ 
Написати макрос (макро-функцію), який знаходить та повертає максимальне з трьох переданих йому чисел */

//
//template<typename T1, typename T2, typename T3>
//constexpr auto ABBC(T1  a, T2  b, T3  c) { return ((a) > (b) && (a) > (c) ?(a) || (b) > (a) && (b) > (c) ? (b) : (c));; }
//
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	cout << "Enter" << endl;
//	cout << "A = ";
//	cin >> a;
//	cout << "B = ";
//	cin >> b;
//	cout << "C = ";
//	cin >> c;
//	ABBC(a, b, c);
//
//
//
//	system("pause");
//	return 0;
//}

/*C++ 
Написати програму, яка знаходить суму елементів масиву. Розмір масиву є константою, яка оголошена на рівні препроцесора  */
void Zap(int *arr, const int SIZE);
void Vyvid(int *arr, const int SIZE);
#define ZARR( arr , SIZE)(int s=0; for (int i = 0;i<SIZE;i++)s+=arr[i];return s/SIZE;)

int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	Zap(arr, SIZE);
	Vyvid(arr, SIZE);
	ZARR(arr, SIZE);
	system("pause");
	return 0;
}

void Zap(int *arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Vyvid(int *arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}