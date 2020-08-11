#include <stdio.h>

int main()
{
    int a,b,c;
    don:
    printf("Ucgenin 1. kenari:"); scanf("%d",&a);
    printf("Ucgenin 2. kenari:"); scanf("%d",&b);
    printf("Ucgenin 3. kenari:"); scanf("%d",&c);
    
    if(a+b>c && a+c>b && b+c>a)
    {
     printf("\n\nBu Bir Ucgendir.\n");
     if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
         printf("Ayni zamanda bu bir Dik Ucgendir.\n\n");
      
     if(a==b && a==c)   printf("Ayni zamanda bu bir Eskenar Ucgendir\n\n");
     if((a==b && a!=c) || (a==c && a!=b) || (c==b && c!=a))   printf("Ayni zamanda bu bir Ikizkenar Ucgendir\n\n");
     if(a!=b && a!=c && b!=c)        printf("Ayni zamanda bu bir Cesitkenar Ucgendir\n\n");
     goto don;
     
    }
    else
    {
     printf("\n\nBu Kenar Uzunluklarina Sahip Bir Ucgen Olamaz!\n\n");
     goto don;
    }
    return 0;
}
