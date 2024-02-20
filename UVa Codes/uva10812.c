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
    int s, d, x, y, i, n;
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d", &s, &d);

        if (s>=d && (s+d)%2==0)
        {
            x = (s+d)/2;
            y = (s-d)/2;
            printf("%d %d\n", x, y);
        }
        else
            printf("impossible\n");
    }

    return 0;
}
