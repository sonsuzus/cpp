#include <stdio.h>

#define faktoriyel(n) ((n==0) ? 1:((n-1)))

int main()
{
    int sayi = 5;
    printf("%d",faktoriyel(sayi));
    return 0;
}