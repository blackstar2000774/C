#include<stdio.h>
void main()
{
    int mcp,mphy,mmath,miit,mdl;
    printf("Enter the marks of c-programming:\t");
    scanf("%d",&mcp);
    printf("Enter the marks of Physics:\t");
    scanf("%d",&mphy);
    printf("Enter the marks of Mathematics:\t");
    scanf("%d",&mmath);
    printf("Enter the marks of IIT:\t");
    scanf("%d",&miit);
    printf("Enter the marks of Digital Logic:\t");
    scanf("%d",&mdl);
    float gpa=(float)((mcp+mmath+mphy+mdl+miit)/5)*0.04;
    if (gpa<=3.60 && gpa>3.20)
        printf("A");
    else if (gpa>3.60)
        printf("A+");
    else if (gpa<3.20 && gpa>=2.80)
        printf("B+");
    else if (gpa<2.80 && gpa>=2.40)
        printf("B");
        else if (gpa<2.40 && gpa>=2.00)
        printf("C+");
        else if (gpa<2.00 && gpa>=1.60)
        printf("C");
        else if (gpa<1.60 && gpa>=0.80)
        printf("D");
        else if (gpa<0.80 && gpa>=0.20)
        printf("E");
    else
        printf("NG: Try next Year");
}