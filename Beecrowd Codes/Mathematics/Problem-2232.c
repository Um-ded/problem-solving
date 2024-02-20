#include <stdio.h>
#include <math.h>

int main()
{
    int t, n, i;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

///        int sum = 0;
///        for(i=0 ; i<n ; i++)
///        {
///            sum += pow(2, i);
///        }

        int sum = pow(2, n) - 1;///this is easy and fast solution
        printf("%d\n", sum);
    }

    return 0;
}
