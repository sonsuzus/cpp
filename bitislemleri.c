#include<stdio.h>

int main()
{
    int sayi = 25;
    while ( sayi & (sayi - 1))
    {
        sayi = sayi & (sayi - 1);
        printf("%d\n",sayi);
    }
    printf("%d",sayi<<1);
}