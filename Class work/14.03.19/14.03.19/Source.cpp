#include <iostream>
#include <ctime>
using namespace std;


//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	/*char str[4] = "www";
//	cout << sizeof(char) << endl;
//	cout << sizeof(str) << endl;
//	cout << str << endl;
//	cout << strlen(str) << endl;//Скількі символів
//	for (int i = 0; i < strlen(str); i++)
//	{
//		cout << str[i] << "\t";
//	}
//	cout << endl;
//
//	
//	/*char str2[] = { 'H','e','l','l','o','\0' };
//	cout << str2 << endl;*/
//	/*char Name[25];
//	cout << "Enter\nName: ";
//	cin >> Name;
//	cout <<"Yu Name: "<< Name << endl;*/
//	/*while (true)
//	{
//		cout << (char)7 << endl;
//	}
//*/
//	system("pause");
//	return 0;
//}

/*C++ 
Написати програму, яка отримує від користувача довільний 
набір цифр (кодів) та виводить на екран новоутворений рядок символів. 
Наприклад, при введенні цифр 65 66 65 на екрані буде ABA  
*/
/*void Zap(char parr[],int s);

int main()
{
	char parr[255];
	int s = 0;
	Zap(parr,s);
	cout << parr << endl;
	system("pause");
	return 0;
}
void Zap(char parr[],int s)
{
	int V = 0, Z = 0;
	cout << "Enter \n 1.Zap\n0. Exit" << endl;
	cin >> V;
		cout << "0. Exit" << endl;
		if (V == 1)
		{
			while (true)
			{
				cout << "Enter COD : ";
				cin >> Z;
				if (Z >= 65 && Z <= 90)
				{
					parr[s] = Z;
					s++;
				}
				else if (Z >= 97 && Z <= 122)
				{
					parr[s] = Z;
					s++;
				}
				else if (Z == 0)
				{
					break;
				}
				else
					cout << "E R O R" << endl;
			}
		}
		else if (V == 0)
		{
			cout << "X" << endl;
			//break;
		}
}*/



/*C++ 
Написати програму, яка отримує від користувача довільний 
набір cимволів та виводить на екран рядок кодів символів, по суті, закодований рядок. 
Наприклад, при введенні ABA на екрані буде 65 66 65.  */

/*int main()
{
	char Symvol[255];
	cout << "Enter Txt" << endl;
	cin >> Symvol;
	for (int i = 0; i < strlen(Symvol); i++)
	{
		cout << int(Symvol[i]) << "\t";
	}
	cout << endl;
	
	system("pause");
	return 0;
}*/


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main

