#include <stdio.h>

int main()
{
    int n, x=0;
    scanf("%d", &n);

    while( n!=0)
    {
        if(n>=100)
        {
            x += (n/100);
            n %= 100;
        }
        else if(n>=20)
        {
            x += (n/20);
            n %= 20;
        }
        else if(n>=10)
        {
            x += (n/10);
            n %= 10;
        }
        else if(n>=5)
        {
            x += (n/5);
            n %= 5;
        }
        else
        {
            x += n;
            n = 0;
        }
    }

    printf("%d\n", x);
    return 0;
}
