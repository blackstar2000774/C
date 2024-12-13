#include <stdio.h>
void main()
{
float p,t,r;
float SI;
printf("Enter the value of p,t & r:");// Display or print 
scanf("%f %f %f",&p,&t,&r);//READ Input 
SI=p*t*r/100;
printf("Simple Interest=%.2f\n", SI);
printf("Task Complete\n");
}