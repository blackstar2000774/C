/*Calculate the monthly salary of any employee after the
 deduction of tax according to the government of Nepal*/
#include<stdio.h>
float calculateTax(float taxableIncome) {
    float tax = 0.0;
    if (taxableIncome<=500000)
    {
        tax= taxableIncome * 0.01;
    } else if(taxableIncome<=700000){
        tax= (500000*0.01)+((taxableIncome-500000)*0.10);
    }else if (taxableIncome <= 1000000) {
        tax = (500000 * 0.01) + (200000 * 0.10) + ((taxableIncome - 700000) * 0.20);
    } else if (taxableIncome<= 2000000){
        tax = (500000 * 0.01) + (200000 * 0.10) + (300000*0.20) + ((taxableIncome - 1000000) * 0.30);
    } else if (taxableIncome<= 5000000){
        tax = (500000 * 0.01) + (200000 * 0.10) + (300000*0.20) + (1000000 * 0.30)+((taxableIncome-2000000)*0.36);
}else{
    tax = (500000 * 0.01) + (200000 * 0.10) + (300000*0.20) + (1000000 * 0.30)+ (3000000*0.36) + ((taxableIncome - 5000000) * 0.39);
}
return tax;
}
int main()
{
    float income,bonus,allowance,others;
    float pf,cit,lifeinsurence,medicalinsurence;
    float yearly_income,deduction,taxableIncome,tax, netAnnualSalary, monthlyNetSalary;
    printf("Enter monthly salary:\t");
    scanf("%f",&income);
    printf("\nEnter Bonus:\t");
    scanf("%f",&bonus);
    printf("\nEnter Allowance:\t");
    scanf("%f",&allowance);
    printf("\nEnter Others:\t");
    scanf("%f",&others);
    yearly_income=(12*income)+bonus+allowance+others;
    printf("\nEnter Provident Fund:\t");
    scanf("%f",&pf);
    printf("\nEnter Citizen Investment Trust:\t");
    scanf("%f",&cit);
    printf("\nEnter Life Insurance:\t");
    scanf("%f",&lifeinsurence);
    printf("\nEnter Medical Insurance:\t");
    scanf("%f",&medicalinsurence);
    deduction=(pf+cit+lifeinsurence+medicalinsurence)*12;
    taxableIncome = yearly_income-deduction;
    tax = calculateTax(taxableIncome);
    netAnnualSalary =yearly_income-tax;
    monthlyNetSalary = netAnnualSalary/12;
    printf("Monthly salary after tax deduction:%.2f",monthlyNetSalary);
    return 0;
}