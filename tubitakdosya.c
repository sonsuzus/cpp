#include <stdio.h>

int main(void)
{
    FILE *dosya;
    dosya = fopen("tubitak.txt","r");
    if(dosya == NULL)
    {
        printf("dosya acilamadi");
        return 1;
    }
    else
    {        
        int sayi;
        fscanf(dosya,"%d",&sayi);
        printf("%d",sayi);
    }

    fclose(dosya);
    return 0;
}