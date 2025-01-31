#include<stdio.h>
void main()
{
    float gs, t, ns; //gs=gross Salary, t=tax & ns=net salary
    printf("Enter the gross salary:Rs. ");
    scanf("%f", &gs);
    if (gs < 10000) {
        t = 0; // No tax
    } else if (gs >= 10000 && gs < 20000) {
        t = gs * 0.10; // 10% tax
    } else if (gs >= 20000 && gs < 40000) {
        t = gs * 0.15; // 15% tax
    } else {
        t = gs * 0.20; // 20% tax
    }
    ns = gs - t;
    printf("Gross Salary: Rs.%.2f\n", gs);
    printf("Tax Deducted: Rs.%.2f\n", t);
    printf("Net Salary: Rs.%.2f\n", ns);
}