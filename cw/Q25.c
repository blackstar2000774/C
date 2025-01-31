#include<stdio.h>
#include<math.h>
void main()
{
    float p , tA, i;// p=principal, tA=totalAmount, i=interest
    int t; //t=time in years
    printf("Enter the amount deposited (Principal): Rs. ");
    scanf("%f", &p);
    printf("Enter the number of years the money has been with the bank: ");
    scanf("%d", &t);
    if (t >= 5) {
        i = 0.10; // 10% for 5 years or more
    } else if (p < 1000 && t >= 2) {
        i = 0.05; // 5% for deposits less than Rs. 1,000 for 2 or more years
    } else if (p >= 1000 && p < 5000 && t >= 2) {
        i = 0.07; // 7% for deposits between Rs. 1,000 and Rs. 4,999 for 2 or more years
    } else if (p > 5000 && t >= 1) {
        i = 0.08; // 8% for deposits over Rs. 5,000 for 1 year or more
    } else {
        i = 0.03; // 3% for all other cases
    }
    tA = p * pow((1 + i), t);
    float interestCredited = tA - p;
    printf("\nTotal Amount after %d years: Rs. %.2f\n", t, tA);
    printf("Interest Credited: Rs. %.2f\n", interestCredited);
}