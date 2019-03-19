#include <iostream>
#include <ctime>
#include <string>
using namespace std;

/*int STRlen(char *str);
int main()
{
	char str[225];
	//cin >> str;
	//cout << STRlen(str) << endl;
	char str1[255];
	char str2[255];
	cin >> str1 >> str2;


	system("pause");
	return 0;
}
int STRlen(char *str)
{
	int counter = 0;
	while (str[counter] != 0)
	{
		counter++;
	}
	return counter;


}*/
//int main()
//{
//	/*char str1[255];
//	char str2[255];
//	cin >> str1 >> str2;
//	strcat_s(str1, str2);
//	cout << str1 << endl;*/
//	string str = "Hello";
//	string str1 = "world ";
//	string res = str +" "+ str1 + "*****----*****";
//	cout << res << endl;
//	cout << strlen(res) << endl;
//
//
//	system("pause");
//	return 0;
//}

/*C++ 
Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ ?  */
//void Zap(char *str);
//int main()
//{
//	char str[255];
//	Zap(str);
//
//	system("pause");
//	return 0;
//}
//void Zap(char *str)
//{
//	char str1[2] = "a";
//	char str2[2] = "o";
//	int a = 0, o = 0;
//	cin >> str;
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] == str1[0])
//		{
//			a++;
//		}
//		else if (str[i] == str2[0])
//		{
//			o++;
//		}
//	}
//
//	cout << "Symvol ( a ) = " << a << "\nSymvol ( o ) = " << o << endl;
//}


/*C++ 
Вводиться рядок. Порахувати кількість латинських букв, цифр та розділових знаків у рядку.  */
/*void Rozdil(char *str);

int main()
{
	char str[255];
	cout << "Enter txt" << endl;
	cin >> str;
	Rozdil(str);

	system("pause");
	return 0;
}
void Rozdil(char *str)
{
	int Lat = 0, Sym = 0, Znac = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 33 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 127)
		{
			Znac++;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			Sym++;
		}
		else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
		{
			Lat++;
		}
	}
	cout << "Lat bucv = " << Lat << "\nSymv = " << Sym << "\nZnac = " << Znac << endl;
}*/

/*C++ 
Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.  */
/*void Zmina(char *str);
void ZapARR(int *ARR, int *arr, const int ROW);

int main()
{
	char str[255];
	cout << "Enter TXT" << endl;
	cin >> str;
	Zmina(str);
	cout << str << endl;
	system("pause");
	return 0;
}
void Zmina(char *str)
{
	const int ROW = 26;
	int ARR[ROW];
	int arr[ROW];
	ZapARR(ARR, arr, ROW);
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			if (str[i] == ARR[j])
			{
				str[i] = arr[j];
			}
			else if (str[i] == arr[j])
			{
				str[i] = ARR[j];
			}
		}
	}

}
void ZapARR(int *ARR, int *arr, const int ROW)
{
	int s = 0;
	for (int i = 65; i < 90; i++)
	{
		ARR[s] = i;
		s++;
	}
	s = 0;
	for (int i = 97; i < 122; i++)
	{
		arr[s] = i;
		s++;
	}
}
*/



/*C++ 
Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку.  
*/

void DELETE(char *str,int S);

int main()
{
	char str[255];
	int S = 0;
	cout << "Enter TXT" << endl;
	cin >> str;
	DELETE(str,S);
	cout << str << endl;
	system("pause");
	return 0;
}
void DELETE(char *str,int S)
{
	char str1[2];
	char str2[255];
	int s = 0;
	cout << "Enter Delete Symvol : ";
	cin >> str1;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != str1[0])
		{
			str2[s] = str[i];
			s++;
		}
		else if (str[i] == str1[0])
		{
			S++;
		}
	}
	for (int i = 0; i < strlen(str)-S; i++)
	{
		str[i] == str2[i];
	}
}




