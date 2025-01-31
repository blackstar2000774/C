#include<stdio.h>
#include<math.h>
void main(){
    double a, X = 0;
    int N;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i%2==1)
        {
            X=X+pow(a,i)/i;
        }
        else
        {
            X=X-pow(a,i)/i;
        }
    }
    printf("The value of X for a = %.2lf and N = %d is: %.4lf\n", a, N, X);
}