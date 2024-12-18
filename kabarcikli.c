#include<stdio.h>

int main(void)
{
    int i,adim,n,tmp;
    scanf("%d",&n);
    int dizi[n];
    for(i=0;i<n;i++) scanf("%d",&dizi[i]);

    adim = 1;
    while(adim)
    {
        adim = 0;
        for(i=0;i<n-1;i++)
        {
            if(dizi[i]>dizi[i+1])
            {
                tmp = dizi[i];
                dizi[i] = dizi[i+1];
                dizi[i+1] = tmp;
                adim = 1;
                printf("%d , ",dizi[i]);
            }
        }
        printf("\n");
    }
    for(i=0;i<n;i++) printf("%d ",dizi[i]);
}