#include <stdio.h>

int main()
{
    double O, B, I;

    scanf("%lf %lf %lf", &O, &B, &I);

    if(O==B || O==I || B==I)
    {
        printf("Empate\n");
    }
    else if(O<B && O<I)
    {
        printf("Otavio\n");
    }
    else if(B<O && B<I)
    {
        printf("Bruno\n");
    }
    else if(I<O && I<B)
    {
        printf("Ian\n");
    }

    return 0;
}

