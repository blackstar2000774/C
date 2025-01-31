#include<stdio.h>
void main()
{
    float l, b, area, perimeter;
    printf("Enter the value of length and width of rectangle:\n");
    scanf("%f %f", &l, &b);
    perimeter=(2*l)+(2*b);
    printf("The perimeter of the rectangle is: %.2f\n",perimeter);
    area=l*b;
    printf("The area of the rectangle is: %.2f\n",area);
}