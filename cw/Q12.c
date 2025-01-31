#include <stdio.h>
void main()
{
    int n, rn = 0;
    printf("Enter a six-digit integer: ");
    scanf("%d", &n);
    while (n != 0) {
        int digit = n % 10;
        rn = rn * 10 + digit;
        n /= 10;
    }
    printf("Reversed number: %d\n", rn);
}