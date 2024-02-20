#include <stdio.h>

int f_calls;

int fib(int n)
{
    f_calls++;

    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fib(n-1) + fib(n-2);
}

int main()
{
    int N, X;
    scanf("%d",&N);

    while(N--)
    {
        scanf("%d",&X);

        f_calls = 0;
        printf("fib(%d) = %d calls = %d\n", X, f_calls-1, fib(X));
    }

    return 0;
}
