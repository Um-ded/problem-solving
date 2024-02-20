#include <stdio.h>

int main()
{
    int n;
    double d, pi, t=0.0;
    scanf(" %d", &n);
    d = (double)n;

    while(n--)
    {
        scanf(" %lf", &pi);
        t += pi;
    }

    printf("%.12f\n", t/d);///for double data type, use %lf to take input but use %f to print output
    return 0;
}
