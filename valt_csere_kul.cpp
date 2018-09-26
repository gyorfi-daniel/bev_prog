#include "std_lib_facilities.h"

int main()
{	int a=7;
	int b=1;
	cout << "A kezdő érték: a=" << a << ",b=" << b <<'\n';
	a=a+b;
	b=a-b;
	a=a-b;
	cout << "A csere utáni érték: a=" << a << ",b=" << b <<'\n';
}

