#include<stdio.h> //Largest Number
void main( )
{
    int N1,N2,N3, max;
    printf("Enter any three numbers or integers:\n");
    scanf("%d %d %d", &N1,&N2,&N3);
    if (N1>N2)
    {
        if (N1>N3)//N1>N2 & N1>N3
        {
            max=N1;
        }
        else //N1>N2 & N3>N1
        {
            max=N3;
        }
    }
        else
        { //N2>N1
            if (N2>N3)//N2>N1 &N2>N3
            {
                max=N2;
            }
            else//N2>N1 & N3>N2>N1
            {
                max=N3;
            }
        }
        printf("Largest=%d/n",max);
}