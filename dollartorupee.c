#include<stdio.h>
void main()
{
    float d ,rs; //d is dollar & r is rupees
    float r = 135.869; //r is exchange rate
    printf("Enter amount in US dollars($): ");
    scanf("%f",&d);
    rs = d * r;
    printf("%.3f US Dollars($) is Equivalent to %.3f rupees(Rs.)\n",d,rs);
    return 0;
}