#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    double dis,root1,root2,real,img;
    printf("Enter the value of a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    dis = pow(b,2) - 4 * a * c;
    if (dis >=0)
    {
        root1=(-b+sqrt(dis))/(2*a);
        root2=(-b-sqrt(dis))/(2*a);
        printf("Root1= %.2lf and Root2= %.2lf", root1, root2);
    }
    else{
        printf("Roots are imaginary");
        dis = sqrt(fabs(dis));
        real = -b/(2*a);
        img = dis/(2*a);
        printf("\nroot1 = %.2lf +i %.2lf", real, img);
        printf("\nroot2 = %.2lf -i %.2lf", real, img);
}
}