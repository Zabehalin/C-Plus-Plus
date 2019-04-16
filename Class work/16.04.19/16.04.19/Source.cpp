#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>

using namespace std;

//struct Person
//{
//	string name;
//	unsigned int age : 7;
//	void PersonUser()
//	{
//		cout << "Name: " << name << "\nAge: " << age << endl;
//	}
//};
//
//
//
//
//int main()
//{
//	Person Bill;
//	Bill.name = "Bill";
//	Bill.age = 127;
//	Bill.PersonUser();
//
//
//	system("pause");
//	return 0;
//}


/*Створити структуру з бітовими полями Час(години. хвилини, секунди). Продумати яка мінімальна кількість біт потрібна для збереження певного  елемента структури. Визначити функції:
заповнення об’єкта структури з клавіатури
вивід  об’єкта структури  на екран*/

struct Person
{
	unsigned int Year : 12;
	unsigned int Month : 4;
	unsigned int Day : 5;
	unsigned int Hours : 6;
	unsigned int Minute : 6;
	unsigned int Seconds : 6;
	void PersonTime()
	{
		cout << "Year: " << Year << "\nMonth: " << Month << "\nDay: " << Day << "\nHours: " << Hours << "\nMinute: " << Minute << "\nSeconds: " << Seconds << endl;
	}
};


void Zap(Person person)
{
	int Vvid = 0;
	cout << "Year: ";
	cin >> Vvid;
	person.Year = Vvid;
	cout << "Month: ";
	cin >> Vvid;
	person.Month = Vvid;
	cout << "Day: ";
	cin >> Vvid;
	person.Day = Vvid;
	cout << "Hours: ";
	cin >> Vvid;
	person.Hours = Vvid;
	cout << "Minute: ";
	cin >> Vvid;
	person.Minute = Vvid;
	cout << "Seconds: ";
	cin >> Vvid;
	person.Seconds = Vvid;


}

int main()
{
	Person person;
	Zap(person);
	person.PersonTime();


	system("pause");
	return 0;
}