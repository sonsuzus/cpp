#include<stdio.h>
#include<math.h>

int main()
{
	int a[15],i,j,farkli;
		for(a[0]=1;a[0]<=15;a[0]++)
		for(a[1]=1;a[1]<=15;a[1]++)
		{ if (a[0]==a[1]) continue;		
			for(a[2]=1;a[2]<=15;a[2]++)
			{ if (a[2]==a[1] || a[2]==a[1]) continue;	
				for(a[3]=1;a[3]<=15;a[3]++)
				{ if (a[3]==a[2] || a[3]==a[1] || a[3]==a[0]) continue;	
					for(a[4]=1;a[4]<=15;a[4]++)
					{ if (a[3]==a[4] || a[4]==a[1] || a[4]==a[0] || a[4]==a[2]) continue;
					
					a[5]=fabs(a[0]-a[1]);
					a[6]=fabs(a[2]-a[1]);
					a[7]=fabs(a[3]-a[2]);
					a[8]=fabs(a[4]-a[3]);
					a[9]=fabs(a[6]-a[5]);
					a[10]=fabs(a[7]-a[6]);
					a[11]=fabs(a[8]-a[7]);
					a[12]=fabs(a[10]-a[9]);
					a[13]=fabs(a[11]-a[10]);
					a[14]=fabs(a[13]-a[12]);
					farkli = 1;
					for(i=0;i<15;i++)
					{
						for(j=i+1;j<15;j++)
						{
							if(a[i]==a[j]) farkli=0;
						}
					}
					if(farkli==1)
					{
						printf("%9d\n",a[14]);
						printf("%6d %6d\n",a[12],a[13]);
						printf("%4d %4d %4d\n",a[9],a[10],a[11]);
						printf("%2d %2d %2d %2d\n",a[5],a[6],a[7], a[8]);
						printf("%d %d %d %d %d\n",a[0],a[1],a[2], a[3], a[4]);
						return 1;
					}
				}
			}
		}
	}
}
