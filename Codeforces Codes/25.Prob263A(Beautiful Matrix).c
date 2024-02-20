#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[6][6], i, j;

    for(i=1 ; i<=5 ; i++)
    {
        for(j=1 ; j<=5 ; j++)
        {
            scanf("%d", &mat[i][j]);

            if(mat[i][j] == 1)
            {
                printf("%d\n", abs(i-3)+abs(j-3));
                break;
            }
        }
    }

    return 0;
}
