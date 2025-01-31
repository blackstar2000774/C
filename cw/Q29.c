#include<stdio.h>
void main()
{
    int mcp,mphy,mmath,miit,mdl, passMarks=45;
    int pass=1;
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
    if (mcp < passMarks || mphy < passMarks || mmath < passMarks || miit < passMarks || mdl < passMarks) {
            pass = 0;
        }
    float percent=(float)(mcp+mmath+mphy+mdl+miit)/5;
    if (pass) 
    {
        printf("Result: PASS\n");
        printf("Percentage: %.2f%%\n", percent);
        if (percent>=80)
            printf("Distinction");
        else if (percent<79 && percent>=60)
            printf("First division");
        else if (percent<60)
            printf("Second division");
    }
    else
        printf("Fail: Try next Year");
}