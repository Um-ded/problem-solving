#include <stdio.h>

int main()
{
    int t, x, y, a, b, dis, hop, sec;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d %d", &x, &y, &a, &b);

        dis = y-x;
        hop = a+b;

        if(dis%hop == 0)
        {
            printf("%d\n", dis/hop);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
