#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void Menyu(string User);
void Avtoriz(string Login, string Password, string User);
void Register(string User);
void NewUser(string Path);
void Vyvid(string Path);

int main()
{
	ifstream ReadFile[10];
	string Path = "User.txt";
	string User = "Regis.txt";
	//Register(User);
	Menyu(User);

	system("pause");
	return 0;
}
void Menyu(string User)
{
	ofstream WriteFile[10];
	string Login;
	string Password;
	cout << "\t\t\tW E L C O M" << endl;
	cout << "\t\t\tLogin: ";
	cin >> Login;
	cout << "\t\t\tPassword: ";
	cin >> Password;
	Avtoriz(Password, Login, User);
}












void Avtoriz(string Login, string Password,string User)
{
	ifstream readFile;
	readFile.open(User);
	string data;
	while (!readFile.eof()) {
		//readFile >> data;
		getline(readFile, data);
		cout << data << endl;
	}
readFile.close();
}
















void Register(string User)
{
	ofstream WriteFile;
	string Login;
	string Password;
	string nnn;
	cout << "Login: ";
	cin >> Login;
	cout << "Password: ";
	cin >> Password;
	cout << "User/Admin: ";
	cin >> nnn;
	WriteFile.open(User, ofstream::app);
	WriteFile << Login << "\t" << Password << "\t" << nnn << endl;
	WriteFile.close();


}
void NewUser(string Path)
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

