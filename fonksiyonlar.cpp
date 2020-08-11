#include <iostream>
using namespace std;
int usal(int a);
double usal(double d);
int usal(int a, int i);

int main()
{
		
	cout << "int icin: " << usal(2,10) << "\n";
	cout << "double icin: " << usal(5.4) ;
	
	
	return 0;
}

int usal(int a)
{
	return a*a;
}

double usal(double d)
{
	return d*d;
}

int usal(int a, int i)
{
	int sonuc=1, j;
	for(j=1;j<=i;j++)
	{
		sonuc *= a;
	}
	return sonuc;
	
}
