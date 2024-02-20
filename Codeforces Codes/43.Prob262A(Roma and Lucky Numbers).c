#include <stdio.h>

int main()
{
    int n, k, i, cnt, ans;
    scanf(" %d %d", &n, &k);

    ans = 0;
    while(n--)
    {
        scanf(" %d", &i);

        cnt = 0;
        while(i != 0)
        {
            if(i%10 == 4 || i%10 == 7)
            {
                cnt++;
            }
            i /= 10;
        }

        if(cnt <= k)
        {
            ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}
