/*#include <iostream>
using namespace std;
template<typename T>


T Demo(T a, T b)
{
	cout << a <<" + ";
	cout << b << " = ";
	return a + b;
}
template<typename T1, typename T2 >
T1 Demo(T1 a, T2 b)
{
	cout << a <<" + ";
	cout << b << " = ";
	return a + b;
}
template<typename T>

void Sum(T a, T b)
{
	cout << a << " + ";
	cout << b << " = " << a + b << endl;

}
template<typename T1, typename T2>

void Sum(T1 a, T2 b)
{
	cout << a << " + ";
	cout << b << " = " << a + b<<endl;

}


int main()
{
	cout << Demo(5, 13) << endl;//                      T Demo(T a, T b)

	cout << Demo(5.1, 1.3) << endl;//                   T Demo(T a, T b)

	cout << Demo(5, 1.3) << endl;//                     template<typename T1, typename T2 >T1 Demo(T1 a, T2 b)

	cout << Demo(5.2, 13) << endl;//                    template<typename T1, typename T2 >T1 Demo(T1 a, T2 b)

	Sum(1, 2);//                                        void Sum(T a, T b)

	Sum(1.5, 2.7);//                                    void Sum(T a, T b)

	Sum(1.5, 2);//                                      void Sum(T1 a, T2 b)

	system("pause");
	return 0;
}*/


/*C++ 
Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю. Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7. 
функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-12..20] 
шаблонну функцію Print(), яка виводить елементи масиву на екран. Примітка! Протестувати дану функцію на масивах типу int, double, char 
функцію, яка повертає кількість відємних елементів масиву 
перевантажені функції:
- для знаходження середнього арифметичного елементів масиву
- для знаходження максимального елемента масиву в проміжку (між двома вказаними індексами) */

/*#include <iostream>
#include <ctime>
using namespace std;
template<typename T>
void Fill(T arr[], const T MAS);
template<typename T>
void Print(T arr[], const T MAS);
template<typename T>
void Vid(T arr[], const T MAS);
template<typename T>
T Ser(T arr[], const T MAS);
template<typename T>
void SortBuble(T arr[], const T MAS);

int main()
{
	const int MAS = 10;
	int arr[MAS];
	Fill(arr, MAS);
	Print(arr, MAS);
	Vid(arr, MAS);
	cout << "Seredne Aryfme = " << Ser(arr, MAS) << endl;
	SortBuble(arr, MAS);

	system("pause");
	return 0;
}
template<typename T>
void Fill(T arr[], const T MAS)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < MAS; i++)
	{
		arr[i] = rand() % 33 + -12;
	}
}
template<typename T>
void Print(T arr[], const T MAS)
{
	for (int i = 0; i < MAS; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Vid(T arr[], const T MAS)
{
	int s = 0;
	for (int i = 0; i < MAS; i++)
	{
		if (arr[i] < 0)
		{
			cout << arr[i] << "\t";
			s++;
		}
	}
	cout << "\nVidemnyh = " << s << endl;

}
template<typename T>
T Ser(T arr[], const T MAS)
{
	T seredne = 0, d = 0;
	for (int i = 0; i < MAS; i++)
	{
		seredne += arr[i];
		d++;
	}
	seredne /= d;

	return seredne;
}
template<typename T>
void SortBuble(T arr[], const T MAS) {
	int q = 0;
	for (int i = MAS - 1; i >= 1; i--) {

		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		q++;

	}

	cout << "Bilshe = " << arr[q] << endl;
}*/


/*C++ 
Написати перевантажені функції й основну програму, що їх викликає. 
для масиву який починається на парне число виконує циклічне зрушення вліво на кількість елементів рівному першому елементові масиву. 
для масиву який починається на непарне число виконує циклічне зрушення вправо на кількість елементів рівне останньому елементові масиву.  */

/*#include <iostream>
#include <ctime>
using namespace std;
void Fill(int arr[], const int MAS);
void Print(int arr[], const int MAS);
void Fll(int arr[], const int MAS);


int main()
{
	const int MAS = 10;
	int arr[MAS];
	int S = 0;
	Fill(arr, MAS);
	Fll(arr, MAS);
	Print(arr, MAS);
	//Fll(arr, MAS);

	system("pause");
	return 0;
}
void Fill(int arr[], const int MAS)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < MAS; i++)
	{
		arr[i] = rand() % 10;
		//cout << arr[i]<<"\t";
	}

}
void Print(int arr[], const int MAS)
{
	int S = 0, B = 0;
	if (arr[0] % 2 == 0)
	{
		S = arr[arr[0]];
		arr[arr[0]] = arr[0];
		arr[0] = S;
		for (int i = 0; i < MAS; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	else if (arr[0] % 2 == 1)
	{
		S = MAS - arr[0];
		B = arr[0];
		arr[S] = arr[0];
		arr[0] = B;
		for (int i = 0; i < MAS; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
}
void Fll(int arr[], const int MAS)
{
	for (int i = 0; i < MAS; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

}*/


/*3. Написати шаблони функцій для роботи з одновимірним масивом:
a.	введення елементів масиву(або заповнення випадковим чином), 
b.	виводу елементів масиву на екран,
c.	пошуку першого входження елемента у масив(індексу входження, - 1 - якщо не знайдено) 
d.	пошуку останнього входження елемента у масив,
e.	перемішування елементів масиву випадковим чином.
f.	заповнення масиву однаковим заданим значенням 
Протестувати роботу шаблонних функцій для масивів цілого, дробового. */


#include <iostream>
#include <ctime>
using namespace std;
void Fill(int arr[], const int MAS);
void Print(int arr[], const int MAS);

int main()
{
	const int MAS = 10;
	int arr[MAS];

	Fill(arr, MAS);
	Print(arr, MAS);



	system("pause");
	return 0;
}

void Fill(int arr[], const int MAS)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < MAS; i++)
	{
		arr[i] = rand() % 20;
	}
}
void Print(int arr[], const int MAS)
{
	for (int i = 0; i < MAS; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void 
















































