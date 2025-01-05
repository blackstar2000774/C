#include<stdio.h>
#include<math.h>
void main(){
    int i, sum=0,n,x;
    printf("Enter the value of n & x:\n");
    scanf("%d %d", &n, &x);
    sum = 1+pow(x,2);
    for ( i = 3; i <=n; i++)
    {
        sum = sum+i*pow(x,2);
    }
    printf("\tThe summation = %d",sum);
}