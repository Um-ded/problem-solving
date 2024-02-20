#include <stdio.h>

double triangle(double a, double b, double c)
{
    return (a+b+c);
}

double trapezium(double a, double b, double c)
{
    return (.5*(a+b)*c);
}

int main()
{
    double a, b, c, d;
    scanf(" %lf %lf %lf", &a, &b, &c);

    if(a+b>c && b+c>a && c+a>b)
    {
        d = triangle(a, b, c);
        printf("Perimetro = %.1f\n", d);
    }
    else
    {
        d = trapezium(a, b, c);
        printf("Area = %.1f\n", d);
    }

    return 0;
}
