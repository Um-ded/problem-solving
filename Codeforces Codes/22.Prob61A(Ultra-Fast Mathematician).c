#include <stdio.h>

int main()
{
    char str1[105], str2[105];
    int i;
    scanf("%s %s", str1, str2);

    for(i=0 ; str1[i]!='\0' ; i++)
    {
        if(str1[i]==str2[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }

    printf("\n");
    return 0;
}
