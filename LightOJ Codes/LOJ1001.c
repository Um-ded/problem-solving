#include <stdio.h>

int main()
{
    int T, i, a=0, b=0, c;
    scanf("%d", &T);

    for(i=1 ; i<=T ; i++)
    {
        scanf ("%d", &c);

        if(c>=10)
        {
            a = c-10;
            b = 10;
            printf("%d %d\n", a, b);
        }
        else
        {
            if(a>c)
            {
                a=0;
            }
            b = c-a;
            printf("%d %d\n", a++, b);
        }
    }
    return 0;
}
