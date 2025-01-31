#include <stdio.h>

int main() 
{
    int number, sum = 0;
    printf("Enter a five-digit positive integer: ");
    scanf("%d", &number);
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    printf("Sum of the digits: %d\n", sum);
}