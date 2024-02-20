#include <stdio.h>
#include <math.h>

int main()
{
    double n;
    int i, j, ans, m;
    char x[1005], y[1005];
    scanf(" %lf", &n);
    m = n;
    ans = ceil((n*n)/2);
    printf("%d\n", ans);

    for(i=0, j=1; i<m; i+=2, j+=2)
    {
        x[i] = 'C';
        x[j] = '.';
        y[i] = '.';
        y[j] = 'C';
    }
    x[m] = '\0';
    y[m] = '\0';

    for(i=1; i<=m; i++)
    {
        if(i%2 != 0)
            printf("%s\n", x);
        else
            printf("%s\n", y);
    }

    return 0;
}
