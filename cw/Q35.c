#include<stdio.h>
void main(){
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("\nUsing for loop:\n");
    int sum_for = 0;
    printf("First %d natural numbers: ", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
        sum_for += i;
    }
    float average_for = (float)sum_for / n;
    printf("\nSum: %d", sum_for);
    printf("\nAverage: %.2f\n", average_for);
    printf("\nUsing while loop:\n");
    int count_while = 1;
    int sum_while = 0;
    printf("First %d natural numbers: ", n);
    while (count_while <= n) {
        printf("%d ", count_while);
        sum_while += count_while;
        count_while++;
    }
    float average_while = (float)sum_while / n;
    printf("\nSum: %d", sum_while);
    printf("\nAverage: %.2f\n", average_while);
    printf("\nUsing do-while loop:\n");
    int count_do = 1;
    int sum_do = 0;
    printf("First %d natural numbers: ", n);
    do {
        printf("%d ", count_do);
        sum_do += count_do;
        count_do++;
    } while (count_do <= n);
    float average_do = (float)sum_do / n;
    printf("\nSum: %d", sum_do);
    printf("\nAverage: %.2f\n", average_do);
}