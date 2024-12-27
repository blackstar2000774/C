#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    int rem=a%b;
    if (rem==0)
    {
        printf("%d is divided by %d",a,b);
    }
    else
    {
        printf("%d is not divided by %d",a,b);
    }
}