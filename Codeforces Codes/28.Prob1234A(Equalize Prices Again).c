#include <stdio.h>

int main()
{
    int q, n, ai, sum, i;
    scanf("%d", &q);

    while(q--)
    {
        scanf("%d", &n);

        sum = 0;
        for(i=1; i<=n; i++)
        {
            scanf("%d", &ai);
            sum += ai;
        }

        if(sum%n == 0)
            printf("%d\n", sum/n);
        else
            printf("%d\n", (sum/n)+1);
    }

    return 0;
}

