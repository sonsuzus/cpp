#include <iostream>
using namespace std;



int main()
{
	int i;
	double k=0, l=1000000;
	for(i=1;i<10000000;i++)
	{
		k++;
		l++;
		k=k+(l/(l-1));
		if(k>l)
		{ cout << i;
		break;
	}
	}
	
	 return 0;

}
