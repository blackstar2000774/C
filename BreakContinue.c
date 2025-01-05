//Display prime numbers from 1 to 100.
#include <stdio.h>
void main() 
{    int n,p;
    printf("Prime numbers from 1 to 100 are:\n");
    for (n=2;n<=100;n++) 
    { p=1; 
        for (int i=2; i<= n/2;i++) 
        {   if (n%i == 0) {
            p = 0;
            break;
        } 
        }
        if (p) {
            printf("%d ", n);
        }
    }
    printf("\n");
}