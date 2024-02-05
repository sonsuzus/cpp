#include <stdio.h>

int xor(int a, int b);

int main(void)
{
    printf("%d ",xor(1,0));
    printf("%d ",xor(1,1));
    printf("%d ",xor(0,0));
    printf("%d ",xor(0,1));

    return 0;
}

int xor(int a, int b)
{
    return (a || b) && !(a && b);
}