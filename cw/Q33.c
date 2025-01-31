#include<stdio.h>
void main(){
    float pA, d = 0, nA; //pA=purchase amount, d=discount & nA= net amount
    char iT; //it=item type
    printf("Enter the purchase amount: ");
    scanf("%f", &pA);
    printf("Enter item type (M for Mill cloth, H for Handloom): ");
    scanf(" %c", &iT);
    if (pA < 0) {
    printf("Invalid purchase amount.\n");
    }
    switch (iT) {
        case 'M': // Mill cloth
            if (pA <= 100) {
                d = 5.0;
            } else if (pA <= 200) {
                d = 10.0;
            } else if (pA <= 300) {
                d = 7.5;
            } else {
                d = 10.0;
            }
            break;
        case 'H': // Handloom
            if (pA <= 100) {
                d = 5.0;
            } else if (pA <= 200) {
                d = 7.5;
            } else if (pA <= 300) {
                d = 10.0;
            } else {
                d = 15.0;
            }
            break;
        default:
        printf("Invalid item type entered. Please enter 'M' or 'H'.\n");
    }
    nA = pA - (pA * d / 100);
    printf("Purchase Amount: %.2f\n", pA);
    printf("Discount: %.2f%%\n", d);
    printf("Net Amount to be paid: %.2f\n", nA);
}