#include<bits/stdc++.h>

using namespace std;

int swapla(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
    return 1;
}

int main()
{
	int a=10,b=20;
	swapla(&a,&b);
	cout<<a<<" "<<b;    
    return 0;
}