#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

char s[1005];

int main()
{
    int n, l, i, j;
    char temp;
    scanf(" %d", &n);

    while(n--)
    {
        scanf(" %[^\n]", s);

        l = strlen(s);
        for(i=0; i<l; i++)
        {
            if(isalpha(s[i]))
                s[i] += 3;
        }

        for(i=0, j=l-1; i<l/2; i++, j--)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }

        for(i=floor(l/2); i<l; i++)
        {
            s[i] -= 1;
        }

        printf("%s\n", s);
    }

    return 0;
}
