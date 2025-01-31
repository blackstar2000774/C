#include <stdio.h>
#include <math.h>
void main()
{
    float number, squareRoot;
    printf("Enter a number: ");
    scanf("%f", &number);
    if (number < 0) {
        printf("Error: Square root of a negative number is not defined.\n");
    } else 
    {
        squareRoot = sqrt(number);
        printf("The square root of %.2f is %.2f\n", number, squareRoot);
    }
}