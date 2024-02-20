#include <stdio.h>
#define pi 3.14159
int main()
{
    double A, B, C, Tri, Cir, Tra, Qua, Ret;
    scanf("%lf %lf %lf", &A, &B, &C);
    Tri = (.5 * A * C);
    Cir = (pi * C * C);
    Tra = (.5 * ( A + B ) * C);
    Qua = B * B;
    Ret = A * B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", Tri, Cir, Tra, Qua, Ret);
    return 0;

}

