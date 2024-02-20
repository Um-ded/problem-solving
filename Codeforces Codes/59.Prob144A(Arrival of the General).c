#include <stdio.h>

int main()
{
    int n, i, a, min=0, max=0, high=0, low=100;
    scanf(" %d", &n);

    for(i=1; i<=n; i++)
    {
        scanf(" %d", &a);

        if(a > high)
        {
            max = i;
            high = a;
        }

        if(a <= low)
        {
            min = i;
            low = a;
        }
    }

    if(max > min)
        printf("%d\n", (max-1)+(n-min)-1);
    else
        printf("%d\n", (max-1)+(n-min));

    return 0;
}
