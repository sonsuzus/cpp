#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define topsayi 9
struct toplar{
	int no;
	int agir;
} top[topsayi];

void yarat(void)
{
	srand(time(NULL));
	int i;
	for(i=0;i<topsayi;i++)
	{
		top[i].no=i+1;
		top[i].agir=1+rand()%1000;
	}
}

void diz(int x,int y, int z)
{
	struct toplar t;
	printf("Dizilen toplar %d - %d - %d \n",top[x].no,top[y].no,top[z].no);
	
	if(top[x].agir<top[y].agir)
	{
		t=top[x];
		top[x]=top[y];
		top[y]=t;		
	}
	if(top[x].agir<top[z].agir)
	{
		t=top[x];
		top[x]=top[z];
		top[z]=t;		
	}
	if(top[y].agir<top[z].agir)
	{
		t=top[y];
		top[y]=top[z];
		top[z]=t;		
	}
	
}

int main()
{
	int i;
	yarat();
	for(i=0;i<topsayi;i++)
	{
		printf("%d : %d \n",top[i].no,top[i].agir);
	}
	diz(0,1,2);
	diz(1,2,3);
	diz(2,3,4);
	diz(3,4,5);
	diz(4,5,6);
	diz(5,6,7);
	diz(6,7,8);
	diz(9,10,11);
	diz(5,6,9);
	diz(9,12,13);
	
	for(i=0;i<topsayi;i++)
	{
		printf("%d:%d:%d - ",i,top[i].no,top[i].agir);
	}
	return 0;
}
