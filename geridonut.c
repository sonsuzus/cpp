#include <stdio.h>

int fonki(int x, int y)
{
    return (x,7);
}

int main(void)
{
    int a=5,b=10;
    printf("%d %d\n",a,b);
    a = fonki(3,7);
    printf("%d %d\n",a,b);
    return 0;
}
