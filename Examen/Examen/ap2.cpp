#include "magazin.h"
void magazin::ap2()
{
	int v = 1;
	ifstream stoc("stoc.txt");
	ifstream can("can.txt");
	while (getline(stoc, info), getline(can, cant))
	{
		if ((cant == ver) && (!cant.empty()))
		{
			cout << "[ID:" << v << "] " << info << " Can:" << cant << "\n";
			v++;
		}

	}
	cout << "\n";
	v = 1;

}