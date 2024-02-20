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
    int n, i, j;
    scanf("%d", &n);
    char b[n+5][n+5];

    for(i=0; i<n; i++)
        scanf("%s", b[i]);

    for(i=0; i<n-2; i++)
    {
        if(b[i][0] == '.' || b[i][n-1] == '.')
        {
            printf("NO\n");
            return 0;
        }

        for(j=1; j<n-1; j++)
        {
            if(b[i][j] == '.')
            {
                if(b[i+1][j-1] == '.' && b[i+1][j] == '.' && b[i+1][j+1] == '.' && b[i+2][j] == '.')
                {
                    b[i][j] = '#';
                    b[i+1][j-1] = '#';
                    b[i+1][j] = '#';
                    b[i+1][j+1] = '#';
                    b[i+2][j] = '#';
                }
                else
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i][j] == '.')
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");
    return 0;
}
