#include <stdio.h>

int main()
{
    int N, i, A, B, PointA, PointB;

    while(scanf("%d", &N)==1 && N!=0)
    {
        PointA=0;
        PointB=0;

        for(i=1 ; i<=N ; i++)
        {
            scanf("%d %d", &A, &B);

            if(A>B)
            {
                PointA++;
            }
            else if(A<B)
            {
                PointB++;
            }
            else if(A==B)
            {
                continue;
            }
        }

        printf("%d %d\n", PointA, PointB);
    }
    return 0;
}
