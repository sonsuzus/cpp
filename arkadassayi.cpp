#include<stdio.h>

int carptopla(int sayi)
{
	int i, toplam=0;
	for(i=1;i<sayi/2+2;i++)
	{
		if(sayi%i==0) toplam+=i;
	}
	return toplam;
}

int main()
{
	int i,cp;
	for(i=1;i<100000;i++)
	{
		cp=carptopla(i);
		if(cp>i)
		{		
		
			
			if(i==carptopla(cp) && i!=cp)
			{
				printf("%d - %d \n",i,cp);
			}
			
			
		}
	}
	return 0;
}
