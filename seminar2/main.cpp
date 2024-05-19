#include <iostream>
#include "Numberlist.h"
using namespace std;
int main()
{
	NumberList list;
	list.Init();
	list.Add(3);
	list.Add(9);
	list.Add(2);
	list.Sort();
	list.Print();
	return 0;
}