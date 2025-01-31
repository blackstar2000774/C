#include<stdio.h>
void main()
{
    long n,r,sum=0;
    printf("\nEnter a number:");
    scanf("%ld",&n);
    do
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    } while (n!=0);
    printf("\nSum of the digits=%ld",sum);
}