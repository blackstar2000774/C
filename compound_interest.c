#include<stdio.h>
#include<math.h>
void main()
{
    float p, t, r;
    float ci;
    printf("Enter the value of principle:\n");
    scanf("%f",&p);
printf("Enter the value of time:\n");
    scanf("%f",&t);
    printf("Enter the value of rate:\n");
    scanf("%f",&r);
    ci= p * (pow((1+r/100),t)-1);
    printf("The Compound Interest= %f\n",ci);
}