#include "std_lib_facilities.h"

int main()
{
	int i=1;
	int darab=0;
	while(i!=0)
	{
		i<<=1;
		++darab;
	}
	cout<<"A gépünkön a gépi szó ilyen hosszú: "<<darab <<"\n";
}
