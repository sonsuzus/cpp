#include<stdio.h>

int sqrnum(int num);
int readnum(void);
int prompt(void);

int main(void)
{
    int t;
    for(prompt(); t=readnum(); prompt())
    {
        sqrnum(t);
    }

    return 0;
}

int prompt(void)
{
    printf("Bir sayi girin: ");
    return 0;
}

int readnum(void)
{
    int t;
    scanf("%d",&t);
    return t;
}

int sqrnum(int num)
{
    printf("%d\n",num*num);
    return num*num;
}