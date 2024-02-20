#include <stdio.h>

int main()
{
    char u[4], v[4], w[2], x[2], y[2], z[2];
    int d1, d2, d, h1, h2, h, m1, m2, m, s1, s2, s;
    scanf("%s %d", u, &d1);
    scanf("%d %s %d %s %d", &h1, w, &m1, x, &s1);
    scanf("%s %d", v, &d2);
    scanf("%d %s %d %s %d", &h2, y, &m2, z, &s2);

    d = d2-d1;

    if(h2 < h1)
    {
        h = 24+h2-h1;
        d--;
    }
    else
        h = h2-h1;

    if(m2 < m1)
    {
        m = 60+m2-m1;
        h--;
    }
    else
        m = m2-m1;

    if(s2 < s1)
    {
        s = 60+s2-s1;
        m--;
    }
    else
        s = s2-s1;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d, h, m, s);
    return 0;
}
