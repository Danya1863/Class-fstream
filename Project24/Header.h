#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Contact
{
	string name;
	int num;
public:
	Contact()
	{
		name = "Imya";
		num = 0;
	}
	Contact(const char* n, int nu)
	{
		name = n;
		num = nu;
	}
	void Print()
	{
		cout << "Imya: " << name << endl;
		cout << "Nomer: " << num << endl;
	}
	void Init()
	{
		cout << "Imya: ";
		cin >> name;
		cout << "Nomer: ";
		cin >> num;
	}
	void Save()
	{
		fstream file;
		file.open("File.txt", ios::app);
		file << "Imya: " << name << '\n';
		file << "Nomer: " << num << "\n\n";
		file.close();
	}
};