/*Scanf & Printf are called the user can*/
#include<stdio.h>
void main()
{
    int d, m, y;
    printf("Enter your date of birth(dd-mm-yyyy):\n");
    scanf("%d-%d-%d",&d,&m,&y);
    printf("My dob is (%d/%d/%d)", d, m, y);
}