#include<stdio.h>
#define PI 3.14159265358979323846
void main()
{
    float r, area, circumference;
    printf("Enter the value of radius of circle:\n");
    scanf("%f",&r);
    circumference=2*PI*r;
    printf("The circumference of the circle is: %.2f\n",circumference);
    area=PI*r*r;
    printf("The area of the circle is: %.2f\n",area);
}