#include <iostream>
#include <ctime>
using namespace std;
/*int main()
{
	int a = 5;
	//cout << "Valse a =  " << a << "\nvalse a =" << &a << endl;//Вказівник на память &a 
	int *pointsA = &a;
	cout << " Valyu a = " << a << "\nAmperss a = " << &a << "\nPointer a = "<< *pointsA <<"\nAdres pointera = "<< pointsA << endl;
	*pointsA = 100500;
	cout << " Valyu a = " << a << "\nAmperss a = " << &a << "\nPointer a = " << *pointsA << "\nAdres pointera = " << pointsA << endl;
	int *pointsBC = pointsA;
	cout << "*pointsBC = " << *pointsBC<<"\npointsBC = "<< pointsBC << "\n*pointsA = " << *pointsA <<"\npointsA = "<< pointsA<< endl;

	system("pause");
	return 0;
}*/

/*C++ 
Дано три числа. Оголосити вказівники на ці числа.
Отримати добуток трьох заданих чисел, середє арифметичне,
найменше з них, користуючись непрямим доступом до чисел (через вказівники). */


/*int main()
{
	int a = 0, b = 0, c = 0;
	cout << "Enter " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	int *PA = &a, *PB = &b, *PC = &c;
	cout << "DOB = " << *PA + *PB + *PC << endl;
	cout <<"SER AR = "<< (*PA + *PB + *PC) / 3 << endl;
	if (*PA < *PB && *PA < *PC)
	{
		cout << "Naym = " << *PA << endl;
	}
	else if(*PB < *PA && *PB < *PC)
	{
		cout << "Naym = " << *PB << endl;
	}
	else if (*PC < *PA && *PC < *PB)
	{
		cout <<"Naym = "<< *PC << endl;
	}




	system("pause");
	return 0;
}*/

void ZAP(int arr2[], const int COL);
void SYM(int S);

int main()
{
	const int ROW = 5, COL = 5;
	int arr[ROW][COL];
	int arr2[COL];
	int S = 0,sum=0;
	for (int i = 0; i < ROW; i++)
	{
		sum = 0;
		S = i;
		SYM(S);
		ZAP(arr2, COL);
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = arr2[j];
			cout << arr[i][j] << "\t";
			sum += arr[i][j];
		}
		cout << "SER AR = " << sum / COL;
		cout << endl;
	}

	system("pause");
	return 0;
}

void ZAP(int arr2[], const int COL)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < COL; i++)
	{
		arr2[i] = rand() % 12;

	}


}
void SYM(int S)
{
	if (S == 0)
	{
		cout<<"UKR MOVA"<<endl;
	}
	else if (S == 1)
	{
		cout << "UKR LIT"<<endl;
	}
	else if (S == 2)
	{
		cout << "FIZRA"<<endl;
	}
	else if (S == 3)
	{
		cout << "MATEMAT"<<endl;
	}
	else if (S == 4)
	{
		cout << "GEOGRAF"<<endl;
	}

}