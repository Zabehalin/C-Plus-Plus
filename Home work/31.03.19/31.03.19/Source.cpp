﻿#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

/*Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів і всіма необхідними функціями. Використати вкладені структури (для адреси чи ПІБ). */
void Dodat(string Path);
void Vyvid(string Path);

int main()
{
	
	ifstream ReadFile;
	string Path = "User.txt";
	int v = 0,n = 0;
	while (true)
	{
		system("cls");
		cout << "1. Nev Uaser\t2. Review User\t0. Exit" << endl;
		cin >> v;
		if (v == 1)
		{
			Dodat(Path);
		}
		else if (v == 2)
		{
			Vyvid(Path);
		}
		else if (v == 0)
		{
			break;
		}
		else
		{
			cout << "EROR" << endl;
		}
		cout << "1. nazad\t2. Exit" << endl;
		cin >> n;
		if (n == 2)
		{
			break;
		}
	}
	system("pause");
	return 0;
}
void Dodat(string Path)
{  
	ofstream WriteFile;
	string name;
	string surname;
	string mobilca;
	string adres;
	cout << "\tEnter" << endl;
	cout << "Name:\t\t";
	cin >> name;
	cout << "SurName:\t";
	cin >> surname;
	cout << "Telefoon:\t";
	cin >> mobilca;
	cout << "Adres:\t\t";
	cin >> adres;
	WriteFile.open(Path, ofstream::app);
	WriteFile << "Name:\t" << name << "\nSurName:\t" << surname << "\nTelefoon:\t" << mobilca << "\nAdres:\t" << adres << endl;
	WriteFile.close();

}
void Vyvid(string Path)
{
	ifstream ReadFile;
	ReadFile.open(Path);
		string DATA;
		while (!ReadFile.eof())
		{
			getline(ReadFile, DATA);
			cout << DATA << endl;
		}
	ReadFile.close();

}