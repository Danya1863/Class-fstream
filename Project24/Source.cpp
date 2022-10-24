#include <iostream>
#include "Header.h"
#include "Header1.h"
#include "Header2.h"
using namespace std;

int main()
{
	Contact obj1("Danya", 421);
	Contact obj2("Kovalyov", 5219);
	List<Contact>c_list;
	c_list.Add(obj1);
	c_list.Add(obj2);
	c_list.Save();
	search_by_num(2321);
}