#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, cnt=0;
    double c;
    scanf("%d", &n);

    for(a=3; a<n; a++)
    {
        for(b=3; b<=a; b++)
        {
            if(((a*a)+(b*b)) <= (n*n))
            {
                c = sqrt((a*a)+(b*b));
                if(c == (int)c)
                    cnt++;
            }
            else
                break;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
