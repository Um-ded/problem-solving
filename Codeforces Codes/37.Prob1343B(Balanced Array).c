#include <stdio.h>

int ara[200000];

int main()
{
    int t, n, i, val1, val2, sum1, sum2, sub;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        if(n%4 != 0)
        {
            printf("NO\n");
        }
        else
        {
            sum1 = 0;
            for(i=0, val1=2; i<(n/2); i++, val1+=2)
            {
                ara[i] = val1;
                sum1 += ara[i];
            }

            sum2 = 0;
            for(i=(n/2), val2=1; i<(n-1); i++, val2+=2)
            {
                ara[i] = val2;
                sum2 += ara[i];
            }

            sub = sum1-sum2;

            if(sub%2 == 1)
            {
                ara[n-1] = sub;
                printf("YES\n");

                for(i=0; i<n; i++)
                {
                    printf("%d%c", ara[i], " \n"[i == n-1]);
                }
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}
