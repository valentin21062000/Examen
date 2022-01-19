#include "magazin.h"
void magazin::ap4()
{
	ofstream ifs("stoc.txt", std::ios_base::in | std::ios_base::app);
	ofstream mfs("can.txt", std::ios_base::in | std::ios_base::app);
	cout << "Numele produsului: ";
	cin.getline(a, 99);
	cout << "Fabrica: ";
	cin.getline(b, 99);
	cout << "Pretul: ";
	cin.getline(c, 99);
	cout << "Cantitate: ";
	cin.getline(d, 99);
	ifs << a << "--" << b << "--" << c << " Lei" << "\n";
	mfs << d << "\n";
	ifs.close();
	mfs.close();
	cout << "\n\n";
}