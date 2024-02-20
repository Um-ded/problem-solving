#include <stdio.h>

int ara[101];

int main()
{
    int n, i, pi;
    scanf(" %d", &n);

    for(i=1; i<=n; i++)
    {
        scanf(" %d", &pi);
        ara[pi] = i;
    }

    for(i=1; i<=n; i++)
    {
        printf("%d%c", ara[i], " \n"[i == n]);
    }

    return 0;
}
