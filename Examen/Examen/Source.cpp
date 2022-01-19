#include <iostream>
#include <fstream>
#include <string>
#include "magazin.h"
magazin mag;
int main()
{
	cout << "Bine ati venit la Magazinul Pi" << "\n\n";
	int n = 1, k;
	mag.security();
	while (n > 0)
	{
		mag.text();
		cin >> n;
		mag.commands(n);
	}
	cout << "O zi buna!!!! :) D." << mag.login << "\n\n";
	return 0;
}