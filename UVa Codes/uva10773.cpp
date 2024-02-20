#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double d, v, u;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%lf %lf %lf", &d, &v, &u);

        if(u <= v || v == 0)
            printf("Case %d: can't determine\n", i);
        else
            printf("Case %d: %.3f\n", i, d*((1/sqrt(u*u-v*v))-(1/u)));
    }

    return 0;
}
