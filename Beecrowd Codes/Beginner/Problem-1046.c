#include <stdio.h>

int main()
{
    int x, y, z;
    scanf(" %d %d", &x, &y);

    if(x>=y)
        z = 24+y-x;
    else
        z = y-x;

    printf("O JOGO DUROU %d HORA(S)\n", z);
    return 0;
}
