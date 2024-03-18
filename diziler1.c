#include<stdio.h>
#include<string.h>

int main(void)
{
    char s1[80], s2[80];
    gets(s1);
    gets(s2);

    printf("boyut1: %d , boyut2: %d",strlen(s1),strlen(s2));

    strcat(s1,s2);
    printf("\n %s",s1);

    return 0;
}