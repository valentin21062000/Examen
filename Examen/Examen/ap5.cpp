#include "magazin.h"
void magazin::ap5()
{
	ap1_1();
	ifstream in;
	in.open("stoc.txt");
	cout << "Id produsului care doriti sa-l stergeti :";
	cin >> num_lin;
	string line;
	string line_text;
	while (getline(in, line))
	{
		now_line++;

		if (!(now_line == num_lin))
		{
			line_text.insert(line_text.size(), line);
			line_text.insert(line_text.size(), "\r\n");
		}
	}
	in.close();
	ofstream out;
	out.open("stoc.txt", std::ios::trunc | std::ios::binary);
	out.write(line_text.c_str(), line_text.size());
	out.clear();
	{
		ifstream in;
		in.open("can.txt");
		now_line = 0;
		string line;
		string line_text;
		while (getline(in, line))
		{
			now_line++;

			if (!(now_line == num_lin))
			{
				line_text.insert(line_text.size(), line);
				line_text.insert(line_text.size(), "\r\n");
			}
		}
		in.close();
		ofstream out;
		out.open("can.txt", std::ios::trunc | std::ios::binary);
		out.write(line_text.c_str(), line_text.size());
		out.clear();
	}
}