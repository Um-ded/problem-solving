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
    int i;

    while(scanf("%d", &i) == 1)
    {
        if(i == 0)
            break;

        int p=0, b=0, t=log2(i);
        bool *arr;
        arr = (bool *)malloc(sizeof(int)*(t+5));

        while(i != 0)
        {
            arr[b] = i%2;

            if(arr[b] == 1)
                p++;

            i /= 2;
            b++;
        }

        printf("The parity of ");
        while(b--)
            printf("%d", arr[b]);

        printf(" is %d (mod 2).\n", p);
    }

    return 0;
}
