#include<stdio.h>
void main(){
    int n,fact=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        fact = fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
}