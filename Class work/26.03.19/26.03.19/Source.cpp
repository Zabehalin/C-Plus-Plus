#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//struct RealEstate
//{
//	string Type;
//	int roonambers;
//	int Scoor;
//	float FlotArea;
//	string hating;
//	string Description;
//	void ShowInfo()
//	{
//		cout << Type << endl << roonambers << endl << Scoor << endl << FlotArea << endl << Description << endl;
//	}
//	void SetDescription(string desc) {
//		Description = desc;
//	}
//};
//
//
//int main()
//{
//	RealEstate megaFlat;
//	megaFlat.Type = "Flat";
//	megaFlat.roonambers = 4;
//	megaFlat.Scoor = 14;
//	megaFlat.FlotArea = 150.1;
//	megaFlat.hating = "now";
//	string desc;
//	cin >> desc;
//	megaFlat.SetDescription(desc);
//	megaFlat.ShowInfo();
//
//
//	system("pause");
//	return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//struct adddres
//{
//	string country;
//	string region;
//	string city;
//	string street;
//	int zipCode;
//	void ShowAdddressInfo()
//	{
//		cout << "country: " << country << "\nregion: " << region << "\ncity: " << city << "\nstreet: " << street << "\nzipCode: " << endl;
//	}
//};
//
//
//
//struct Person
//{
//	private:
//	string Name;
//	string Surname;
//	int age;
//public:
//	void ShowPersinInfo()
//	{
//		cout << "Name: " << Name << "\nSurname: " << Surname << "\nAge: " << age << endl;
//	}
//
//	void SetAge(int newage)
//	{
//		if (newage >= 120 || newage <= 0)
//		{
//			cout << "Incorrect age!" << endl;
//		}
//		age = newage;
//	}
//	int GetAge()
//	{
//		return age;
//	}
//	void SetName(string newName)
//	{
//		Name = newName;
//	}
//	void SetSurname(string newSurname)
//	{
//		Surname = newSurname;
//	}
//};
//
//
//int main()
//{
//	Person Bill;
//	//Bill.Name = "Bill";
//	//Bill.Surname = "Gatess";
//	//Bill.age = 15;
//	Bill.SetName("Bill");
//	Bill.SetSurname("BBB");
//	Bill.SetAge(57);
//	Bill.ShowPersinInfo();
//	cout << Bill.GetAge() << endl;
//	Bill.adddres.
//
//	system("pause");
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*struct Address {
	string country;
	string region;
	string city;
	string street;
	int zipCode;
	void ShowAddressInfo() {
		cout << "Country: " << country << "\nRegion: " << region << "\nCity: " << city << "\nStreet: " << street << "\nZipCode: " << zipCode << endl;
	}
};

struct Person {
private:
	string name;
	string surname;
	int age;
public:
	void ShowPersonInfo() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
	}
	void SetAge(int newAge) {
		if (newAge >= 120 || newAge <= 0) {
			cout << "Incorrect age!" << endl;
		}
		else {
			age = newAge;
		}
	}
	int GetAge() {
		return age;
	}
	void SetName(string newName) {
		name = newName;
	}
	void SetSurname(string newSurname) {
		surname = newSurname;
	}
	Address address;
};


int main() {

	Person Bill;
	//Bill.name = "Bill";
	//Bill.surname = "Gates";
	//Bill.age = 155;
	Bill.SetName("Bill");
	Bill.SetSurname("Gates");
	Bill.SetAge(57);
	Bill.ShowPersonInfo();
	Bill.address.country = "USA";
	Bill.address.region = "CA";
	Bill.address.city = "LA";
	Bill.address.street = "S. Banderu";
	Bill.address.zipCode = 45678;
	Bill.address.ShowAddressInfo();
	//cout << Bill.GetAge() << endl;
	cout << "===============================================>>>>>" << endl;
	Person Stive;
	Stive.SetName("Stive");
	Stive.SetSurname("Balmor");
	Stive.SetAge(53);
	Stive.ShowPersonInfo();
	Stive.address.country = "USA";
	Stive.address.region = "CA";
	Stive.address.city = "SF";
	Stive.address.street = "R. Shuhevucha";
	Stive.address.zipCode = 345435;
	Stive.address.ShowAddressInfo();



	system("pause");
	return 0;
}*/

/*C++ 
Створити структуру, яка описує тварину (назва, клас, кличка). 
Створити функції для роботи з цією структурою (заповнення об’єкта, 
вивід на екран даних про об’єкт, функція «подати голос»).  */


struct Person
{
	string Name;
	string Clas;
	string Clychka;
	void Tvaruna()
	{
		cout << "Name: " << Name << "\nClas: " << Clas << "\nClychka: " << Clychka << endl;
	}
};


int main()
{
	Person Dog;
	Dog.Name = "Dog";
	Dog.Clas = "Male";
	Dog.Clychka = "Bobik";
	Dog.Tvaruna();
	Person Cat;
	Cat.Name = "Cat";
	Cat.Clas = "Male";
	Cat.Clychka = "Risen";
	Cat.Tvaruna();
	Person Crucian;
	Crucian.Name = "Crucian";
	Crucian.Clas = "Ryba";
	Crucian.Clychka = "Klue";
	Crucian.Tvaruna();




	system("pause");
	return 0;
}



