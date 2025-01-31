#include<stdio.h>
void main()
{
    int i, n;
    int fact=1;
    float sum=0;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for ( i = 1; i<=n; i++)
    {
        fact = fact*i;
        sum = sum+(float)i/fact;
    }
    printf("\tThe summation = %f",sum);
}