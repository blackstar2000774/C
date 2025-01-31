#include<stdio.h>
void main(){
     printf("Celsius\tFahrenheit\n");
    printf("---------------------\n");
    for (int celsius = 0; celsius <= 100; celsius++) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%d\t%.2f\n", celsius, fahrenheit);
    }
}