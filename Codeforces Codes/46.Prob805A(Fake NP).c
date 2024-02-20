#include <stdio.h>

int main()
{
    int l, r;
    scanf(" %d %d", &l, &r);

    if((l == r) && (l%2 != 0))
    {
        printf("%d\n", l);
    }
    else
    {
        printf("2\n");
    }

    return 0;
}
