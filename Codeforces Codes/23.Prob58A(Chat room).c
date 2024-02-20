#include <stdio.h>

int main()
{
    char s[105], word[] = "hello";
    int i, j=0;
    scanf("%s", s);

    for(i=0, j=0 ; s[i]!='\0' ; i++)
    {
        if(s[i]==word[j])
        {
            j++;
        }

        if(j==5)
        {
            printf("YES\n");
            break;
        }
    }

    if(j!=5)
    {
        printf("NO\n");
    }

    return 0;
}
