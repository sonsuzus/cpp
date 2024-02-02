#include<stdio.h>
/* dize içinde harf varsa 1 yoksa 0 döndürüyor
işaretçi mantığını iyi anlamak gerekiyor.
*/
int isin(char *s,char c)
{
    while(*s)
    {
        if(*s==c) return 1;
        else s++;
    }
    return 0;
}

int main(void)
{
    printf("%d",isin("ufuk",'a'));
}