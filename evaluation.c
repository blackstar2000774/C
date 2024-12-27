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
    float percent=(float)(mcp+mmath+mphy+mdl+miit)/5;
    if (percent>=80)
        printf("Distinction");
    else if (percent<79 && percent>=70)
        printf("First division");
    else if (percent<69 && percent>=60)
        printf("Second division");
    else if (percent<59 && percent>=50)
        printf("Third division");
    else
        printf("Fail: Try next Year");
}