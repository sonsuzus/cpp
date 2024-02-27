#include <stdio.h>

int main(void)
{
    int su = -5;
    char *durum;
    durum = su>100 ? "gaz" : su<0 ? "kati" : "sivi";
    printf("%s",durum);
    return 0;
}