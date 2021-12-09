#include <stdio.h>

int main(void)
{
	float pay,pasta = 100.0,enbuyukpay = 0,kisi,enkisi;
	for(kisi = 1;kisi <=100 ; kisi++)
	{
		pay=pasta*kisi/100;
		pasta -= pay;
		if(pay>enbuyukpay)
		{
			enbuyukpay = pay;
			enkisi = kisi;
		}
	}
	printf("%f pay ile %.0f. kisi",enbuyukpay,enkisi);
}
