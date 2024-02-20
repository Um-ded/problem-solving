#include <stdio.h>

int main()
{
    int t, n, i, j, x, temp, arr[10];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(i=0; i<10; i++)
            arr[i] = 0;

        for(j=1; j<=n; j++)
        {
            temp = j;

            while(temp != 0)
            {
                x = temp%10;
                arr[x] += 1;
                temp /= 10;
            }
        }

        for(i=0; i<10; i++)
            printf("%d%c", arr[i], " \n"[i==9]);
    }

    return 0;
}
