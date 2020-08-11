#include <iostream>
using namespace std;

int strlen(char *yazi)
{
	int i;
	for(i=0;i<90;i++)
	{
		if(yazi[i]==0) return i;
	}
}

int main()
{
	char katar[90];
	cout<<"Bir katar giriniz: ";
	cin>>katar;
	int uzunluk = strlen(katar);
	cout<<"girdiginiz katar: "<<katar<<" - "<<uzunluk+1;
	
	return 0;
}
