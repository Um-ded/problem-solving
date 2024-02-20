#include <stdio.h>

int main()
{
    int T, N, i, j, Vj, count;
    scanf("%d", &T);

    for(i=1 ; i<=T ; i++)
    {
        scanf("%d", &N);
        count=0;

        for(j=1 ; j<=N ; j++)
        {
            scanf("%d", &Vj);

            if(Vj<=0)
            {
                count += 0;
            }
            else
            {
                count += Vj;
            }
        }
        printf("Case %d: %d\n", i, count);
    }
    return 0;
}
