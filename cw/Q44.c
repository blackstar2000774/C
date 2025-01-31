#include<stdio.h>
void main(){
    long num,digit,rev=0;
    printf("\nEnter number to be checked:\t");
    scanf("%ld",&num);
    while (num!=0)
    {
        digit = num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("Reversed integer: %ld\n", rev);
}