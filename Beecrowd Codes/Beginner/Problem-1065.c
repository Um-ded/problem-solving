#include <stdio.h>

int main()
{
    int i=5, x, c=0;

    while(i--)
    {
        scanf("%d", &x);

        if(x%2 == 0)
            c++;
    }

    printf("%d valores pares\n", c);
    return 0;
}
