#include <stdio.h>

int main()
{
    int n, m, moves;
    scanf(" %d %d", &n, &m);

    if(n <= m)
        moves = n;
    else
        moves = m;

    if(moves%2)
        printf("Akshat\n");
    else
        printf("Malvika\n");

    return 0;
}
