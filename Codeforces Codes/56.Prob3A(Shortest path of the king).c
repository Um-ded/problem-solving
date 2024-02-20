#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[3], b[3];
    int c, d, cnt=0;
    scanf(" %s %s", a, b);
    c = abs(b[0] - a[0]);
    d = abs(a[1] - b[1]);

    while(1)
    {
        if(c == 0 && d == 0)
            break;

        if(c != 0 && d != 0)
        {
            c--;
            d--;
            cnt++;
        }
        else if(c != 0)
        {
            c--;
            cnt++;
        }
        else if(d != 0)
        {
            d--;
            cnt++;
        }
    }
    printf("%d\n", cnt);

    c = b[0] - a[0];
    d = a[1] - b[1];
    while(1)
    {
        if(c == 0 && d == 0)
            break;

        if(c != 0 && d != 0)
        {
            if(c > 0 && d > 0)
            {
                printf("RD\n");
                c--;
                d--;
            }
            else if(c > 0 && d < 0)
            {
                printf("RU\n");
                c--;
                d++;
            }
            else if(c < 0 && d > 0)
            {
                printf("LD\n");
                c++;
                d--;
            }
            else
            {
                printf("LU\n");
                c++;
                d++;
            }

        }
        else if(c != 0)
        {
            if(c > 0)
            {
                printf("R\n");
                c--;
            }
            else
            {
                printf("L\n");
                c++;
            }
        }
        else if(d != 0)
        {
            if(d > 0)
            {
                printf("D\n");
                d--;
            }
            else
            {
                printf("U\n");
                d++;
            }
        }
    }

    return 0;
}
