#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

int top[15];
int dizi[15][15];
void TabloTemizle()
{
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(i==j)
				dizi[i][j]=-8;
			else
				dizi[i][j]=0;
		}
	}
}
void TabloCiz()
{
	printf("   ");
	
	for(int i=0;i<15;i++)
		printf("%5d.",i);
	printf("\n\n");
	for(int i=0;i<15;i++)
	{
		printf("%d. ",i);
		for(int j=0;j<15;j++)
		{
			printf("%5d ",dizi[i][j]);
		}
		printf("\n\n");
	}
}
void Random()
{
	for(int i=0;i<15;i++)
	{
		top[i]=rand()%1000;
		for(int j=0;j<i;j++)
		{
			if(top[i]==top[j])
			{
				top[i]=rand()%1000;
				j=0;
			}
		}
	}
}
void SayiYaz()
{
	for(int i=0;i<15;i++)
		printf("\n%d",top[i]);
}
void SimetriBul()
{
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(dizi[i][j]==2)
				dizi[j][i]=1;
			if(dizi[i][j]==1)
				dizi[j][i]=2;
			
				
			
			
		}
	}
}
void Mantik()
{
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(dizi[i][j]==2)
			{
				for(int k=0;k<15;k++)
				{
					if(dizi[k][j]==1)
						dizi[i][k]=2;
				}
			}
			if(dizi[i][j]==1)
			{
				for(int k=0;k<15;k++)
				{
					if(dizi[k][j]==2)
						dizi[i][k]=1;
				}
			}
		}
	}
}
bool DoluMu()
{
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(dizi[i][j]==0)
				return true;
		}
	}
	return false;
}
int main()
{
	srand(time(NULL));
	int s1,s2,s3,deneme=0;
	
	TabloTemizle();
	Random();
	do
	{
		SimetriBul();
		Mantik();
		SimetriBul();
		TabloCiz();
		printf("\n\nDenemeler: %d\n\n",deneme);
		printf("3 Adet Top Giriniz: ");
		if(DoluMu==false)
			break;
		scanf("%d %d %d",&s1,&s2,&s3);
		deneme++;
	//	top[s1-97]>top[s2-97]?dizi[s1-97][s2-97]=2:dizi[s2-97][s1-97]=2;
	//	top[s1-97]>top[s3-97]?dizi[s1-97][s3-97]=2:dizi[s3-97][s1-97]=2;
	//	top[s2-97]>top[s3-97]?dizi[s2-97][s3-97]=2:dizi[s3-97][s2-97]=2;
		top[s1]>top[s2]?dizi[s1][s2]=2:dizi[s2][s1]=2;
		top[s1]>top[s3]?dizi[s1][s3]=2:dizi[s3][s1]=2;
		top[s2]>top[s3]?dizi[s2][s3]=2:dizi[s3][s2]=2;
		if(top[s1]>top[s2] && top[s2]>top[s3]) printf("%d > %d > %d \n",s1,s2,s3);
		if(top[s2]>top[s1] && top[s1]>top[s3]) printf("%d > %d > %d \n",s2,s1,s3);
		if(top[s3]>top[s2] && top[s1]>top[s3]) printf("%d > %d > %d \n",s1,s3,s2);
		if(top[s1]>top[s2] && top[s3]>top[s1]) printf("%d > %d > %d \n",s3,s1,s2);
		if(top[s2]>top[s3] && top[s3]>top[s1]) printf("%d > %d > %d \n",s2,s3,s1);
		if(top[s3]>top[s2] && top[s2]>top[s1]) printf("%d > %d > %d \n",s3,s2,s1);
	}while(DoluMu());
	
		

	printf("\n\nToplam Denemeler: %d\n\n",deneme);
	
	system("pause");
	
	
	return 0;
}
