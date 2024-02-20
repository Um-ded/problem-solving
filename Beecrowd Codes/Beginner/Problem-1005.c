#include <stdio.h>

int main()
{
    double A,B,Product,MEDIA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    Product = (A*3.5)+(B*7.5);
    MEDIA = Product/11;
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}
