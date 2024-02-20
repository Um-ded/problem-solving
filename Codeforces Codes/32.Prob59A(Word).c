#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[105];
    int i, len, l=0, u=0;
    scanf("%s", s);

    len = strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            u++;
        else
            l++;
    }

    for(i=0; i<len; i++)
    {
        if(l>=u)
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }

    printf("%s\n", s);
    return 0;
}
