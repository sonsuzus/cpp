#include<stdio.h>

int main()
{
    int karpuz;
    scanf("%d",&karpuz);
    if(karpuz%2==0 && karpuz>2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}