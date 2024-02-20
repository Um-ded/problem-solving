#include <stdio.h>
#include <string.h>

int main()
{
    char s[10], t[10];
    scanf(" %s %s", s, t);
    int l = strlen(t);
    t[l-1] = '\0';

    if(strcmp(s, t) == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
