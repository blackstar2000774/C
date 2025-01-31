#include<stdio.h>
void main()
{
    float b,r,t,si; //b=balence, r=rate, t=time in years & si=simple interest
    printf("Enter the balance: Rs.");
    scanf("%f", &b);
    printf("Enter the time (in years): ");
    scanf("%f", &t);
    if (b > 100000) {
        r = 0.07;
    } else if (b >= 50000) {
        r = 0.05;
    } else {
        r = 0.03;
    }
    si = b * r * t;
    printf("Interest Rate: %.2f%%\n", r * 100);
    printf("Simple Interest: Rs.%.2f\n", si);
}