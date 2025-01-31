#include <stdio.h>
void main() {
    int N, num, sum = 0;
    printf("Enter the number of integers (N): ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if (num % 5 == 0) {
            sum += num;
        }
    }
    printf("The sum of all numbers divisible by 5 is: %d\n", sum);
}