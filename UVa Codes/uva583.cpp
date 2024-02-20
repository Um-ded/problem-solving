#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define sz                        100001
#define min(x, y)                 (x<y)?x:y
#define max(x, y)                 (x>y)?x:y
#define pi                        acos(-1.0)
#define swap(x, y)                x^=y^=x^=y

typedef long long                 ll;
typedef double                    dbl;
typedef unsigned long long        ull;

bool arr[sz];
int prime[10000];

void sieve()
{
    int i, j, k = 0;
    prime[k++] = 2;

    for(int i=3; i*i<sz; i+=2)
        if(!arr[i])
            for(int j=i*i; j<sz; j+=i+i)
                arr[j] = 1;

    for(int i=3; i<sz; i+=2)
        if(!arr[i])
            prime[k++] = i;
}

int main()
{
    sieve();
    int n;

    while(~scanf("%d", &n))
    {
        if(n==0)
            break;

        bool first = 1;
        printf("%d", n);

        if(n<0)
        {
            n *= -1;
            printf(" = -1");
            first = 0;
        }

        for(int i=0; ((ll)prime[i]*(ll)prime[i])<=((ll)n); i++)
        {
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    n /= prime[i];

                    if(first)
                    {
                        printf(" = %d", prime[i]);
                        first = 0;
                    }
                    else
                        printf(" x %d", prime[i]);
                }
            }
        }

        if(n>1)
        {
            if(first)
                printf(" = %d", n);
            else
                printf(" x %d", n);
        }

        puts("");
    }

    return 0;
}
