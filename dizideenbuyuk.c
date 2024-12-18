#include<stdio.h>
/* bir dizi içindeki en büyük sayıyı bulan program */
int main(void)
{
    int dizi[10] = {10,20,30,40,50,60,70,80,90,100};
    int i,enb=0;
    for(i=0;i<10;i++)
    {
        if(dizi[i]>enb)
        {
            enb = dizi[i];
        } 
    }
    printf("en buyuk sayi: %d",enb);
    return 0;
}