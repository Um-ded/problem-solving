#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, i;
    double ox, oy, ax, ay, bx, by, oa, ob, ab, angle, acb;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf", &ox, &oy, &ax, &ay, &bx, &by);

        oa = sqrt(pow((ox-ax), 2)+pow((oy-ay), 2));
        ob = sqrt(pow((ox-bx), 2)+pow((oy-by), 2));
        ab = sqrt(pow((ax-bx), 2)+pow((ay-by), 2));
        angle = acos((oa*oa+ob*ob-ab*ab)/(2*oa*ob));
        acb = oa*angle;

        printf("Case %d: %f\n", i, acb);
    }

    return 0;
}
