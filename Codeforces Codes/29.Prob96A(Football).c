#include <stdio.h>
#include<string.h>

int main()
{
    char s[105];
    int l, i, cnt=1;
    scanf("%s", s);

    l = strlen(s);
    if(l<7)
        printf("NO\n");
    else
    {
        for(i=0; i<l; i++)
        {
            if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] && s[i+3]==s[i+4] && s[i+4]==s[i+5] && s[i+5] ==s[i+6])
            {
                printf("YES\n");
                cnt = 0;
                break;
            }
        }

        if(cnt)
        {
            printf("NO\n");
        }
    }
    return 0;
}
