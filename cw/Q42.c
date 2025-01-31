#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0;
    int i,n,x;
    printf("Enter the value of n and x:\n");
    scanf("%d %d",&n,&x);
    for (i = 1; i <=n; i++)
    //another way: sum=pow(-1,i+1)*pow(x,i)
    if(i%2==1)
    {//odd
        sum=sum+pow(x,i);
    }
    else
    {//even
        sum=sum-pow(x,i);
    }
    printf("Sum=%d",sum);
}