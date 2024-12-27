#include<stdio.h>
void main()
{
    int a = 5, b = 3, c = 4, d;
    float result;
    int x=4;
    double y=3.456789;
    printf("%lf",x*y);
    result =(float)(a+b)/(c-a);
    printf("\nResult= %f",result);//Explicit type conversion manual type conversion - done by user
    d = result;//implicit type conversion-automatic done by complier
    printf("\nResult = %f", result);
}