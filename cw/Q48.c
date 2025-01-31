#include<stdio.h>
void main()
{   int a=0,b=1,c=1;
    printf("The first 25 numbers of Fibonacci series.\n");
    for (int i = 0; i < 25; i++)
    {
        printf("%d\t",c);
        c=a+b;
        a=b;
        b=c;
    }
}