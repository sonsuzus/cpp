#include<stdio.h>

int main(void)
{
    char c;
    int i;
    long l;
    float f;
    double x;
    printf("%d - ",sizeof c);
    printf("%d - ",sizeof i);
    printf("%d - ",sizeof l);
    printf("%d - ",sizeof f);
    printf("%d - ",sizeof x);
    return 0;
}