#include <iostream>
#include <string>
#include <fstream>
using namespace std;



struct Regist
{
	string login;
	string password;
};
void FillRegist(Regist regist, string Path)
{
	cout << "<<<<<<<<Register>>>>>>" << endl;
	ofstream WriteFile;
	cout << "<<<<<<<<<<Enter>>>>>>>>>>>>" << endl;
	cout << "Login: ";
	cin >> regist.login;
	cout << "Password: ";
	cin >> regist.password;
	WriteFile.open(Path, ofstream::app);
	WriteFile << regist.login<<" "<<regist.password << endl;
	WriteFile.close();
}

void Login(string Path)
{

	ifstream WriteFile;
	WriteFile.open(Path);
	int tes = 0,vyb = 0;
	string str;
	string Log;
	string Pass;
	while (true)
	{
		tes = 0;
		system("cls");
		cout << "<<<<<<<<Login>>>>>>" << endl;
		cout << "Enter " << endl;
		cout << "Login: ";
		cin >> Log;
		cout << "Password: ";
		cin >> Pass;
		while (!WriteFile.eof())
		{
			str = " ";
			WriteFile >> str;
			if (Log == str)
			{
				tes++;
			}
			if (Pass == str)
			{
				tes++;
			}
			
		}
		if (tes < 2)
		{
			cout << "=======" << tes << endl;
			cout << "Eror pass || log " << endl;
			cout << "1.povtor\t0. Exit" << endl;
			cin >> vyb;
			if (vyb == 0)
			{
				break;
			}
		}
		if (tes >= 2)
		{
			cout << "====="<<tes << endl;
			cout << "<<<<<<<<<<<Login>>>>>>>>>>>>" << endl;
			break;
		}

	}
	WriteFile.close();
}


int main()
{
	ifstream ReadFile;
	string Path = "Regist.txt";
	Regist regist;
	int Vybir = 0;
	cout << "Enter\n1. Login\t2. Register" << endl;
	cin >> Vybir;
	if (Vybir == 1)
	{
		Login(Path);
	}
	else if (Vybir == 2)
	{
		FillRegist(regist, Path);
		Login(Path);
	}


	system("pause");
	return 0;
}