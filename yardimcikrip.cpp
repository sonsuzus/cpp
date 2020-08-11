#include<stdio.h>
#include<string.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
	char metin[200];
		scanf("%s",metin);
	printf("%d",metin[0]); 
	return 0;
}
