#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x=6,y=10,son;
    char binaryStrX[8],binaryStrY[8],sonuc[8];
    son = x ^ y; //burada bit işlemi yapabilirsin
    itoa(x,binaryStrX,2);
    itoa(y,binaryStrY,2);
    itoa(son,sonuc,2);
    printf("x: %d %s -- y: %d %s bitxor: %d %s",x,binaryStrX,y,binaryStrY,son,sonuc);
    

    return 0;

}