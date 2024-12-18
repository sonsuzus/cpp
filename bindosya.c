#include <stdio.h>

struct ogrenci
{
    char isim[20];
    int no;
    float ort;
};

int main(void)
{
    struct ogrenci ogr;
    FILE *dosya;
    dosya = fopen("tubitak.bin","wb");
    if(dosya == NULL)
    {
        printf("dosya acilamadi");
        return 1;
    }
    else
    {
        
        printf("ogrenci bilgilerini giriniz\n");
        printf("isim:");
        scanf("%s",ogr.isim);
        printf("no:");
        scanf("%d",&ogr.no);
        printf("ort:");
        scanf("%f",&ogr.ort);
        fwrite(&ogr,sizeof(ogr),1,dosya);
        fclose(dosya);
    }
    dosya = fopen("tubitak.bin","rb");
    fread(&ogr,sizeof(ogr),1,dosya);
    printf("ogrenci bilgileri\n");
    printf("isim:%s\n",ogr.isim);
    printf("no:%d\n",ogr.no);
    printf("ort:%f\n",ogr.ort);
}