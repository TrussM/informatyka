#include <iostream>

using namespace std;
#define N 20
unsigned short dlugosc;
char napis[N + 1];
int i, n;
int main()
{
	cout << "Wypisz ilosc wyrazow: " << endl;
	cin >> n;
	for (int a = 1; a <= n; a++)
	{
		cout << "Wypisz wyraz: " << endl;
		cin >> napis;
		dlugosc = strlen(napis);
		for (i = dlugosc - 1; i >= 0; i--)
		{
			cout << napis[i];
		}

	}
	system("pause");
	return 0;

}