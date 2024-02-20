#include <stdio.h>
#include <math.h>
#define PI acos(-1)

int main()
{
    int T, L;
    double t_area, c_area, r_area;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &L);

        t_area = .6 * pow(L, 2);
        c_area = PI * pow((.2*L), 2);
        r_area = t_area - c_area;

        printf("%.2lf %.2lf\n", c_area, r_area);
    }
    return 0;
}
