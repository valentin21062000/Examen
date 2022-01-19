#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class magazin
{private:
	string pass_l = "mar", pass_p = "1234";
public:
	int g = 0, num_lin, now_line = 0;
	char a[100], b[100], c[100], d[100];
public:
	string ver = "0";
	string login, pasw, test, info, cant;
	
public:
	void file()
	{
		ifstream stoc("stoc.txt");
		ifstream can("can.txt");
	}
	void id_prod();
	void ap1();
	void ap1_1();
	void ap2();
	void ap4();
	void ap5();
	void ap6_1();
	void ap6_2();
	void text();
	void security();
	void commands(int n);
};

