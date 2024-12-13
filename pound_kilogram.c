#include<stdio.h>
void main()
{
    float p, kg;
    printf("Enter the weight in pounds: ");
    scanf("%f",p);
    kg = p* 0.453592;
    printf("%.2f pounds is equal to %.2f kilograms.\n",p,kg);
    return 0;
}