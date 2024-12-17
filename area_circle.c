#include<stdio.h>
#define PI 3.14159265358979323846
void main()
{
    int radius1 , radius2, radius3;
    float area1, area2, area3;
    printf("Enter the radius of circle one:\n");
    scanf("%d",&radius1);
    printf("Enter the radius of circle one:\n");
    scanf("%d",&radius2);
    printf("Enter the radius of circle one:\n");
    scanf("%d",&radius3);
    area1= PI * radius1 * radius1;
    printf("The area of circle one =%.2f\n",area1);
    area2= PI * radius2 * radius2;
    printf("The area of circle two =%.2f\n",area2);
    area3= PI * radius3 * radius3;
    printf("The area of circle three =%.2f\n",area3);
}