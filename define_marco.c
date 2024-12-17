#include<stdio.h>
#define PI 3.14159265358979323846
#define VOLCONS 1.3334
void main()
{
    int radius;
    float volume;
    printf("Enter the radius of sphere:\n");
    scanf("%d",&radius);
    volume = VOLCONS * PI * radius * radius * radius;
    printf("The volume of a sphere=%.2f",volume);
}