#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,p;
    printf("Enter value of a & b: \t");
    scanf("%f %f",&a,&b);
    p=pow (a,b);
    printf("\nResult= %f",p);
}