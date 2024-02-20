#include <stdio.h>

int main()
{
    int t, a, b, count;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);

        if(a%b == 0)
            printf("%d\n", a%b);
        else
            printf("%d\n", b-(a%b));
    }
    return 0;
}

