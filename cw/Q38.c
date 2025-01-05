#include<stdio.h>
void main()
{
    int sum=0, n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    for (int i = 1; i<=n; i++)
    {
        if(i%5==0)
            sum= sum+i;
    }
    printf("The summation = %d",sum);
}