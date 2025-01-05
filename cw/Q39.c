#include<stdio.h>
void main()
{
    float sum=0,n;
    printf("Enter the value of n: \t");
    scanf("%f",&n);
    for ( float i = 1; i<=n; i++)
    {
        sum = sum+(1/i);
    }
    printf("\tThe sum of harmonic series = %.2f",sum);
}