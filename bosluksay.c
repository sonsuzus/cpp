#include<stdio.h>

int main(void)
{
    char s[80], *str;
    int space;

    printf("Bir string girin: ");
    gets(s); //string girişleri için uygun.
    str = s; //tanımlı bir şeye atamak gerekiyor sanırım.

    for(space=0; *str; str++)
    {
        if(*str != ' ') continue;
        space++;
    }
    printf("%d bosluk iceriyor",space);

    return 0;
}