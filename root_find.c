#include<stdio.h>
#include<math.h>
typedef int INTEGER;
typedef double DOUB;

void main()
{
    INTEGER a,b,c;
    DOUB dis,root1,root2,real,img;
    printf("Enter the value of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    dis = pow(b,2) - 4 * a * c;
    if (dis >=0)
    {
        root1=(-b+sqrt(dis))/(2*a);
        root2=(-b-sqrt(dis))/(2*a);
        printf("Root1=%.2lf and Root2=%.2lf", root1, root2);
    }
    else
    {
        printf("Roots are imaginary");
        dis = sqrt(fabs(dis));
        real = -b/(2*a);
        img = dis/(2*a);
        printf("\nroot1 = %.2f +i %.2f", real, img);
        printf("\nroot2 = %.2f -i %.2f", real, img);
    }
}