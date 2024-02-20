#include <stdio.h>

int main()
{
    double A,B,C,Product,MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    Product = (A*2)+(B*3)+(C*5);
    MEDIA = Product/10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}
