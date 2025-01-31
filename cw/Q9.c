#include<stdio.h>
void main()
{
    float d,s,t; //d is price per dozen, s is price per mango & t is total price
    int n; //n is number of mangoes
    printf("Enter the price of a dozen mangoes: \n");
    scanf("%f",&d);
    s= d/12;
    printf("Enter the number of mangoes: \n");
    scanf("%d",&n);
    t = s*n;
    printf("The price of %d mangoes is: %.2f\n",n,t);
}