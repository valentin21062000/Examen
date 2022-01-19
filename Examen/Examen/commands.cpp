#include "magazin.h"
void magazin::commands(int n)
{
	cout << "\n";
	while (n > 6)
	{
		cout << "\n\n" << "A fost introdusa comanda gresita. Introduceti una din comenzi de mai sus: ";
		cin >> n;
		g = g + 1;
		if (g > 2)
		{
			cout << "Ati gresit de trei ori. In scop de securitate se va bloca aplicatia. Va rugam reintroduceti Login si parola:" << "\n\n";
			security();
			g = 0;
			text();
		}
	}
	if (n == 1)
	{
		ap1();
	}
	if (n == 2)
	{
		ap2();
	}
	if (n == 3)
	{
		id_prod();
	}
	if (n == 5)
	{
		ap5();
	}
	if (n == 6)
	{
		ap1_1();
		ap6_1();
		ap6_2();
		cout << "\n\n";
	}
	if (n == 4)
	{
		ap4();
	}
}