#include<stdio.h>

//collatz teoremi
//100e kadar olan sayıların collatz teoremine göre kaç adımda 1e ulaştığını bulan program



int main(void)
{
    int x=13,adet=0,sayi;
    for(sayi=2;sayi<=100;sayi++)
    {
        adet=0;
        x = sayi;
    while(x!=1)
    {
        x = x%2 ? 3*x+1 : x/2;
        adet++; 
    }
    printf("%d -> %d\n",sayi,adet);
    }
    return 0;
}