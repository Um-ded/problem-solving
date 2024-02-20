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
    char pass[3], a[3], test[205] = "";
    int n, i=0, j, k;
    scanf("%s %d", pass, &n);

    if(n == 1)
    {
        scanf("%s", a);

        if(!strcmp(pass, a))
        {
            printf("YES\n");
            return 0;
        }
        else if(pass[0] == a[1] && pass[1] == a[0])
        {
            printf("YES\n");
            return 0;
        }
    }
    else
    {
        while(n--)
        {
            scanf("%s", a);

            if(!strcmp(pass, a))
            {
                printf("YES\n");
                return 0;
            }
            else
            {
                strcat(test, a);
                i += 2;
            }
        }
        test[i] = '\0';

        for(j=0; j<i; j++)
        {
            if(pass[0] == test[j] && j&1)
            {
                for(k=0; k<i; k++)
                {
                    if(pass[1] == test[k] && k%2 == 0)
                    {
                        printf("YES\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("NO\n");
    return 0;
}
