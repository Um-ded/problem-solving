#include <stdio.h>

int main()
{
    int n, m, i, j, si=0, sj=0, t=0;
    char str[120];
    scanf("%d %d", &n, &m);

    for(i=1; i<=n; i++)
    {
        scanf("%s", str);
        for(j=0; j<m; j++)
        {
            if(str[j] == 'B')
            {
                si += i;
                sj += j+1;
                t++;
            }
        }
    }

    printf("%d %d\n", si/t, sj/t);

    return 0;
}
