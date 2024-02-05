#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    char x=10,t;
    char Bx[8],Tx[8];
    itoa(x,Bx,2);
    printf("%d %s\n",x,Bx);
    t = ~x;
    
    
    itoa(t,Tx,2);
    printf(" %d %s",t,Tx);
    
    return 0;
}