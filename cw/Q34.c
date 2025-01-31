#include <stdio.h>
void main(){
    printf("Using for loop:\n");
    for (int i = 0; i < 10; i++) {
        printf("Samip Khadka\n");
    }
    printf("\nUsing while loop:\n");
    int count = 0;
    while (count < 10) {
        printf("Samip Khadka\n");
        count++;
    }
    printf("\nUsing do-while loop:\n");
    count = 0;
    do {
        printf("Samip Khadka\n");
        count++;
    } while (count < 10);
}