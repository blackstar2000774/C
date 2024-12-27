#include<stdio.h>
void main()
{
    int n;
    int a = 0, b=1, c;
    printf("Enter no. of terms:\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (int i = 0; i <= n-2; i++)
    {
        c=a+b;
        printf(" %d ",c);
        a=b;
        b=c;
    }
}