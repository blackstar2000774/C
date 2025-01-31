#include<stdio.h>
void main()
{
    for (int n = 1; n <= 100; n++)
    {
        int i=0;
        for (int j = 1; j <= n;j++)
        {
            if (n%j==0)
            i++;
        }
        if(i==2)
            printf("%d\t",n);
    }
}