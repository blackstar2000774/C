#include<stdio.h>
void main()
{
    float r, area;
    float pi=3.141593;
    printf("Enter the value of radius of circle:\n");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of the circle is: %.2f\n",area);
return 0;
}