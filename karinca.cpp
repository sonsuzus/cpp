#include<stdio.h>

int main()
        {
            int i, araba = 3;
            double karinca = 0,toplam=0;
            for(i=2;i<=100;i++)
            {
                karinca += 1.0;
                araba += 3;
                karinca = (double) i / double (i - 1) * karinca;
            //    if (karinca > araba)
                {
                    printf("Adým %d , Araba: %d  - Karinca %lf \n",i-1,araba,karinca);
            //        break;
                }
            }
         /*   for(i=1;i<20;i++) {
            	toplam=toplam+1/double(i);
            	printf("\n 1/%d : %lf",i,toplam);
			}*/
            return 0;
        }
