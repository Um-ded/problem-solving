#include <stdio.h>

int main()
{
    int n=6, c=0;
    double x, s=0;

    while(n--)
    {
        scanf("%lf", &x);

        if(x>0.0)
        {
            s += x;
            c++;
        }
    }

    printf("%d valores positivos\n%.1f\n", c, s/c);
    return 0;
}
