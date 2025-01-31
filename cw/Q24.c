#include<stdio.h>
void main(){
    float s, c; // s=sales & c=commision
    printf("Enter the monthly sales: ");
    scanf("%f", &s);
    if (s < 10000) {
        c = s * 0.05; // 5% commission
    } else {
        c = s * 0.10; // 10% commission
    }
    printf("Monthly Sales: Rs. %.2f\n", s);
    printf("Commission: Rs. %.2f\n", c);
}