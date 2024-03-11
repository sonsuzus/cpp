#include<stdio.h>

int main(void)
{
    int i=1;
    dongu:
    printf("%d, ",i);
    i++;
    if(i<31) goto dongu;
    return 0;
}