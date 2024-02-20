#include <stdio.h>

int main()
{
    int n, i, Ri, X, Y;

    while(scanf("%d", &n)==1 && n!=0)
    {
        X=0;
        Y=0;

        for(i=1 ; i<=n ; i++)
        {
            scanf("%d", &Ri);

            if(Ri==0)
            {
                X += 1;
            }
            else if(Ri==1)
            {
                Y += 1;
            }
        }

        printf("Mary won %d times and John won %d times\n", X, Y);
    }
    return 0;
}
