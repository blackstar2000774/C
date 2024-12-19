#include<stdio.h>
void main()
{
    int x =10;
    int y;
    y= x++; // post increment operator
    printf("y=%d",y);
    printf("\nx=%d",x);
    y= ++x;// pre increment operator
    printf("\ny=%d",y);
    printf("\nx=%d",x);
    y= --x; // pre decrement operator
    printf("\ny=%d",y);
    printf("\nx=%d",x);
    y= x--; // post decrement operator
    printf("\ny=%d",y);
    printf("\nx=%d",x);
}