#include<stdio.h>
void main()
{
    float d ,rs; //d is dollar & rs is rupees
    float r = 138.35; //r is exchange rate
    printf("Enter amount in US dollars($): ");
    scanf("%f",&d);
    rs = d * r;
    printf("%.3f US Dollars($) is Equivalent to %.3f rupees(Rs.)\n",d,rs);
}