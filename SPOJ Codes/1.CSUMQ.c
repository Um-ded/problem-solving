#include <stdio.h>

int main()
{
    int n, q, x, y, i;
    scanf("%d", &n);
    int arr[n+5], cs[n+5];
    arr[0] = cs[0] = 0;

    for(i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
        cs[i] = cs[i-1]+arr[i];
    }

    scanf("%d", &q);

    while(q--)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", cs[y+1]-cs[x]);
    }

    return 0;
}
