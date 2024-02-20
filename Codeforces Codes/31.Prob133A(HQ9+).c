#include <stdio.h>
#include <string.h>

int main()
{
    char p[105];
    int i, l;
    scanf("%s", p);

    l = strlen(p);
    for(i=0; i<l; i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}

