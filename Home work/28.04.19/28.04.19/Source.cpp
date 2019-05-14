#include <iostream>
#include <string>
using namespace std;


/*Завдання 1. Домашнє завдання

До класноЇ роботи додати наступний функціонал.
Можливість збереження в файлі інформації про картку.*/






class OsobCabinet
{
public:
	string name;
	string surname;
	int pin;
	int kart;
	float Balans;
	string Valyuta;

};
void Cabinet(OsobCabinet oscabinet);
void ZapCabinet(OsobCabinet oscabinet)
{
	int zap = 0;
	string text;
	cout << "Name: ";
	cin >> text;
	oscabinet.name = text;
	cout << "SurName: ";
	cin >> text;
	oscabinet.surname = text;
	cout << "P I N: ";
	cin >> zap;
	oscabinet.pin = zap;
	cout << "Nom Cart: ";
	cin >> zap;
	oscabinet.kart = zap;
	cout << "Valyuta: ";
	cin >> text;
	system("cls");
	Cabinet(oscabinet);

}
void Cabinet(OsobCabinet oscabinet)
{
	int vybir = 0;
	cout << "1. Popovnyty Balans\t2. Znyaty Coshty\t0. Exit" << endl;
	cout << "=============================================================" << endl;

	cout << "BALANS: " << oscabinet.Balans << oscabinet.Valyuta << "\t\t\tUser: " << oscabinet.name << endl;
}




int main()
{
	int s = 0;
	OsobCabinet oscabinet;
	cout << "1. Register\t 2. Os Cabinet\t0. Exit" << endl;
	cin >> s;
	if (s == 1)
	{
		ZapCabinet(oscabinet);
	}
	else if (s == 2)
	{
		Cabinet(oscabinet);
	}
	else
	{

	}



	system("pause");
	return 0;
}

