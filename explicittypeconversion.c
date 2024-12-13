/*Explicit type conversion is a procedure in which user has to change the
 type of any variable or expression manually. Lets demonstrate example:*/
#include<stdio.h>
void main()
{
    int a = 5;
    int b = 2;
    float result;
    result = (float)a/b; //Explicit type conversion
    printf("Result=%.2f",result);
}