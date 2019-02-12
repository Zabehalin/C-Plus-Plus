#include <iostream>
using namespace std;

/*int i = 0;
void Funk();
int main()
{

	Funk();
	system("pause");
	return 0;
}
void Funk()
{
	i++;
	cout << "sfdg = "  << i<< endl;
	Funk();

}*/


/*void Funk(int a);

int main()
{

	Funk(11);
	system("pause");
	return 0;
}
void Funk(int a)
{
	a--;

	if (a >= 0)
	{
		cout << a << endl;
		Funk(a);
		
	}
}*/



/*int Funk(int counter)
{
	if (counter < 0)
	{
		return 0;
	}
	counter--;
	return Funk(counter);

	
}*/


/*C++ 
Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні*/

/*void Funk(int a, int b, int c);

int main()
{	
	int a = 0,b = 0, c = 0;
	cout << "Enter a = ";
	cin >> b;
	cout << "Enter b = ";
	cin >> c;
	a = c;

	Funk(a,b,c);
	system("pause");
	return 0;
}
void Funk(int a ,int b , int c)
{
	a--;
	int S = 0;
	if (a >= 0)
	{
		S = c;
		c = b + 1;
		cout << b << " + " << c << " = " << b + c << endl;
		b = S;
		Funk(a,b,c);

	}
}*/


/*C++ 
Написати програму для виводу на екран чисел Фібоначчі: (1,1,2,3,5,8... xn = xn-1 + xn-2), менших заданого числа Q.  */



/*void SUM(int xn, int Xn, int S);
int main()
{
	int xn = 0, Xn = 1, S = 0;
	cout << "Enter xn = ";
	cin >> xn;
	SUM(xn, Xn, S);


	system("pause");
	return 0;
}
void SUM(int xn, int Xn,int S)
{
	if (Xn < xn)
	{
	   
		SUM(xn, Xn, S);
	}


}*/


/*C++ 
1 Написати функцію, яка отримує ціле шестизначне число і визначає чи є воно щасливим. 
(Число є щасливим, якщо сума його перших трьох цифр = сумі останніх трох цифр. Наприклад, 1331. 45154 ).*/