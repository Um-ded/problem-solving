#include <stdio.h>

int main()
{
    int i, x, max, mp;
    scanf("%d", &max);
    mp = 1;

    for(i=2; i<=100; i++)
    {
        scanf("%d", &x);

        if(x>max)
        {
            max = x;
            mp = i;
        }
    }

    printf("%d\n%d\n", max, mp);
    return 0;
}
