#include <stdio.h>

long long int fact(long long int x)
{
    if(x == 0)
    {
        return 1;
    }
    return x*fact(x-1);
}

int main()
{
    long long int m, n, fact_m, fact_n;

    while(scanf("%lld %lld", &m, &n) != EOF)
    {
        fact_m = fact(m);
        fact_n = fact(n);
        printf("%lld\n", fact_m+fact_n);
    }
    return 0;
}
