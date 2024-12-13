#include<stdio.h>
void main()
{
    int a=28;
    float x=11.123456;
    printf("%-6d\n",a);
    printf("%d\n",a);
    printf("\t%d\n",a);
    printf("%09d\n",a);
    printf("%#o \n",a);
    printf("%#x \n",a);
    printf("%7.2f\n",x);
}