#include<stdio.h>

/* eleman taşıyarak dizi düzenleme küçükten büyüğe*/

int main()
{
    int eleman;
    scanf("%d",&eleman);
    int dizi[eleman];
    for(int i=0;i<eleman;i++)
    {
        scanf("%d",&dizi[i]);
    }  
    int temp; 
    for(int i=0;i<eleman;i++)
    {
        for(int j=i+1;j<eleman;j++)
        {
            if(dizi[i]>dizi[j])
            {   
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    for(int i=0;i<eleman;i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0;
}