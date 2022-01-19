#include "magazin.h"
void magazin::ap1()
{
	int v = 1;
	ifstream stoc("stoc.txt");
	ifstream can("can.txt");
	while (getline(stoc, info), getline(can, cant))
	{
		if ((cant != ver) && (!cant.empty()))
		{
			cout << "[ID:" << v << "] " << info << " Can:" << cant << "\n";
			v++;

		}

	}
	cout << "\n";
	v = 1;

}

void magazin::ap1_1()
{
	int v = 1;
	ifstream stoc("stoc.txt");
	ifstream can("can.txt");
	while (getline(stoc, info), getline(can, cant))
	{
		if ((!cant.empty()))
		{
			cout << "[ID:" << v << "] " << info << " Can:" << cant << "\n";
			v++;

		}

	}
	cout << "\n";
	v = 1;

}