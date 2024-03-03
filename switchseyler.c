#include<stdio.h>

int main(void)
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    switch (sayi)
    {
    case 1:
        /* code */
        printf("ilk bolumde 1");
        
    case 2:
        printf("ilk bolumde 2");
        
    case 3:
        printf("ilk bolumde 3 ve son");
        break;
    case 4:
        printf("4 girildi");
        break;
    
    default:
        printf("değişik işler");
        break;
    }
    return 0;
}