#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, i, ax, ay, bx, by, cx, cy, dx, dy, area;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);

        dx = ax-bx+cx;
        dy = ay-by+cy;
        area = (ax*by+bx*cy+cx*dy+dx*ay-ay*bx-by*cx-cy*dx-dy*ax)/2;

        printf("Case %d: %d %d %d\n", i, dx, dy, abs(area));
    }

    return 0;
}

