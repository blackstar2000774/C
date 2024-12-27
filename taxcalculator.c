#include<stdio.h>
void main()
{
    float grosssal, monthlysal, remsal, annualsal, tax=0;
    printf("Enter the gross salary of married person:\n");
    scanf("%f", &grosssal);
    annualsal = grosssal*13;//including bonus
    if (annualsal<=600000)
    {
        tax +=0.01* annualsal;
        monthlysal=(annualsal-0.01*annualsal)/12;
    }
    remsal = annualsal - 600000;
    if (remsal<=200000)
    {
        annualsal=annualsal-600000;
        tax+=tax + 0.10 * remsal;
    }
    
    printf("Monthly Salary=%.2f",monthlysal);
    
}