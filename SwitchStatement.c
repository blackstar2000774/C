/*switch is a conditional statement in which there are different cases and 
matched case is exected only.*/
#include<stdio.h>
void main()
{
    char choice;
    int a,b;
    printf("Enter choice:\na. Addition\nb.Subtraction\nc.Multiplication\nd.Division\n");
    scanf("%c",&choice);
    switch (choice)
    {
    case 'a' ://when a key is entered via keyboard
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    printf("Sum=%d",(a+b));
        break;
    case 'b':
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    printf("Difference=%d",(a-b));
    break;
    case 'c':
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    printf("Product=%d",(a*b));
    break;
    case 'd':
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    printf("Quotient=%d",(a/b));
    break;
    default:
    printf("\nInvalid Choice");
        break;
    }
}