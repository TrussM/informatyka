#include <iostream>
#include <string>

using namespace std;
int i;

int main()
{
	string tekst;
	int spacje;
	spacje = 0;
	cout << "Podaj przykladowe zdanie: " << endl;
	getline(cin, tekst);
	for (i = 0; i < tekst.size(); i++)
	{
		if (tekst[i] == ' ')
			spacje++;
	}
	cout << "W twoim tekscie mamy " << spacje << " spacji ";
	system("pause");
	return 0;
}