#include<stdio.h>
#include<string.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "Turkish");
	char metin[200],kriptola[200];
	int i,j,kontrol=-1;
	for(i=0;i<200;i++) metin[i]=' ';
	for(i=0;i<200;i++) kriptola[i]=' ';
	printf("Metniz giriniz:\n");
/*	scanf("%s",metin);
	printf("%d",metin[0]); */
	gets(metin);
	for(i=0;i<strlen(metin);i++)
	{
		if(i%2==1)
		{
		
		switch(metin[i])
		{
			case 'a':metin[i]='c'; break;
			case 'b':metin[i]='ç'; break;
			case 'c':metin[i]='d'; break;
			case -121:metin[i]='e'; break; //ç
			case 'd':metin[i]='f'; break;
			case 'e':metin[i]='g'; break;
			case 'f':metin[i]='ð'; break;
			case 'g':metin[i]='h'; break;
			case -89:metin[i]='ý'; break; // ð
			case 'h':metin[i]='i'; break;
			case -115:metin[i]='j'; break; //ý
			case 'i':metin[i]='k'; break;
			case 'j':metin[i]='l'; break;
			case 'k':metin[i]='m'; break;
			case 'l':metin[i]='n'; break;
			case 'm':metin[i]='o'; break;
			case 'n':metin[i]='ö'; break;
			case 'o':metin[i]='p'; break;
			case -108:metin[i]='r'; break; //ö
			case 'p':metin[i]='s'; break;
			case 'r':metin[i]='þ'; break;
			case 's':metin[i]='t'; break;
			case -97:metin[i]='u'; break; //þ
			case 't':metin[i]='ü'; break;			
			case 'u':metin[i]='v'; break;
			case -127:metin[i]='y'; break; //ü
			case 'v':metin[i]='z'; break;
			case 'y':metin[i]='a'; break;
			case 'z':metin[i]='b'; break;			
			case ' ':metin[i]=' ';break;
			case '.':metin[i]='.';break;
			case ',':metin[i]=',';break;
			default: ;
			
		}
	}
	else
	{
	
	switch(metin[i])
		{
			case 'a':metin[i]='a'; break;
			case 'b':metin[i]='b'; break;
			case 'c':metin[i]='c'; break;
			case -121:metin[i]='ç'; break; //ç
			case 'd':metin[i]='d'; break;
			case 'e':metin[i]='e'; break;
			case 'f':metin[i]='f'; break;
			case 'g':metin[i]='g'; break;
			case -89:metin[i]='ð'; break; // ð
			case 'h':metin[i]='h'; break;
			case -115:metin[i]='ý'; break; //ý
			case 'i':metin[i]='i'; break;
			case 'j':metin[i]='j'; break;
			case 'k':metin[i]='k'; break;
			case 'l':metin[i]='l'; break;
			case 'm':metin[i]='m'; break;
			case 'n':metin[i]='n'; break;
			case 'o':metin[i]='o'; break;
			case -108:metin[i]='ö'; break; //ö
			case 'p':metin[i]='p'; break;
			case 'r':metin[i]='r'; break;
			case 's':metin[i]='s'; break;
			case -97:metin[i]='þ'; break; //þ
			case 't':metin[i]='t'; break;			
			case 'u':metin[i]='u'; break;
			case -127:metin[i]='ü'; break; //ü
			case 'v':metin[i]='v'; break;
			case 'y':metin[i]='y'; break;
			case 'z':metin[i]='z'; break;			
			case ' ':metin[i]=' ';break;
			case '.':metin[i]='.';break;
			case ',':metin[i]=',';break;
			default: ;
			
		}
	}
	} 
	puts(metin);
	
	return 0;
}
