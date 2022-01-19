#include "magazin.h"
void magazin::ap6_1()
{
	int n = 0, h;
	string prodnow;
	ifstream filein("can.txt");
	ofstream fileout("temp.txt");
	cout << "Id produsului: ";
	cin >> h;
	cout << "Cantitatea noua: ";
	cin >> prodnow;
	string ap6temp;
	while (filein >> ap6temp)
	{
		n++;
		if (n == h) {
			ap6temp = prodnow;
		}
		ap6temp += "\n";
		fileout << ap6temp;
	}
}
void magazin::ap6_2()
{
	ifstream filein;
	ofstream fileout;
	filein.open("temp.txt");
	fileout.open("can.txt");
	char buffer[1000];
	while (!filein.eof())
	{
		filein.getline(buffer, sizeof(buffer));
		fileout << buffer << "\n";
	}

	filein.close();
	fileout.close();
}