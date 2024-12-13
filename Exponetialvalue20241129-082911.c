#include<stdio.h>
  int main()
                   {
                     int num = 0xFFF;
                     printf("Decimal=%d\n",num);
                     printf("Octal=%o\n",num);
                     printf("Hexa= 0x%x\n",num);
                     float exp=-3.2e-5;// -3.2e*10-5
                     printf("Exponential value = %f\n", exp);
                     float fval=0.0000345;
                     printf("Fvalue=%.2e\n",fval);
                     return 0;
                      }