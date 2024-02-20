#include <stdio.h>

int main()
{
    int i=5, x, e=0, o=0, p=0, n=0;

    while(i--)
    {
        scanf("%d", &x);

        if(x>0)
            p++;
        else if(x<0)
            n++;

        if(x%2 == 0)
            e++;
        else
            o++;
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", e, o, p, n);
    return 0;
}

