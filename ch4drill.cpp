#include "std_lib_facilities.h"

int main()
{	cout<<"--Adjon meg egy értéket mértékegységgel (m,cm,in,ft): ";
	vector<double> v;
	double value;
	string unit;
	double min=0;
	double max=0;
	while(cin>>value,cin>>unit)
	{
		if(unit!="y" && unit!="yard" && unit!="meter" && unit!="km" && unit!="gallon")
		{
		if (unit=="in") 
		value=value*2.54/100;
		if (unit=="ft")
		value=value*12*2.54/100;
		if (unit=="cm")
		value=value/100;
		if (unit=="m");
		v.push_back(value);
		if(v.size()==1) max=value; min=value; 
		if (value<min)
		min=value;
		cout<<"A legkisebb érték eddig: "<<min <<" m\n";
		if (value>max)
		max=value;
		cout<<"A legnagyobb érték eddig: "<<max <<" m\n";
		double sum=0;
		int i; 
		for (i=0;i<v.size();i++)
			sum += v[i];
		cout<<"Az eddigi értékek összege: "<<sum <<" m.\n";
		cout<<"Az eddig megadott értékek száma: "<<v.size() <<"db\n";
		sort(v);
		for (double unit : v) 
			cout << unit << " m, ";
		cout<<'\n';	
		}
		else cout<<"Ilyen mértékegységgel még nem tudok számolni\n!";
		cout<<"--Adjon meg egy értéket mértékegységgel (m,cm,in,ft): ";
	}
}
