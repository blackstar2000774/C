#include<stdio.h>
void main()
{
    float x,y,z;
    printf("Enter any three numbers: ");
    scanf("%f%f%f",&x,&y,&z);
    if (x>y && x>z)
        printf("\n%f is the largest number.",x);
    else if (y>z)
        printf("\n%f is the largest number.",y);
    else
        printf("\n%f is the largest number.",z);
}