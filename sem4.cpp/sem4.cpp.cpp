#include "Sort.h"
#include <iostream>
using namespace std;
int main()
{
	int a[] = {5,33,2,1,4,76,9};

	Sort b(1, 5, 3);
	b.Print();
	b.BubbleSort(true);
	b.Print();

	Sort c(a, 7);
	c.InsertSort(true);
	c.Print();

	Sort d("10,20,60,34,66,54");
	d.Print();

}

