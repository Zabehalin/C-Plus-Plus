/*Написати програму  в якій дано  динамічний одновимірний масив даних  розмірністю 20 елементів заповненого випадковими числами в діапазоні [-12..56]: 
Після кожного відємного елемента вставити його модуль 
Видалити всі парні елементи масиву 
*/

#include <iostream>
#include <ctime>
using namespace std;
void ZAP(int *parr, int ROW);
void Vyvid(int *parr, int ROW);
//void Modul(int *&parr, int ROW);
void DELETE(int *parr, int ROW);


int main()
{
	srand(unsigned(time(NULL)));
	int ROW = 20;
	int *parr = new int[ROW];
	ZAP(parr, ROW);
	Vyvid(parr, ROW);
	cout << "Necst clic (Enter)" << endl << endl << endl << endl ;
	system("pause");
	system("cls");
	//Modul(parr, ROW);
	//Vyvid(parr, ROW);
	DELETE(parr, ROW);
	Vyvid(parr, ROW);

	delete[] parr;
	system("pause");
	return 0;
}
void ZAP(int *parr, int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		parr[i] = rand() % 68 + -12;
	}
}
void Vyvid(int *parr, int ROW)
{
	for (int i = 0; i < ROW; i++)
	{
		cout << "arr [" << i << "] = " << parr[i] << "\t Sylca : " << &parr[i] << endl;
	}
}
//void Modul(int *&parr, int ROW)
//{
//	for (int i = 0; i < ROW; i++)
//	{
//		int Z = 0,ZA = 0;
//		if (parr[i] < 0)
//		{
//			Z = parr[i];
//			ZA = +Z ;
//			parr[i + 1] = ZA;
//		}
//	}
//}

void DELETE(int *parr, int ROW)
{
	cout << "Delete parni" << endl;
	for (int i = 0; i < ROW; i++)
	{
		if (parr[i] % 2 == 0)
		{
			parr[i] = NULL;
		}
	}
}