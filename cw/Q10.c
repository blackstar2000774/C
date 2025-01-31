#include<stdio.h>
int main()
{
    double p, k;
    printf("Enter the weight in pounds: \n");
    scanf("%lf",&p);
    k = (0.45359237) * p;
    printf("%lf pounds is equal to %.4lf kilograms.\n",p,k);
}