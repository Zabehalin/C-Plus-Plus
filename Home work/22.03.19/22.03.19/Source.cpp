#include <iostream>
#include <ctime>
#include <string>
using namespace std;

/*1) Дано рядок. Видалити із рядка заданий символ. 
Результат розмістити у новому рядку.*/


//void DELETE(char *str, int S);
//
//int main()
//{
//	char str[255];
//	int S = 0;
//	cout << "Enter TXT" << endl;
//	cin >> str;
//	DELETE(str, S);
//	cout << str << endl;
//	system("pause");
//	return 0;
//}
//void DELETE(char *str, int S)
//{
//	char str1[2];
//	char str2[255];
//	int s = 0;
//	cout << "Enter Delete Symvol : ";
//	cin >> str1;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == str1[1])
//		{
//			str2[s] += str[i];
//			s++;
//		}
//		else if (str[i] == str1[0])
//		{
//			S++;
//		}
//	}
//	for (int i = 0; i < strlen(str2); i++)
//	{
//		str[i] = str2[i];
//	}
//}



/*2) Розробити програму, яка зчитує з екрану рядок,
 а потім видає статистику: кількість пробільних символів (whitespaces), 
голосних, приголосних, знаків пунктуації.
 Введення передбачається англомовним. */
void TestSymvol(char *str);
int main()
{
	char str[255];
	cout << "Enter TXT" << endl;
	cin >> str;
	TestSymvol(str);
	system("pause");
	return 0;
}
void TestSymvol(char *str)
{
	int Com = 0, Crapc = 0, Du = 0, DvoCrapc = 0,CrapczKom = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '.')
		{
			Crapc++;
		}
		else if (str[i] == ',')
		{
			Com++;
		}
		else if (str[i] == '(' || str[i] == ')')
		{
			Du++;
		}
		else if (str[i] == ':')
		{
			DvoCrapc++;
		}
		else if (str[i] == ';')
		{
			CrapczKom++;
		}
	}
	cout << "(.) = " << Crapc << "\n(,) = " << Com << "\n(()) = " << Du << "\n(:) = " << DvoCrapc << "\n(;) = " << CrapczKom << endl;
}



