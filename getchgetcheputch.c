#include<stdio.h>
#include<conio.h>
void main()
{
    char a,b;
    printf("Enter any value using getch() function:\n");
    a = getch();
    printf("Entered character is: ");
    putch(a);
    printf("\nEnter any value using getche() function:");
    b = getche();
    printf("\nEntered character is: ");
    putch(b);
    //gets and puts-these functions will be studied in array
}