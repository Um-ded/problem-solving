#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main()
{
    int R;
    double V;
    scanf("%d", &R);
    V = (4/3.0)*pi*pow(R,3);
    printf("VOLUME = %.3lf\n", V);
    return 0;

}

