#include <stdio.h>
#include <string.h>

int main()
{
    int t, l, i, j;
    char a[60], b[105];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", b);
        l = strlen(b);

        if(l == 2)
            strcpy(a, b);
        else
        {
            for(i=0, j=0; i<= l-3; i+=2, j++)
                a[j] = b[i];

            a[j] = b[i];
            a[j+1] = b[i+1];
            a[j+2] = '\0';
        }

        printf("%s\n", a);
    }

    return 0;
}
