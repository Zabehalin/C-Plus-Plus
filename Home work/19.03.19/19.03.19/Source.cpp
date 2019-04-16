#include <iostream>
#include <ctime>
#include <string>
using namespace std;


/*Написати програму, яка отримує від користувача довільний набір cимволів, шифрує його та виводить на екран новоутворений рядок. 
Для шифрування скористатись звичайними арифметичними операціями ++, --, збільшення або зменшення на якесь число тощо. Наприклад, при введенні ABА на екрані буде ВСВ.*/
void Shyfr(char *Text);
int main()
{	
	int Vybir = 0;
	char Text[255];
	while (true)
	{
		Shyfr(Text);
		cout << "1. Menyu\t0. Exit" << endl;
		cin >> Vybir;
		if (Vybir == 0)
		{
			break;
		}
	}

	system("pause");
	return 0;
}
void Shyfr(char *Text)
{
	int Vybir = 0;
	system("cls");
	cout << "1. Za Shyfr\t2. Roz Shyfr\t0. Exit" << endl;
	cin >> Vybir;
	if (Vybir == 1)
	{
		cout << "Enter Text" << endl;
		cin >> Text;
		for (int i = 0; i < strlen(Text); i++)
		{
			Text[i]++;
		}
		cout << Text << endl;
	}
	else if (Vybir == 2)
	{
		cout << "Enter Text" << endl;
		cin >> Text;
		for (int i = 0; i < strlen(Text); i++)
		{
			Text[i]--;
		}
		cout << Text << endl;
	}
	else
	{
		cout << "EROR" << endl;
	}

}