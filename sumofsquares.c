#include<stdio.h>
void main(){
    int n, sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of squares of %d is %d",n,sum);
}