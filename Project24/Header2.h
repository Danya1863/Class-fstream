#pragma once
#include <iostream>
#include "Header.h"
#include "Header1.h"
using namespace std;

void Load()
{
	fstream file;
	file.open("File.txt");
	const int size = 255;
	char buf[size] = {};
	do
	{
	file.getline(buf, size);
		cout << buf << endl;
	} while (file);
	file.close();
}

void search_by_name(const char* a)
{
	fstream file;
	file.open("File.txt");
	cout << "Vse chto my naIIIly:\n";
	const int size = 255;
	char buf[size] = {};
	do
	{
		file.getline(buf, size);
		const char check[] = "Imya:";
		if (strstr(buf, check))
			if (strstr(buf, a))
			{
				cout << "\n";
				cout << buf << endl;
				file.getline(buf, size);
				cout << buf << endl;
			}
	} while (file);
	file.close();
}

void search_by_num(int a)
{
	fstream file;
	file.open("File.txt");
	cout << "Vse chto my naIIIly:\n";
	const int size = 255;
	char buf[size] = {};
	char buf_check[size] = {};
	char buf_num[size] = {};
	sprintf(buf_num, "%d", a);
	do
	{
		file.getline(buf, size);
		const char check[] = "Imya:";
		const char check2[] = "Nomer:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, buf_num))
			{
				cout << "\n";
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (file);
	file.close();
}
