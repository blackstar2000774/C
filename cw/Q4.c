#include<stdio.h>
void main()
{
    float c,f;
printf("Enter temperature in °C:",&c);
scanf("%f",&c);
f= (c * 9.0 / 5.0) + 32;
printf("The temperature in °F is:%f",f);
}