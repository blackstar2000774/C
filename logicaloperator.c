#include <stdio.h>
void main()
{
    int N1, N2, N3, max;
    printf("Enter any three numbers or integers:\n");
    scanf("%d %d %d", &N1, &N2, &N3);
    if (N1 > N2 && N1 > N3)
    {
        max = N1;
    }
    else if (N2 > N1 && N2 > N3)
    {
        max = N2;
    }
    else
    {
        max = N3;
    }
    printf("Largest=%d", max);
}