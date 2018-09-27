#include "std_lib_facilities.h"

int main()
{	
	cout<<"-Kérem adja meg a keresztnevét:";
	string first_name;
	cin>>first_name;
	cout<<"Hello,"<<first_name<<"!\n"; 
	cout<<"-Adja meg a nevét annak az embernek, akinek a levelet szeretné írni:";
	cin>>first_name;
	cout<<"Kedves "<<first_name<<",\n";
	cout<<"Hogy vagy? Rég hallottam már felőled.\n";
	cout<<"-Kérem adja meg egy másik barátja nevét:";
	string friend_name;
	cin>>friend_name;
	cout<<"Láttad "<<friend_name<<"t mostanában?\n";
	char friend_sex=0;
	cout<<"-Kérem adja meg a barátjának a nemét (f/n):";
	cin>>friend_sex;
	if(friend_sex=='f')
		{
		cout<<"Ha látod "<<friend_name<<"t,mondd meg neki(férfi),hogy hívjon fel!\n";
		}
	if(friend_sex=='n')
		{
		cout<<"Ha látod "<<friend_name<<"t,mondd meg neki(nő),hogy hívjon fel!\n";
		}
	cout<<"-Kérem adja meg a címzett életkorát:";
	int age;
	cin>>age;
	if (0<age && age<=110)
		{
		cout<<"Hallom, nem rég volt a szülinapod és "<<age<<" éves vagy.\n";
		}
	if (age<=0 || age>110)
		{
		simple_error("HaHaHa.. Vicces..\n");
		}
	if(age<12)
		{
		cout<<"Következő évben "<<++age <<" leszel!\n";
		}
	if(age==17)
		{
		cout<<"Következő évben szavazhatsz!\n";
		}
	if(age>70)
		{
		cout<<"Remélem élvezi a nyugdíjas éveit!\n";
		}
	cout<<"Üdvözlettel,\n\n\nGyőrfi Dániel\n";

}
