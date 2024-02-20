#include <stdio.h>

int main()
{
    int a, b, flag, i;
    scanf("%d %d", &a, &b);

    for(i=0 ;;)
    {
        a *= 3;
        b *= 2;
        i++;

        if(a > b)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
