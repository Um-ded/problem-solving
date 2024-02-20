#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf", &a);

    if(a <= 2000.00)
    {
        printf("Isento\n");
        return 0;
    }
    else if(a > 4500.00)
    {
        a -= 4500;
        b = (.28*a)+350;
    }
    else if(a > 3000.00)
    {
        a -= 3000;
        b = (.18*a)+80;
    }
    else
    {
        a -= 2000;
        b = (.08*a);
    }

    printf("R$ %.2f\n", b);
    return 0;
}
