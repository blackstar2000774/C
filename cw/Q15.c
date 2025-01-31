#include <stdio.h>
void main() {
    float amt, discount = 0.0, finalamt;
    printf("Enter the purchase amount: ");
    scanf("%f", &amt);
    if (amt >= 1000) 
    {
        discount = amt * 0.05;
    }
    finalamt = amt - discount;
    printf("Discount: Rs.%.2f\n", discount);
    printf("Final amount: Rs.%.2f\n", finalamt);
}