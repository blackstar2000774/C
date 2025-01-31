#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    char choice;
    float radius, area;
    int num, sum, N;
    do {
        printf("\nMenu:\n");
        printf("a. To find area of circle\n");
        printf("b. To check if a given number is odd or even\n");
        printf("c. To find the sum of N numbers\n");
        printf("d. Exit\n");
        printf("Enter your choice (a/b/c/d): ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a':
            case 'A':
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                area = PI * radius * radius;
                printf("Area of the circle: %.2f\n", area);
                break;
            case 'b':
            case 'B':
                printf("Enter an integer: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("%d is even.\n", num);
                } else {
                    printf("%d is odd.\n", num);
                }
                break;
            case 'c':
            case 'C':
                printf("Enter the value of N: ");
                scanf("%d", &N);
                sum = 0;
                for (int i = 1; i <= N; i++) {
                    int value;
                    printf("Enter number %d: ", i);
                    scanf("%d", &value);
                    sum += value;
                }
                printf("Sum of the numbers: %d\n", sum);
                break;
            case 'd':
            case 'D':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    } while (choice != 'd');
}