#include <stdio.h>
#include <math.h>

int main()
{
    int t, n, diff;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        diff = pow(2, (n/2)+1)-2;
        printf("%d\n", diff);
    }

    return 0;
}
