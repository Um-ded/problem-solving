#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define size         101
#define min(x, y)    (x<y)?x:y
#define max(x, y)    (x>y)?x:y
#define pi           acos(-1.0)

typedef long long       ll;
typedef double          dbl;

int main()
{
    char c;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            printf("%c", c);
        else
            printf("%c", c-7);
    }

    return 0;
}
