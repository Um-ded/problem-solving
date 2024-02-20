#include <stdio.h>

int main()
{
    int t, n, a[1002], i, e, o;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);

        if(n == 1)
        {
            if(a[0]%2 == 0)
                printf("0\n");
            else
                printf("-1\n");
        }
        else
        {
            e = 0;
            o = 0;
            for(i=0; i<n; i++)
            {
                if(i%2 != a[i]%2)
                {
                    if(i%2 == 0)
                        e++;
                    else
                        o++;
                }
            }

            if(e == o)
                printf("%d\n", e);
            else
                printf("-1\n");
        }
    }

    return 0;
}
