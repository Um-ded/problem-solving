#include <stdio.h>

int main()
{
    int T, a, b, I, i, odd_sum;
    scanf("%d", &T);

    for(I = 1 ; I <= T ; I++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        odd_sum = 0;
        for(i = a ; i <= b ; i++)
        {
            if(i%2 == 0)
            {
                continue;
            }
            odd_sum += i;
        }
        printf("Case %d: %d\n", I, odd_sum);
    }
    return 0;
}


/**
sample input
2
1
5
3
5
*/



///another code
///#include <stdio.h>
///
///int main()
///{
///    int a, b, c, sum, i, j;
///
///    while(scanf("%d", &c) == 1)
///    {
///        for(j = 1 ; j <= c ; j++)
///        {
///            scanf("%d %d", &a, &b);
///            sum = 0;
///            if(a%2 == 0)
///            {
///                a = a+1;
///            }
///            if(b%2 == 0)
///            {
///                b = b-1;
///            }
///            for(i = a ; i <= b ; i += 2)
///            {
///                sum = sum+i;
///            }
///            printf("Case %d: %d\n", j, sum);
///        }
///    }
///    return 0;
///}
