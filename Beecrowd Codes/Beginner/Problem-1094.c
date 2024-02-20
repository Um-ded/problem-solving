#include <stdio.h>

int main()
{
    int n, x, t=0, c=0, r=0, s=0;
    double pc, pr, ps;
    char ch;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %c", &x, &ch);
        t += x;

        if(ch == 'C')
            c += x;
        else if(ch == 'R')
            r += x;
        else
            s += x;
    }

    pc = (100.0/t)*c;
    pr = (100.0/t)*r;
    ps = (100.0/t)*s;

    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", pc);
    printf("Percentual de ratos: %.2f %%\n", pr);
    printf("Percentual de sapos: %.2f %%\n", ps);
    return 0;
}
