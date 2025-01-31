#include <stdio.h>
int main() 
{
    int n1,n2;
    int s,d,p;
    float quotient;
    printf("Enter the first whole number: ");
    scanf("%d", &n1);
    printf("Enter the second whole number: ");
    scanf("%d", &n2);
    s = n1 + n2;
    d = n1 - n2;
    p = n1 * n2;
    if (n2 != 0) {
        quotient = (float) n1 / n2;
    } else {
        printf("Division by zero is not allowed.\n");
    }
    printf("Addition: %d + %d = %d\n", n1, n2, s);
    printf("Subtraction: %d - %d = %d\n", n1, n2, d);
    printf("Multiplication: %d * %d = %d\n", n1, n2, p);
    printf("Division: %d / %d = %f\n", n1, n2, quotient);
}