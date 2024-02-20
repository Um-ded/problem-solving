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
    dbl fc, c, f, d;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf", &c, &d);
        f = (9*c)/5+d;
        fc = (f*5)/9;
        printf("Case %d: %.2f\n", i, fc);
    }

    return 0;
}
