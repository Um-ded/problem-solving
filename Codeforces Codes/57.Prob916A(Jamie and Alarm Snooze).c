#include <stdio.h>

int main()
{
    int x, h, m, y=0;
    scanf(" %d %d %d", &x, &h, &m);

    while(1)
    {
        if(m%10 == 7 || h%10 == 7)
        {
            printf("%d\n", y);
            break;
        }
        else
        {
            m -= x;
            y++;

            if(m < 0)
            {
                m += 60;
                h--;

                if(h < 0)
                {
                    h += 24;
                }
            }
        }
    }

    return 0;
}
