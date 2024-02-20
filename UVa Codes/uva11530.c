#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, j, cnt;
    char str[102];
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        getchar();
        scanf("%[^\n]", str);

        cnt = 0;
        for(j=0; j<strlen(str); j++)
        {
            if(str[j] == 'a' || str[j] == 'd' || str[j] == 'g' || str[j] == 'j' || str[j] == 'm' || str[j] == 'p' || str[j] == 't' || str[j] == 'w' || str[j] == ' ')
                cnt++;
            else if(str[j] == 'b' || str[j] == 'e' || str[j] == 'h' || str[j] == 'k' || str[j] == 'n' || str[j] == 'q' || str[j] == 'u' || str[j] == 'x')
                cnt += 2;
            else if(str[j] == 'c' || str[j] == 'f' || str[j] == 'i' || str[j] == 'l' || str[j] == 'o' || str[j] == 'r' || str[j] == 'v' || str[j] == 'y')
                cnt += 3;
            else
                cnt += 4;
        }

        printf("Case #%d: %d\n", i, cnt);
    }

    return 0;
}
