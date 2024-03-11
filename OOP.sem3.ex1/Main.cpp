#include "Math.h"
#include <iostream>
using namespace std;
int main()
{
	Math a;
	std::cout << a.Add(3, 5)<<endl;
	std::cout << a.Add(3, 5,1) << endl;
	std::cout << a.Add(1.2, 3.7) << endl;
	std::cout << a.Add(1.2, 3.7,2.5) << endl;
	std::cout << a.Mul(5, 4) << endl;
	std::cout << a.Mul(5, 4, 3) << endl;
	std::cout << a.Mul(1.2, 2.5) << endl;
	std::cout << a.Mul(1.2, 2.5,4.1) << endl;
	std::cout << a.Add(3, 1,2,3) << endl;
	std::cout << a.Add('A', 'B');

}