#include <stdio.h>

int main()
{
    int h1, m1, h2, m2, h, m;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    if(h1>=h2)
        h = 24+h2-h1;
    else
        h = h2-h1;

    if(m1>m2)
    {
        m = 60+m2-m1;
        h--;
    }
    else
        m = m2-m1;

    if(h>=24 && m>0)
        h -= 24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    return 0;
}
