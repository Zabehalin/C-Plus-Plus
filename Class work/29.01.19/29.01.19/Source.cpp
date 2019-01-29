/*C++ 
Написати функцію, яка приймає три аргументи: години, хвилини, секунди. 
Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах */

#include <iostream>
using namespace std;
int Time(int G, int H, int S);
int main()
{
	int G = 0, H = 0, S = 0;
	cout << " Enter Hours = ";
	cin >> G;
	cout << " Enter Minutes = ";
	cin >> H;
	cout << " Enter Seconds = ";
	cin >> S;
	int SECONDS = Time(G, H, S);
	cout << " Seconds = " << SECONDS << endl;
	system("pause");
}
int Time(int G, int H, int S)
{
	return (G * 60 * 60) + (H * 60) + S;
}