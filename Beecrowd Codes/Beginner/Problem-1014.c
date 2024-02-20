#include <stdio.h>
#include <math.h>

int main()
{
    int X;
    double Y, Avg;
    scanf("%d %lf", &X, &Y);
    Avg = X/Y;
    printf("%.3lf km/l\n", Avg);
    return 0;

}

