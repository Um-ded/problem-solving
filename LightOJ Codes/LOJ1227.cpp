///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define min(x, y)                 (x<y)?x:y
#define max(x, y)                 (x>y)?x:y
#define pi                        acos(-1.0)
#define swap(x, y)                x^=y^=x^=y

typedef long long                 ll;
typedef double                    dbl;
typedef unsigned long long        ull;

int ara[32];

int main()
{
    int t, i;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        int n, p, q, j, cnt=0, sum=0;
        scanf("%d %d %d", &n, &p, &q);

        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[i]);
            sum += ara[i];

            if(cnt<p && sum<=q)
                cnt++;
        }

        printf("Case %d: %d\n", i, cnt);
    }

    return 0;
}
