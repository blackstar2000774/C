#include<stdio.h>
void main(){
    float num1, num2;
    printf("Enter two numbers:\n");
    printf("Number 1: ");
    scanf("%f", &num1);
    printf("Number 2: ");
    scanf("%f", &num2);
     if (num1 > num2) {
        printf("Number 1 (%.2f) is greater than Number 2 (%.2f).\n", num1, num2);
    } else if (num1 < num2) {
        printf("Number 1 (%.2f) is less than Number 2 (%.2f).\n", num1, num2);
    } else {
        printf("Number 1 (%.2f) is equal to Number 2 (%.2f).\n", num1, num2);
    }
}