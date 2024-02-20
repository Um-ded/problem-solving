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

int main()
{
    int t, i;
    ll a, b, c;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if((a+b)<=c || (b+c)<=a || (c+a)<=b)
            printf("Case %d: Invalid\n", i);
        else if(a<=0 || b<=0 || c<=0)
            printf("Case %d: Invalid\n", i);
        else if(a==b && b==c)
            printf("Case %d: Equilateral\n", i);
        else if(a==b || b==c || c==a)
            printf("Case %d: Isosceles\n", i);
        else
            printf("Case %d: Scalene\n", i);
    }

    return 0;
}
