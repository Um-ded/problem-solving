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

int ara[100000000];

int main()
{
    int dec;

    while(scanf("%d", &dec) == 1)
    {
        if(dec < 0)
            break;

        if(dec == 0)
            printf("0\n");
        else
        {
            int i=0;

            while(dec != 0)
            {
                ara[i] = dec%3;
                dec = dec/3;
                i++;
            }

            while(i--)
                printf("%d", ara[i]);

            printf("\n");
        }
    }

    return 0;
}
