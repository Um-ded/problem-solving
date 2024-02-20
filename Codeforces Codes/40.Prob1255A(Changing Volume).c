#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, a, b, x, diff;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);
        diff = abs(a-b);
        x = 0;

        while(diff != 0)
        {
            if(diff >= 5)
            {
                x += diff/5;
                diff %= 5;
            }
            else if(diff >= 2)
            {
                x += diff/2;
                diff %= 2;
            }
            else
            {
                x += diff;
                diff = 0;
            }
        }

        printf("%d\n", x);
    }

    return 0;
}
