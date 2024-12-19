#include<stdio.h>
/*Unformatted Functions: These are the standard input and output functions
that are used to read and display data but without the user defined format.*/
// getchar(),putchar(),grtch(),getche(),putch() etc in other units.
void main(){
//lets demonstrate getchar and putchar function
char ch;
printf("Enter any character:\n");
ch=getchar();//scanf("%c",&ch);
printf("Entered value is:");
putchar(ch);//displays
}