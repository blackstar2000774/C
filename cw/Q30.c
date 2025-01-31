#include<stdio.h>
void main()
{
    char grade;
    printf("Enter a grade (A, B, C, D, or E): ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'A':
            printf("EXCELLENT\n");
            break;
        case 'B':
            printf("VERY GOOD\n");
            break;
        case 'C':
            printf("GOOD\n");
            break;
        case 'D':
            printf("SATISFACTORY\n");
            break;
        case 'E':
            printf("FAIL\n");
            break;
        default:
            printf("Invalid grade entered. Please enter A, B, C, D, or E.\n");
    }
}