#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, lp;
    scanf("%d", &n);
    lp = 2*(n+1);

    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0 && (2*(i+(n/i)))<lp)
        {
            lp = 2*(i+(n/i));
        }
    }

    printf("%d\n", lp);
    return 0;
}
