#include <stdio.h>

int main()
{
    double a, b, c;
    scanf("%lf", &a);

    if(a > 2000.00)
        c = .04;
    else if(a > 1200.00)
        c = .07;
    else if(a > 800.00)
        c = .1;
    else if(a > 400.00)
        c = .12;
    else
        c = .15;

    b = a+(a*c);
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", b, b-a, c*100);
    return 0;
}
