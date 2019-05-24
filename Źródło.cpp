#include <iostream>
#include <string>

using namespace std;
int i;

int main()
{
	cout << "Ten program zlicza znaki spacji w tekscie" << endl;
	cout << "Podaj tekst" << endl;
	string tekst;
	int spacje;
	spacje = 0;
	cin >> tekst;
	getline(cin, tekst);
	for (i = 0; i < tekst.size(); i++)
	{
		if (tekst[i] == ' ')
		spacje++;
	
	}

	cout spacje
		return 0;
}
