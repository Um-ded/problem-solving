#include<stdio.h>

int main()
{
    int T, tt1, tt2, fl, att, ct1, ct2, ct3, i, avg, total;
    while(scanf("%d", &T) == 1)
    {
        for(i = 1 ; i <= T ; i++)
        {
            scanf("%d %d %d %d %d %d %d", &tt1, &tt2, &fl , &att, &ct1, &ct2, &ct3);
            if(ct1 <= ct2 && ct1 <= ct3)
            {
                avg = (ct2+ct3)/2;
            }
            else if(ct2 <= ct1 && ct2 <= ct3)
            {
                avg = (ct1+ct3)/2;
            }
            else
            {
                avg = (ct1+ct2)/2;
            }
            total = tt1 + tt2 + fl + att + avg;
            if(total >= 90)
            {
                printf("Case %d: A\n", i);
            }
            else if(total >= 80)
            {
                printf("Case %d: B\n", i);
            }
            else if(total >= 70)
            {
                printf("Case %d: C\n", i);
            }
            else if(total >= 60)
            {
                printf("Case %d: D\n", i);
            }
            else
            {
                printf("Case %d: F\n", i);
            }
        }
    }
    return 0;
}
