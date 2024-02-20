#include <stdio.h>

int main()
{
    int n, a, b, c, d, t;
    double f;
    scanf(" %d", &n);



    while(n--)
    {
        scanf(" %d %d %d %d", &a, &b, &c, &d);

        if(a>b)
        {
            t = a;
            a = b;
            b = t;
        }
        if(c>d)
        {
            t = c;
            c = d;
            d = t;
        }
        if(b == d && a+c == b)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
