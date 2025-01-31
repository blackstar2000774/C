#include <stdio.h>
void main() {
    float amt, discount = 0.0, finalamt;
    printf("Enter the purchase amount: ");
    scanf("%f", &amt);
    if (amt >= 5000) {
      discount = amt * 0.10;
    } else if (amt >= 4000) {
        discount = amt * 0.07;
    } else if (amt >= 3000) {
        discount = amt * 0.05;
    } else if (amt >= 2000) {
        discount = amt * 0.03;
    } else {
        discount = amt * 0.02;
    }
    finalamt = amt - discount;
    printf("Discount: Rs.%.2f\n", discount);
    printf("Final amount: Rs.%.2f\n", finalamt);
}