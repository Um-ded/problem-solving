#include <stdio.h>

int main()
{
    int a, b, r, t, d;
    scanf(" %d %d %d", &a, &b, &r);

    if(a > b)
    {
        t = a;
        a = b;
        b = t;
    }

    if(a >= (2*r))
        printf("First\n");
    else
        printf("Second\n");

    return 0;
}
