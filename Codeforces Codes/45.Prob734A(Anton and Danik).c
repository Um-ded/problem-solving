#include <stdio.h>

int main()
{
    int n, a=0, d=0;
    char s;
    scanf("%d", &n);

    while(n--)
    {
        scanf(" %c", &s);

        if(s == 'D')
        {
            d++;
        }
        else
        {
            a++;
        }
    }

    if(a>d)
    {
        printf("Anton\n");
    }
    else if(a<d)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;
}
