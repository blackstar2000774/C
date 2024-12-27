#include<stdio.h>
void main()
{
    int a, b, largest;
    printf("Enter any two integers:");
    scanf("%d %d", &a, &b);
    largest = (a > b) ? a:b;//ternary operator or conditional operator
    printf("Largest number=%d",largest);
}