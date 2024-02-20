#include <stdio.h>
#include <math.h>

int main()
{
    int t, ways;
    double n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%lf", &n);

        ways = ceil(n/2)-1;
        printf("%d\n", ways);
    }
    return 0;
}

