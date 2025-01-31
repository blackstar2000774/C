#include<stdio.h>
void main(){
    int n, fact=1;
    printf("Enter the number:\t");
    scanf("%d",&n);
    if (n<0)
    printf("Factorial of negative number is not possible");
    else
    {   for (int i = n; i >0 ; i--)
        {
            fact=fact*i;
        }
    printf("Factorial=%d",fact);
    }
}