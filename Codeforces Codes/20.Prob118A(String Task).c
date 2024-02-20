#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[105];
    int len, i;
    scanf("%s", str);

    len = strlen(str);
    for(i=0 ; i<len ; i++)
    {
        if(str[i]!='A' && str[i]!='a' && str[i]!='E' && str[i]!='e' && str[i]!='I' && str[i]!='i' && str[i]!='O' && str[i]!='o' && str[i]!='U' && str[i]!='u' && str[i]!='Y' && str[i]!='y')
        {
            printf(".%c", tolower(str[i]));
        }
    }

    printf("\n");
    return 0;
}
