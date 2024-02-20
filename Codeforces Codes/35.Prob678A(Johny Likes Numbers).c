#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    if((n+1)%k == 0)
    {
        printf("%d\n", n+1);
    }
    else
    {
        printf("%d\n", (((n+1)/k)+1)*k);
    }

    return 0;
}
