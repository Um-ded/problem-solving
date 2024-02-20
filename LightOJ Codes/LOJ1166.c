#include <stdio.h>

int main()
{
    int t, n, i, cnt, j, temp, kase=0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        int arr[n+5];

        for(i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        cnt = 0;
        for(i=0; i<n; i++)
        {
            if(arr[i] != i+1)
            {
                for(j=i+1; j<n; j++)
                {
                    if(arr[j] == i+1)
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                        cnt++;
                    }
                }
            }
        }

        printf("Case %d: %d\n", ++kase, cnt);
    }

    return 0;
}
