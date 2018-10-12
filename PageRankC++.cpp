#include "std_lib_facilities.h"

void
kiir (vector<double>tomb)
{
for (int i = 0; i<tomb.size(); ++i) cout <<"PageRank["<<i<<"]: " << tomb[i] << '\n';
}

double tavolsag(vector<double> PR, vector<double> PRv,int n)
{
	double osszeg=0;
	int i;
	for (i =0; i<n ; ++i)
	osszeg += (PRv[i] -PR[i]) * (PRv[i]-PR[i]);
	return sqrt (osszeg);
}

int main(void)
{
	vector<vector<double>> L = {
	{0.0, 0.0, 1.0 / 3.0, 0.0},
	{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
	{0.0, 1.0 / 2.0, 0.0, 0.0},
	{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

vector<double> PR = {0.0, 0.0, 0.0, 0.0};
vector<double> PRv = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

int i,j;
i=0;j=0;

for (;;)
	{
	for(i=0;i<4;i++)
	PR[i] = PRv[i];
	for (i=0;i<4;i++)
	{
	double temp=0;
	for (j=0;j<4;j++)
	temp+=L[i][j]*PR[j];
	PRv[i]=temp;
	}	
	
	if ( tavolsag(PR,PRv, 4) < 0.0000000001)
	break;

	}
	kiir (PR);

	return 0;

}
