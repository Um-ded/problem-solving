#include <stdio.h>

int main()
{
    int n, m, temp, cnt=1;
    scanf(" %d %d", &n, &temp);
    n--;

    while(n--)
    {
        scanf(" %d", &m);

        if(m != temp)
        {
            cnt++;
        }
        temp = m;
    }

    printf("%d\n", cnt);
    return 0;
}
