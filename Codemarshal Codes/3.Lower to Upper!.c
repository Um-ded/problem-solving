#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int t, i, j, l;
    char name[105];
    scanf("%d\n", &t);

    for(i=1; i<=t; i++)
    {
        gets(name);
        l = strlen(name);
        for(j=0; j<l; j++)
        {
            name[j] = toupper(name[j]);
        }
        printf("Case %d: %s\n", i, name);
    }
    return 0;
}
