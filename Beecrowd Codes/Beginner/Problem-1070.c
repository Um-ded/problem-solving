#include <stdio.h>

int main()
{
    int i, x, n=6;
    scanf("%d", &x);

    if(x%2 == 0)
        x++;

    for(i=x; i<x+(n*2); i+=2)
        printf("%d\n", i);

    return 0;
}
