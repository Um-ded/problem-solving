#include <stdio.h>

int main()
{
    int a, b, n, i;
    scanf("%d %d %d", &a, &b, &n);

    a *= 10;

    if(a%b != 0)
    {
        for(i=1; i<=9; i++)
        {
            a++;

            if(a%b == 0)
                break;
        }
    }

    if(a%b == 0)
    {
        printf("%d", a);

        for(i=n-1; i>0; i--)
            printf("0");

        printf("\n");
    }
    else
        printf("-1\n");

    return 0;
}
