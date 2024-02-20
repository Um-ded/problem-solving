#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=m ; j++)
        {
            if(i%2==1)
            {
                printf("#");
            }
            else
            {
                if((i/2)%2==0)
                {
                    printf("%c", "#."[j>1]);
                }
                else
                {
                    printf("%c", ".#"[j==m]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
