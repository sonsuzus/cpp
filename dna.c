#include<stdio.h>   

/* dna da en çok tekrar eden karakteri bulma  kaç kere olduğunu bulma 
örnek giriş ATTCGGGA çıkış 3 */

int main(void)
{
    char arr[1000];
    scanf("%s",arr);
    int i,sayac=1,enbuyuk=0;
    while(arr[i] != '\0')
    {
        
        if(arr[i] == arr[i+1])
        {
            sayac++;
        }
        else
        {
            if(sayac>enbuyuk)
            {
                enbuyuk = sayac;
            }
            sayac=1;
        }
    i++;
    }
    printf("\n%d",enbuyuk);
}