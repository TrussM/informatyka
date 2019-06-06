#include <iostream>
#include <string>

using namespace std;
int i;
int main()
{
	string tekst;
	int spacje = 0;
	int a = 0;
	int z = 0;
	int przecinek = 0;
	spacje = 0;
	cout << "Podaj przykladowe zdanie: " << endl;
	getline(cin, tekst);
	for (i = 0; i < tekst.size(); i++)
	{
		switch (tekst[i])
		{
		case' ':
			spacje++;
				break;
		case'a':
			a++;
				break;
		case'z':
			z++;
			break;
		case',':
			przecinek++;
			break;
		}
	}
	cout << "W twoim tekscie mamy " << spacje << " spacji, " << a << " liter A, " << z << " liter Z " << przecinek << " przecinkow" << endl;
	system("pause");
	return 0;
}