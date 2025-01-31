#include <stdio.h>
void main()
{
float p,t,r;
float SI;
printf("Enter the value of p,t & r:");
scanf("%f %f %f",&p,&t,&r);
SI=p*t*r/100;
printf("Simple Interest=%.2f\n", SI);
}