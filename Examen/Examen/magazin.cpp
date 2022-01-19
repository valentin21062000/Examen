#include "magazin.h"
void magazin::id_prod()
{
	int l = 0;
	ifstream can("can.txt");
	while (getline(can, cant))
	{
		l++;
	}
	cout << "Numarul de produse in baza de date: " << l << "\n\n";
}
void magazin::text()
{
	cout << "[1]- Produse in stoc" << "\n";
	cout << "[2]- Produse care nu sunt in stoc" << "\n";
	cout << "[3]- Verificarea numarului de produse(Cat cele din stoc si nu sunt in stoc)" << "\n";
	cout << "[4]- Adaugarea produsului nou" << "\n";
	cout << "[5]- Stergerea produsului" << "\n";
	cout << "[6]- Modificare cantitati unui produs" << "\n";
	cout << "[0]- Inchideria programului" << "\n\n";
	cout << "Comanda=";

}

void magazin::security()
{
	cout << "Introduceti Login[Login este 'mar']: ";
	cin >> login;
	cout << "\n";
	if (login == pass_l)
	{
		cout << "Login:" << login << "\n";
	}
	else
	{
		system("color 04");
		cout << "Gresit";
		exit(0);
	}
	cout << "Introduceti Parola[Parola este'1234']:  ";
	cin >> pasw;
	cout << "\n";
	if (pasw == pass_p)
	{
		cout << "Bine ati venit D." << login << "\n\n";
	}
	else
	{
		system("color 04");
		cout << "Gresit";
		exit(0);
	}

}