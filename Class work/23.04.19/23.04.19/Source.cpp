#include <iostream>
#include <string>
using namespace std;

//class Car
//{
//public:
//	string modell;
//	int year;
//	string color;
//	float pover;
//	void ShovCarInfo()
//	{
//		cout << "Modell: " << modell << "\nYear: " << year << "\nColor: " << color << "\nPover: " << pover << endl;
//	}
//};
//
//
//
//
//
//
//int main()
//{
//	Car Audi;
//	Audi.modell = "Auto";
//	Audi.year = 2008;
//	Audi.color = "Red";
//	Audi.pover = 2.5;
//	Audi.ShovCarInfo();
//	Car Auto;
//	Auto.modell = "neAuto";
//	Auto.year = 2022;
//	Auto.color = "neRed";
//	Auto.pover = 4.5;
//	Auto.ShovCarInfo();
//
//	system("pause");
//	return 0;
//}





/*#include <iostream>
#include <string>

using namespace std;

class Car {
private:
string model;
string color;
int year;
float power;
public:
void ShowCarInfo() {
cout << "Model: " << model <<  "\nColor: " << color  << "\nYear: " << year << "\nPower: " << power <<  endl;
}
void SetModel(string newModel) {
model = newModel;
}
void SetColor(string newColor) {
color = newColor;
}
void SetYear(int newYear) {
year = newYear;
}
void SetPower(float newPower) {
power = newPower;
}

string GetModel() {
return model;
}

string GetColor() {
return color;
}

int GetYear() {
return year;
}
float GetPower() {
return power;
}

};



int main() {

Car audi;
audi.SetModel("Audi");
audi.SetColor("Black");
audi.SetYear(2006);
audi.SetPower(1.8);
audi.ShowCarInfo();

Car bmw;
bmw.SetModel("BMW");
bmw.SetColor("White");
bmw.SetYear(2010);
bmw.SetPower(2.0);
bmw.ShowCarInfo();

cout << bmw.GetYear() << endl;
bmw.SetYear(2011);
cout << bmw.GetYear() << endl;


cout << audi.GetPower() << endl;

system("pause");
return 0;
}*/

/*ООП 
Завдання 1. Класна робота
Створити клас "Точка" (Point), який складається з двох полів типу int: X та Y. Необхідно забезпечити: 
Введення координат точки користувачем 
Вивід інформації про точку на екран 
Можливість зміни будь-якої з координат на запит користувача (X або Y)  */



//class XY
//{
//public:
//	int X;
//	int Y;
//	void VhileXY()
//	{
//		cout << "X = " << X << "\nY = " << Y << endl;
//	}
//
//};
//
//
//
//
//int main()
//{
//	int sum = 0;
//	XY Zap;
//	cout << "X = ";
//	cin >> sum;
//	Zap.X = sum;
//	cout << "Y = ";
//	cin >> sum;
//	Zap.Y = sum;
//	Zap.VhileXY();
//	while (true)
//	{
//		int vyb = 0;
//		cout << "1. Nev X\n2. New Y\n0. Exit" << endl;
//		cin >> vyb;
//		if ( vyb == 1 )
//		{
//			cout << "X = ";
//			cin >> sum;
//			Zap.X = sum;
//		}
//		else if (vyb == 2)
//		{
//			cout << "Y = ";
//			cin >> sum;
//			Zap.Y = sum;
//		}
//		else
//		{
//			break;
//		}
//		Zap.VhileXY();
//
//	}
//
//	system("pause");
//	return 0;
//}





/*ООП 
Написати клас "Банківський рахунок" (Account), який містить: 
Номер рахунку 
Розмір коштів на рахунку 
Назва валюти рахунку (рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом: R, G, E, $ тощо 
Забезпечити можливість: 
Відкривати рахунок та первинно вносити гроші на рахунок 
Знімати гроші з рахунку 
Докладати гроші на рахунок */

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
	cout << "1. Popovnyty Balans\t2. Znyaty Coshty\t0. Exit"<<endl;
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















