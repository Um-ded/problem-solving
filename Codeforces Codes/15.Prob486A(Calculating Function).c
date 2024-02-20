#include <stdio.h>

int main()
{
    long long int n, func;
    scanf("%lld", &n);

    if(n%2 == 0)
    {
        func = n/2;
    }
    else
    {
        func = -((n+1)/2);
    }

    printf("%lld\n", func);
    return 0;
}
