#include<stdio.h>
#include<omp.h>
int fib(int n)
{
    int f[n+2];
    int i;
    f[0] = 0;
    f[1] = 1;

    #pragma omp ordered

    for (i = 2; i <= n; i++)
    {

    f[i] = f[i-1] + f[i-2];
    }
    return f[n];
}
int main ()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Result: %d", fib(n));
    getchar();
    return 0;
}
